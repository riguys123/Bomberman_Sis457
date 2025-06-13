// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueHongo.h"
#include "GameFramework/Character.h"
#include "GameFramework/Actor.h"

ABloqueHongo::ABloqueHongo()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMeshBloqueAcero(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (ObjetoMeshBloqueAcero.Succeeded())
	{
		MallaBloque_Padre->SetStaticMesh(ObjetoMeshBloqueAcero.Object);
		MallaBloque_Padre->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
	//para asignar textura
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoBloqueAceroMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Ground_Moss.M_Ground_Moss'"));
	if (ObjetoBloqueAceroMaterial.Succeeded())
	{
		MallaBloque_Padre->SetMaterial(0, ObjetoBloqueAceroMaterial.Object);
	}
	// Configurar la colisión
	MallaBloque_Padre->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	MallaBloque_Padre->OnComponentBeginOverlap.AddDynamic(this, &ABloqueHongo::OnOverlapBegin);  // Detectar cuando empieza la colisión


}

void ABloqueHongo::BeginPlay()
{
}

void ABloqueHongo::Tick(float DeltaTime)
{
}

void ABloqueHongo::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Verificar si el actor que colisiona es el personaje
	ACharacter* Personaje = Cast<ACharacter>(OtherActor);
	if (Personaje)
	{
		// Aplicar una fuerza hacia arriba al personaje
		Personaje->LaunchCharacter(FVector(0, 0, 1000), true, true); // Aplica una fuerza hacia arriba (ajustar el valor de 1000)

		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("Chocaste con el bloque hongo y saltaste hacia arriba"));
	}
}
AActor* ABloqueHongo::Clonar(UWorld* Mundo, const FVector& Pos, const FRotator& Rot) const
{
	// Spawn de un nuevo BloqueHielo usando la clase actual
	ABloqueHongo* NuevoBloque = Mundo->SpawnActor<ABloqueHongo>(GetClass(), Pos, Rot);
	if (NuevoBloque)
	{
		// Puedes configurar cosas específicas si quieres
	}
	return NuevoBloque;
}