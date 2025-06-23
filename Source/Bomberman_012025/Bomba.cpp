// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomba.h"
#include "Bloque_Padre.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

//pendiente para colocar en el character para poner bombas 
 

// Sets default values
ABomba::ABomba()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshBomba = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshBomba"));
	MeshBomba->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMeshBloques(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (ObjetoMeshBloques.Succeeded())
	{
		MeshBomba->SetStaticMesh(ObjetoMeshBloques.Object);
		MeshBomba->SetWorldScale3D(FVector(0.4f));
	}

}

// Called when the game starts or when spawned
void ABomba::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(TimerExplosion, this, &ABomba::Explotar, TiempoDeBoom, false);
	
}

// Called every frame
void ABomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABomba::Explotar()
{
	UWorld* Mundo = GetWorld();
	if (!Mundo) return;

	//Cargar efectos
	UParticleSystem* FireFX = Cast<UParticleSystem>(StaticLoadObject(
		UParticleSystem::StaticClass(), nullptr,
		TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Fire.P_Fire'")
	));
	UParticleSystem* ExplosionFX = Cast<UParticleSystem>(StaticLoadObject(
		UParticleSystem::StaticClass(), nullptr,
		TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'")
	));
	//CENTRO de la bomba
	FVector Centro = GetActorLocation();
	Centro.Z += 50.f;
	//Efecto de explosi�n
	if(ExplosionFX)
	{
		UGameplayStatics::SpawnEmitterAtLocation(Mundo, ExplosionFX, Centro);
	}
	//Fuego en el centro (con autodestrucci�n despu�s de 2 segundos)
	if (FireFX)
	{
		UParticleSystemComponent* FireCenter = UGameplayStatics::SpawnEmitterAtLocation(Mundo, FireFX, Centro);
		if (FireCenter)
		{
			FireCenter->bAutoDestroy = false;

			FTimerDelegate Delegate;
			Delegate.BindLambda([FireCenter]()
				{
					if (FireCenter && !FireCenter->IsBeingDestroyed())
					{
						FireCenter->DestroyComponent();
					}
				});

			FTimerHandle TimerDestruirFuego;
			Mundo->GetTimerManager().SetTimer(TimerDestruirFuego, Delegate, 2.0f, false);
		}
	}
	//Direcciones en cruz (derecha, izquierda, adelante, atr�s)
	TArray<FVector> Direcciones = {
		FVector(1, 0, 0),
		FVector(-1, 0, 0),
		FVector(0, 1, 0),
		FVector(0, -1, 0)
	};

	//Afectar el centro (eliminar actores cercanos)
	TArray<AActor*> ActoresCentro;
	UGameplayStatics::GetAllActorsOfClass(Mundo, AActor::StaticClass(), ActoresCentro);
	for (AActor* Actor : ActoresCentro)
	{
		if (Actor != this && FVector::Dist(Actor->GetActorLocation(), Centro) < 100.f)
		{
			if (!Actor->ActorHasTag("Suelo"))
			{
				Actor->Destroy();
			}
		}
	}
	//Propagar fuego y explosi�n en cruz
	for (const FVector& Dir : Direcciones)
	{
		for (int32 i = 1; i <= RangoExplosion; ++i)
		{
			FVector PosCheck = GetActorLocation() + Dir * i * DistanciaEntreBloques;
			PosCheck.Z += 50.f;

			//Mostrar fuego temporal
			if (FireFX)
			{
				UParticleSystemComponent* Fire = UGameplayStatics::SpawnEmitterAtLocation(Mundo, FireFX, PosCheck);
				if (Fire)
				{
					Fire->bAutoDestroy = false;

					FTimerDelegate Delegate;
					Delegate.BindLambda([Fire]()
						{
							if (Fire && !Fire->IsBeingDestroyed())
							{
								Fire->DestroyComponent();
							}
						});
					FTimerHandle TimerFuego;
					Mundo->GetTimerManager().SetTimer(TimerFuego, Delegate, 2.0f, false);
				}
			}
			//Verificar colisi�n
			FHitResult Hit;
			FCollisionQueryParams Params;
			Params.AddIgnoredActor(this);

			bool Impacto = Mundo->LineTraceSingleByChannel(
				Hit,
				PosCheck + FVector(0, 0, 100),
				PosCheck - FVector(0, 0, 100),
				ECC_WorldDynamic,
				Params
			);

			if (Impacto && Hit.GetActor())
			{
				AActor* HitActor = Hit.GetActor();

				if (HitActor->ActorHasTag("Suelo"))
				{
					continue;
				}

				if (ABloque_Padre* Bloque = Cast<ABloque_Padre>(HitActor))
				{
					if (Bloque->bDestruible)
					{
						Bloque->Destroy();
					}
					break;
				}

				break; // detener con cualquier otro actor
			}
		}
	}
	// Destruir la bomba
	Destroy();
}

void ABomba::Explota()
{
}

