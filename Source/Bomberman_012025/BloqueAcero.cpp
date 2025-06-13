// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueAcero.h"

ABloqueAcero::ABloqueAcero()
{
	PrimaryActorTick.bCanEverTick = true;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMeshBloqueAcero(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (ObjetoMeshBloqueAcero.Succeeded())
	{
		MallaBloque_Padre->SetStaticMesh(ObjetoMeshBloqueAcero.Object); // Asignar el mesh al componente de malla
		MallaBloque_Padre->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f)); // Establecer la ubicación relativa
	}
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoBloqueAceroMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Panel.M_Tech_Panel'"));
	if (ObjetoBloqueAceroMaterial.Succeeded())
	{
		MallaBloque_Padre->SetMaterial(0, ObjetoBloqueAceroMaterial.Object); // Asignar el material al slot 0
	}

	bDestruible = false; // Establecer el bloque de acero como no destruible
}

void ABloqueAcero::BeginPlay()
{
}

void ABloqueAcero::Tick(float DeltaTime)
{
}
AActor* ABloqueAcero::Clonar(UWorld* Mundo, const FVector& Pos, const FRotator& Rot) const
{
	// Spawn de un nuevo BloqueHielo usando la clase actual
	ABloqueAcero* NuevoBloque = Mundo->SpawnActor<ABloqueAcero>(GetClass(), Pos, Rot);
	if (NuevoBloque)
	{
		// Puedes configurar cosas específicas si quieres
	}
	return NuevoBloque;
}

//ETipoBloque ABloqueAcero::GetTipoBloque() const
//{
//	return TipoBloque();
//}
