// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAcuaticoPezGlobo.h"
#include "GameFramework/Character.h"
#include "Components/SphereComponent.h"
#include "Bomberman_012025Character.h"

AEnemigoAcuaticoPezGlobo::AEnemigoAcuaticoPezGlobo()
{
	PrimaryActorTick.bCanEverTick = true;

	// Create and set up the collision component
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
	// Bind the overlap event
	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AEnemigoAcuaticoPezGlobo::OnOverlapBegin);
	DuracionVeneno = 5.0f; // Duración del veneno en segundos
}

void AEnemigoAcuaticoPezGlobo::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
}

void AEnemigoAcuaticoPezGlobo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoAcuaticoPezGlobo::Veneno()
{
	// Lógica para aplicar el veneno al jugador
// Aquí puedes implementar la lógica que desees para el veneno
	UE_LOG(LogTemp, Warning, TEXT("El jugador ha sido envenenado por el pez globo!"));
}

void AEnemigoAcuaticoPezGlobo::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (OtherActor && OtherActor != this && OtherActor->IsA(ABomberman_012025Character::StaticClass()))
	{
		MostrarMensaje();
	}
}

void AEnemigoAcuaticoPezGlobo::MostrarMensaje() const
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("El Enemigo PezGlobo te enveneno")); //mensaje al colisionar con un enemigo
}

//void AEnemigoAcuaticoPezGlobo::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
//	class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
//	bool bFromSweep, const FHitResult& SweepResult)
//{
//	if (OtherActor && (OtherActor != this))
//	{
//		ACharacter* Player = Cast<ACharacter>(OtherActor);
//		if (Player)
//		{
//			Veneno();
//			// Aquí puedes añadir lógica adicional, como aplicar un efecto visual o de sonido
//		}
//	}
//}
