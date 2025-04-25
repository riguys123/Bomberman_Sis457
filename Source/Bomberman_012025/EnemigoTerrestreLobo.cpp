// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoTerrestreLobo.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Bomberman_012025Character.h"

AEnemigoTerrestreLobo::AEnemigoTerrestreLobo()
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

	ColisionCapsula->OnComponentBeginOverlap.AddDynamic(this, &AEnemigoTerrestreLobo::OnOverlapBegin);
}

void AEnemigoTerrestreLobo::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoTerrestreLobo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoTerrestreLobo::Morder(AActor* Jugador)
{
	if (Jugador && Jugador->IsA(ACharacter::StaticClass()))
	{
		// Lógica para causar hemorragia al jugador
		UE_LOG(LogTemp, Warning, TEXT("El EnemigoTerrestreLobo ha mordido al jugador y causado hemorragia."));

		// Aquí puedes implementar la lógica para reducir la salud del jugador con el tiempo timer
		
	}
}

void AEnemigoTerrestreLobo::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (OtherActor && OtherActor != this && OtherActor->IsA(ABomberman_012025Character::StaticClass()))
	{
		MostrarMensaje();
	}
}

void AEnemigoTerrestreLobo::MostrarMensaje() const
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("El enemigo Lobo te mordio")); //mensaje al colisionar con un enemigo
}

//void AEnemigoTerrestreLobo::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
//	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//	if (OtherActor && OtherActor != this && OtherActor->IsA(ACharacter::StaticClass()))
//	{
//		// Llamar al método Morder cuando el enemigo colisiona con el jugador
//		Morder(OtherActor);
//	}
//}