#include "EnemigoAcuaticoAnguila.h"
#include "GameFramework/Character.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Bomberman_012025Character.h"

AEnemigoAcuaticoAnguila::AEnemigoAcuaticoAnguila()
{
	PrimaryActorTick.bCanEverTick = true;

	// Crear componente de colisión
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
	CollisionComponent->InitSphereRadius(100.0f);
	CollisionComponent->SetCollisionProfileName(TEXT("Trigger"));
	RootComponent = CollisionComponent;

	// Malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MallaAsset.Succeeded() && MallaEnemigo)
	{
		MallaEnemigo->SetStaticMesh(MallaAsset.Object);
		MallaEnemigo->SetRelativeLocation(FVector::ZeroVector);
	}

	// Vincular evento de colisión
	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AEnemigoAcuaticoAnguila::OnOverlapBegin);

	// Inicializar variables
	TiempoTotal = 0.0f;
	FrecuenciaOndulacion = 1.0f;
	AmplitudOndulacion = 1.0f;
	DireccionMovimiento = FVector(1.0f, 0.0f, 0.0f);

	// Puedes ajustar esto aquí si lo necesitas
	VelocidadMovimiento = 50.0f;
}

void AEnemigoAcuaticoAnguila::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoAcuaticoAnguila::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Movimiento ondulatorio
	TiempoTotal += DeltaTime;
	FVector NuevaPosicion = GetActorLocation();
	NuevaPosicion += DireccionMovimiento * DeltaTime * VelocidadMovimiento;
	NuevaPosicion.Z += FMath::Sin(TiempoTotal * FrecuenciaOndulacion) * AmplitudOndulacion;
	SetActorLocation(NuevaPosicion);

	// Chequear colisión con el entorno
	FHitResult HitResult;
	FVector Start = GetActorLocation();
	FVector End = Start + DireccionMovimiento * 50.0f;

	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this);

	if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, CollisionParams))
	{
		if (HitResult.bBlockingHit)
		{
			CambiarDireccion();
		}
	}
}

void AEnemigoAcuaticoAnguila::CambiarDireccion()
{
	DireccionMovimiento *= -1;
}

void AEnemigoAcuaticoAnguila::Paralizar(ACharacter* Player)
{
	if (Player)
	{
		//Player->DisableInput(nullptr);
		// Puedes usar un timer para reactivarlo después
	}
}

void AEnemigoAcuaticoAnguila::MostrarMensaje() const
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("¡Cuidado! La Anguila te ha paralizado."));
	}
}

void AEnemigoAcuaticoAnguila::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		ACharacter* Player = Cast<ACharacter>(OtherActor);
		if (Player)
		{
			Paralizar(Player);
			MostrarMensaje();
		}
	}
}
