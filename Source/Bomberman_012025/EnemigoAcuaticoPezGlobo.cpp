#include "EnemigoAcuaticoPezGlobo.h"
#include "Bomberman_012025Character.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"

AEnemigoAcuaticoPezGlobo::AEnemigoAcuaticoPezGlobo()
{
    PrimaryActorTick.bCanEverTick = true;

    CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    CollisionComponent->InitSphereRadius(100.0f);
    CollisionComponent->SetCollisionProfileName(TEXT("Trigger"));
    RootComponent = CollisionComponent;

    MallaEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigo"));
    MallaEnemigo->SetupAttachment(RootComponent);

    static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (MallaAsset.Succeeded())
    {
        MallaEnemigo->SetStaticMesh(MallaAsset.Object);
        MallaEnemigo->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
    }

    CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AEnemigoAcuaticoPezGlobo::OnOverlapBegin);

    DuracionVeneno = 5.0f;
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
void AEnemigoAcuaticoPezGlobo::MostrarMensaje() const
{
    if (GEngine)
    {
        //GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("¡El Enemigo Pez Globo te envenenó!"));
    }
}
void AEnemigoAcuaticoPezGlobo::Veneno()
{
   // UE_LOG(LogTemp, Warning, TEXT("Jugador envenenado por Pez Globo (sin daño)"));
}
void AEnemigoAcuaticoPezGlobo::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
    bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && OtherActor != this)
    {
        ABomberman_012025Character* Player = Cast<ABomberman_012025Character>(OtherActor);
        if (Player)
        {
            MostrarMensaje();
            // Aquí podrías llamar a Veneno o lógica adicional
        }
    }
}