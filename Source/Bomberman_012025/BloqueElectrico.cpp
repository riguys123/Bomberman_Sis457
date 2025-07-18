// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueElectrico.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Materials/MaterialInterface.h"

ABloqueElectrico::ABloqueElectrico()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMeshBloqueAcero(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (ObjetoMeshBloqueAcero.Succeeded())
	{
		MallaBloque_Padre->SetStaticMesh(ObjetoMeshBloqueAcero.Object);

		MallaBloque_Padre->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
	//para asignar textura
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoBloqueAceroMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'"));
	if (ObjetoBloqueAceroMaterial.Succeeded())
	{
		MallaBloque_Padre->SetMaterial(0, ObjetoBloqueAceroMaterial.Object);

	}
	// Part�culas de electricidad
	ParticulasElectricas = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticulasElectricas"));
	ParticulasElectricas->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> FX(TEXT("/Game/StarterContent/Particles/P_Sparks.P_Sparks"));
	if (FX.Succeeded())
	{
		ParticulasElectricas->SetTemplate(FX.Object);
		ParticulasElectricas->SetWorldScale3D(FVector(15.0f));

	}
	// Inicializar variables
	bAbriendoM = false;
	VelocidadMovimiento = 100.0f; // Velocidad de movimiento
	DistanciaApertura = 200.0f;   // Distancia m�xima de apertura
	PosicionInicial = FVector::ZeroVector; // Se inicializar� en BeginPlay


	bDestruible = true;
}

void ABloqueElectrico::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation(); // Guardar la posici�n inicial
}

void ABloqueElectrico::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Obtener la posici�n actual del bloque
	FVector NuevaPosicion = GetActorLocation();

	// Mover hacia la derecha (abrir) o hacia la izquierda (cerrar) seg�n el estado
	if (bAbriendoM)
	{
		// Mover hacia la derecha (abrir)
		NuevaPosicion.X += VelocidadMovimiento * DeltaTime;
		if (NuevaPosicion.X >= PosicionInicial.X + DistanciaApertura)
		{
			bAbriendoM = false; // Cambiar direcci�n a cerrar
		}
	}
	else
	{
		// Mover hacia la izquierda (cerrar)
		NuevaPosicion.X -= VelocidadMovimiento * DeltaTime;
		if (NuevaPosicion.X <= PosicionInicial.X)
		{
			bAbriendoM = true; // Cambiar direcci�n a abrir
		}
	}
	// Aplicar la nueva posici�n
	SetActorLocation(NuevaPosicion);
}
AActor* ABloqueElectrico::Clonar(UWorld* Mundo, const FVector& Pos, const FRotator& Rot) const
{
	// Spawn de un nuevo BloqueHielo usando la clase actual
	ABloqueElectrico* NuevoBloque = Mundo->SpawnActor<ABloqueElectrico>(GetClass(), Pos, Rot);
	if (NuevoBloque)
	{
		// Puedes configurar cosas espec�ficas si quieres
	}
	return NuevoBloque;
}