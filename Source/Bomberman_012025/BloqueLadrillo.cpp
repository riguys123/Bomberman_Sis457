// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueLadrillo.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "Particles/ParticleSystemComponent.h"

ABloqueLadrillo::ABloqueLadrillo()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMeshBloqueLadrillo(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (ObjetoMeshBloqueLadrillo.Succeeded())
	{
		MallaBloque_Padre->SetStaticMesh(ObjetoMeshBloqueLadrillo.Object);
		MallaBloque_Padre->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
	//para asignar textura al bloque
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoBloqueLadrilloMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_CobbleStone_Smooth.M_CobbleStone_Smooth'"));
	if (ObjetoBloqueLadrilloMaterial.Succeeded())
	{
		MallaBloque_Padre->SetMaterial(0, ObjetoBloqueLadrilloMaterial.Object);
	}

	bDestruible = true;
	PuedeSubir = true;
	// Inicializar variables
	velocidad = 1.0f; // Velocidad de movimiento
	amplitud = 500.0f;   // Distancia maxima de apertura

	//if (MallaBloque_Padre)
 //   {
 //       static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'"));
 //       if (MaterialBase.Succeeded())
 //       {
 //           MallaBloque_Padre->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
 //       }
 //   }
 
}

void ABloqueLadrillo::BeginPlay()
{
	Super::BeginPlay();
	// Guardar la posición inicial en el eje Z
	PosicionInicial = GetActorLocation().Z;
}

void ABloqueLadrillo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (PuedeSubir) {

		// Calcular la nueva posición en el eje Z
		FVector NewLocation = GetActorLocation();
		float Tiempo = GetWorld()->GetTimeSeconds(); // Tiempo actual del juego

		// Movimiento oscilatorio en el eje Z (arriba y abajo, pero no baja de 5.0f)
		float Oscilacion = FMath::Sin(Tiempo * velocidad) * amplitud;

		// Movimiento oscilatorio en el eje Z (arriba y abajo)
		NewLocation.Z = FMath::Max(PosicionInicial + Oscilacion, 5.0f);

		// Actualizar la posición del actor
		SetActorLocation(NewLocation);
	}
}