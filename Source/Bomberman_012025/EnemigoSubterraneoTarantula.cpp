// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoSubterraneoTarantula.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "Bomberman_012025Character.h"

AEnemigoSubterraneoTarantula::AEnemigoSubterraneoTarantula()
{
	PrimaryActorTick.bCanEverTick = true;

	// Para las partículas 
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

	ColisionCapsula->OnComponentBeginOverlap.AddDynamic(this, &AEnemigoSubterraneoTarantula::OnOverlapBegin);
}
void AEnemigoSubterraneoTarantula::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoSubterraneoTarantula::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoSubterraneoTarantula::PonerTrampa()
{
	// Lógica para colocar una trampa (en este caso, solo imprimimos un mensaje)
	//UE_LOG(LogTemp, Warning, TEXT("Trampa colocada por EnemigoSubterraneoTarantula en la posición: %s"), *GetActorLocation().ToString());

}

void AEnemigoSubterraneoTarantula::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (OtherActor && OtherActor != this && OtherActor->IsA(ABomberman_012025Character::StaticClass()))
	{
		MostrarMensaje();
	}
}

void AEnemigoSubterraneoTarantula::MostrarMensaje() const
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("El enemigo Tarantula puso una trampa")); //mensaje al colisionar con un enemigo
}

//void AEnemigoSubterraneoTarantula::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//	if (OtherActor && OtherActor != this && OtherActor->IsA(ACharacter::StaticClass()))
//	{
//		// Lógica cuando el enemigo colisiona con otro actor
//	}
//}
//
