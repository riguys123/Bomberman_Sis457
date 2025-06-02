// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAcuaticoAnguila.h"
#include "GameFramework/Character.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Bomberman_012025Character.h"


AEnemigoAcuaticoAnguila::AEnemigoAcuaticoAnguila()
{
	PrimaryActorTick.bCanEverTick = true;

	// Crear y configurar el componente de colisi�n
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
	CollisionComponent->InitSphereRadius(100.0f);
	CollisionComponent->SetCollisionProfileName(TEXT("Trigger"));
	RootComponent = CollisionComponent;
	//malla estatica
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MallaAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MallaAsset.Object);
		MallaEnemigo->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
	}
	// Vincular el evento de superposici�n
	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AEnemigoAcuaticoAnguila::OnOverlapBegin);

	// Inicializar variables
	TiempoTotal = 0.0f;
	FrecuenciaOndulacion = 1.0f;
	AmplitudOndulacion = 1.0f;
	DireccionMovimiento = FVector(1.0f, 0.0f, 0.0f);
}

void AEnemigoAcuaticoAnguila::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoAcuaticoAnguila::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// L�gica de movimiento ondulatorio
	TiempoTotal += DeltaTime;
	FVector NuevaPosicion = GetActorLocation();
	NuevaPosicion += DireccionMovimiento * DeltaTime * 50.0f; // Ajusta la velocidad seg�n sea necesario
	NuevaPosicion.Z += FMath::Sin(TiempoTotal * FrecuenciaOndulacion) * AmplitudOndulacion;
	SetActorLocation(NuevaPosicion);

	// L�gica para cambiar de direcci�n al chocar con una pared
	FHitResult HitResult;
	FVector Start = GetActorLocation();
	FVector End = Start + DireccionMovimiento * 50.0f; // Ajusta la distancia de detecci�n seg�n sea necesario

	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this);

	if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, CollisionParams))
	{
		CambiarDireccion();
	}
}

void AEnemigoAcuaticoAnguila::CambiarDireccion()
{
	// Implementar la l�gica para cambiar la direcci�n del movimiento
	DireccionMovimiento *= -1;
}

void AEnemigoAcuaticoAnguila::Paralizar(ACharacter* Player)
{
	if (Player)
	{
		// Implementar la l�gica para paralizar al jugador
		Player->DisableInput(nullptr);
		// Opcionalmente, puedes establecer un temporizador para reactivar la entrada despu�s de una cierta duraci�n
	}
}
//void AEnemigoAcuaticoAnguila::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//
//	if (OtherActor && OtherActor != this && OtherActor->IsA(ABomberman_012025Character::StaticClass()))
//	{
//		MostrarMensaje();
//	}
//}

void AEnemigoAcuaticoAnguila::MostrarMensaje() const
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("El enemigo Anguila te paralizo")); //mensaje al colisionar con un enemigo
}
/*
void AEnemigoAcuaticoAnguila::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
	class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this))
	{
		ACharacter* Player = Cast<ACharacter>(OtherActor);
		if (Player)
		{
			Paralizar(Player);
			// Aqu� puedes a�adir l�gica adicional, como aplicar un efecto visual o de sonido
		}
	}
}
*/