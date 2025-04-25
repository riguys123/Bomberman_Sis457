// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoTerrestreTicTac.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Bomberman_012025Character.h"

AEnemigoTerrestreTicTac::AEnemigoTerrestreTicTac()
{
	PrimaryActorTick.bCanEverTick = true;

	// Para las part�culas 
	//ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	//ParticleSystem->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	if (MallaAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MallaAsset.Object);
		MallaEnemigo->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
	}

	ColisionCapsula->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	ColisionCapsula->SetCapsuleRadius(80.0f);
	ColisionCapsula->SetCapsuleHalfHeight(96.0f);

	ColisionCapsula->OnComponentBeginOverlap.AddDynamic(this, &AEnemigoTerrestreTicTac::OnOverlapBegin);
}


void AEnemigoTerrestreTicTac::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoTerrestreTicTac::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoTerrestreTicTac::Explosion()
{
	// L�gica para la explosi�n
	UE_LOG(LogTemp, Warning, TEXT("El EnemigoTerrestreTicTac ha explotado."));

	// Ejemplo de c�mo podr�as aplicar da�o en un radio alrededor del enemigo
	TArray<AActor*> Ignorados;
	UGameplayStatics::ApplyRadialDamage(GetWorld(), 50.0f, GetActorLocation(), 200.0f, nullptr, Ignorados, this, GetInstigatorController(), true);

	// Destruir el enemigo despu�s de la explosi�n
	Destroy();
}

void AEnemigoTerrestreTicTac::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (OtherActor && OtherActor != this && OtherActor->IsA(ABomberman_012025Character::StaticClass()))
	{
		MostrarMensaje();
	}
}

void AEnemigoTerrestreTicTac::MostrarMensaje() const
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("El Enemigo TicTac explotara en 3 2 1...")); //mensaje al colisionar con un enemigo
}

//void AEnemigoTerrestreTicTac::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
//	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//	if (OtherActor && OtherActor != this && OtherActor->IsA(ACharacter::StaticClass()))
//	{
//		// Llamar al m�todo Explosion cuando el enemigo colisiona con el jugador
//		Explosion();
//	}
//}