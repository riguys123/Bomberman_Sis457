// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemigoSubterraneoTopo.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Bomberman_012025Character.h"

AEnemigoSubterraneoTopo::AEnemigoSubterraneoTopo()
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

	ColisionCapsula->OnComponentBeginOverlap.AddDynamic(this, &AEnemigoSubterraneoTopo::OnOverlapBegin);
}

void AEnemigoSubterraneoTopo::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoSubterraneoTopo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoSubterraneoTopo::CavarTunel()
{
	// L�gica para cavar un t�nel y pasar por debajo de los muros
	UE_LOG(LogTemp, Warning, TEXT("EnemigoSubterraneoTopo est� cavando un t�nel en la posici�n: %s"), *GetActorLocation().ToString());

	// Ejemplo de c�mo podr�as mover al enemigo para simular que est� cavando un t�nel
	FVector NuevaPosicion = GetActorLocation();
	NuevaPosicion.Z -= 100.0f; // Mover hacia abajo para simular cavar
	SetActorLocation(NuevaPosicion);
}

void AEnemigoSubterraneoTopo::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (OtherActor && OtherActor != this && OtherActor->IsA(ABomberman_012025Character::StaticClass()))
	{
		MostrarMensaje();
	}
}

void AEnemigoSubterraneoTopo::MostrarMensaje() const
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("El enemigo Topo cavo un tunel")); //mensaje al colisionar con un enemigo
}

//void AEnemigoSubterraneoTopo::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
//	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//	if (OtherActor && OtherActor != this && OtherActor->IsA(ACharacter::StaticClass()))
//	{
//		// L�gica cuando el enemigo colisiona con otro actor
//	}
//}