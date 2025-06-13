// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueConcreto.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "Particles/ParticleSystemComponent.h"

ABloqueConcreto::ABloqueConcreto()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshBloqueConcretoAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (MeshBloqueConcretoAsset.Succeeded())
	{
		MallaBloque_Padre->SetStaticMesh(MeshBloqueConcretoAsset.Object);
	}

	static ConstructorHelpers::FObjectFinder<UMaterialInterface> BloqueConcretoMaterialAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'"));
	if (BloqueConcretoMaterialAsset.Succeeded())
	{
		MallaBloque_Padre->SetMaterial(0, BloqueConcretoMaterialAsset.Object);
	}

	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	// Encontrar una part�cula que simule vapor o niebla
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleSystemAsset(TEXT("/Game/StarterContent/Particles/P_Steam_Lit.P_Steam_Lit"));
	if (ParticleSystemAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleSystemAsset.Object);

		// Escalar el sistema de part�culas para que sea m�s grande
		ParticleSystem->SetWorldScale3D(FVector(1.0f, 1.0f, 1.5f));
	}
	bDestruible = true;

	bPuedeGirar = true; // Se asignar� desde el GameMode
	RotationSpeed = 50.0f; // Velocidad de rotaci�n por defecto

	//if (MallaBloque_Padre)
 //   {
 //       static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'"));
 //       if (MaterialBase.Succeeded())
 //       {
 //           MallaBloque_Padre->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
 //       }
 //   }

}

void ABloqueConcreto::BeginPlay()
{
	Super::BeginPlay();

}


void ABloqueConcreto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bPuedeGirar)
	{
		FRotator NewRotation = GetActorRotation();
		NewRotation.Yaw += RotationSpeed * DeltaTime;
		SetActorRotation(NewRotation);
	}
}
AActor* ABloqueConcreto::Clonar(UWorld* Mundo, const FVector& Pos, const FRotator& Rot) const
{
	// Spawn de un nuevo BloqueHielo usando la clase actual
	ABloqueConcreto* NuevoBloque = Mundo->SpawnActor<ABloqueConcreto>(GetClass(), Pos, Rot);
	if (NuevoBloque)
	{
		// Puedes configurar cosas espec�ficas si quieres
	}
	return NuevoBloque;
}