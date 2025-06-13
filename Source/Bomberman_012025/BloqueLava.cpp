// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueLava.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "Particles/ParticleSystemComponent.h"

ABloqueLava::ABloqueLava()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMeshBloqueAcero(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (ObjetoMeshBloqueAcero.Succeeded())
	{
		MallaBloque_Padre->SetStaticMesh(ObjetoMeshBloqueAcero.Object);

		MallaBloque_Padre->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
	//para asignar textura
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoBloqueAceroMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/Fuego.Fuego'"));
	if (ObjetoBloqueAceroMaterial.Succeeded())
	{
		MallaBloque_Padre->SetMaterial(0, ObjetoBloqueAceroMaterial.Object);

	}
	ParticulasLava = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticulasLava"));
	ParticulasLava->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> LavaFX(TEXT("/Game/StarterContent/Particles/P_Fire.P_Fire"));
	if (LavaFX.Succeeded())
	{
		ParticulasLava->SetTemplate(LavaFX.Object);
	}
	TiempoLava = 0.f;

	// Efecto de daño
	UE_LOG(LogTemp, Warning, TEXT("Bloque de lava activado"));
}

void ABloqueLava::BeginPlay()
{
	Super::BeginPlay();
	ParticulasLava->Activate();
	PosicionInicial = GetActorLocation();
}

void ABloqueLava::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoLava += DeltaTime;

	float DesplazamientoZ = FMath::Sin(TiempoLava * 2.0f) * 10.0f; // Subida y bajada suave
	FVector NuevaPosicion = PosicionInicial;
	NuevaPosicion.Z += DesplazamientoZ;

	SetActorLocation(NuevaPosicion);
}
AActor* ABloqueLava::Clonar(UWorld* Mundo, const FVector& Pos, const FRotator& Rot) const
{
	// Spawn de un nuevo BloqueHielo usando la clase actual
	ABloqueLava* NuevoBloque = Mundo->SpawnActor<ABloqueLava>(GetClass(), Pos, Rot);
	if (NuevoBloque)
	{
		// Puedes configurar cosas específicas si quieres
	}
	return NuevoBloque;
}