// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAereoMurcielago.h"
#include "GameFramework/Character.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Bomberman_012025Character.h"

AEnemigoAereoMurcielago::AEnemigoAereoMurcielago()
{
    PrimaryActorTick.bCanEverTick = true;

    // Crear y configurar el componente de colisión
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
    // Vincular el evento de superposición
    CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AEnemigoAereoMurcielago::OnOverlapBegin);
}

void AEnemigoAereoMurcielago::BeginPlay()
{
    Super::BeginPlay();
}

void AEnemigoAereoMurcielago::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Lógica de movimiento aéreo (puedes personalizar esto según tus necesidades)
    FVector NuevaPosicion = GetActorLocation();
    NuevaPosicion.Z += FMath::Sin(GetWorld()->GetTimeSeconds()) * 20.0f; // Movimiento ondulatorio en el eje Z
    SetActorLocation(NuevaPosicion);
}

void AEnemigoAereoMurcielago::Chillido()
{
    // Implementar la lógica para alertar a los demás enemigos
    TArray<AActor*> Enemigos;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemigo::StaticClass(), Enemigos);

    for (AActor* Enemigo : Enemigos)
    {
        if (Enemigo != this)
        {
            // Aquí puedes implementar la lógica para alertar a cada enemigo
            // Por ejemplo, cambiar su estado o hacer que se muevan hacia el jugador
        }
    }

    // Opcionalmente, puedes añadir efectos visuales o de sonido aquí
}

void AEnemigoAereoMurcielago::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

    if (OtherActor && OtherActor != this && OtherActor->IsA(ABomberman_012025Character::StaticClass()))
    {
        MostrarMensaje();
    }
}

void AEnemigoAereoMurcielago::MostrarMensaje() const
{
    GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("El enemigo Murcielago alerto a los enemigos cercanos")); //mensaje al colisionar con un enemigo
}

//void AEnemigoAereoMurcielago::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
//    class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
//    bool bFromSweep, const FHitResult& SweepResult)
//{
//    if (OtherActor && (OtherActor != this))
//    {
//        ACharacter* Player = Cast<ACharacter>(OtherActor);
//        if (Player)
//        {
//            Chillido();
//            // Aquí puedes añadir lógica adicional, como aplicar un efecto visual o de sonido
//        }
//    }
//}