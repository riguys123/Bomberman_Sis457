// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAereoFenix.h"
#include "GameFramework/Character.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Bomberman_012025Character.h"

AEnemigoAereoFenix::AEnemigoAereoFenix()
{
    PrimaryActorTick.bCanEverTick = true;

    // Crear y configurar el componente de colisi�n
    CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    CollisionComponent->InitSphereRadius(100.0f);
    CollisionComponent->SetCollisionProfileName(TEXT("Trigger"));
    RootComponent = CollisionComponent;
    //malla estatica
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
    if (MallaAsset.Succeeded())
    {
        MallaEnemigo->SetStaticMesh(MallaAsset.Object);
        MallaEnemigo->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
    }
    // Vincular el evento de superposici�n
    CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AEnemigoAereoFenix::OnOverlapBegin);
}


void AEnemigoAereoFenix::BeginPlay()
{
    Super::BeginPlay();
}

void AEnemigoAereoFenix::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // L�gica de movimiento a�reo (puedes personalizar esto seg�n tus necesidades)
    FVector NuevaPosicion = GetActorLocation();
    NuevaPosicion.Z += FMath::Sin(GetWorld()->GetTimeSeconds()) * 10.0f; // Movimiento ondulatorio en el eje Z
    SetActorLocation(NuevaPosicion);
}

void AEnemigoAereoFenix::Quemadura(ACharacter* Player)
{
    if (Player)
    {
        // Implementar la l�gica para aplicar da�o al jugador
        UGameplayStatics::ApplyDamage(Player, 10.0f, nullptr, this, nullptr);
        // Opcionalmente, puedes a�adir efectos visuales o de sonido aqu�
    }
}

void AEnemigoAereoFenix::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

    if (OtherActor && OtherActor != this && OtherActor->IsA(ABomberman_012025Character::StaticClass()))
    {
        MostrarMensaje();
    }
}

void AEnemigoAereoFenix::MostrarMensaje() const
{
    GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("El Enemigo Fenix te quemo")); //mensaje al colisionar con un enemigo
}

//void AEnemigoAereoFenix::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
//    class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
//    bool bFromSweep, const FHitResult& SweepResult)
//{
//    if (OtherActor && (OtherActor != this))
//    {
//        ACharacter* Player = Cast<ACharacter>(OtherActor);
//        if (Player)
//        {
//            Quemadura(Player);
//            // Aqu� puedes a�adir l�gica adicional, como aplicar un efecto visual o de sonido
//        }
//    }
//}
