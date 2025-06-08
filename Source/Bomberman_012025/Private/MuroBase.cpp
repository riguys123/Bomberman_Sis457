// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroBase.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AMuroBase::AMuroBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Crear la malla del muro y asignarla como RootComponent
	MeshMuro = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshMuro"));
	RootComponent = MeshMuro;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaMuro(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
	if (MallaMuro.Succeeded())
	{
		MeshMuro->SetStaticMesh(MallaMuro.Object);
	}

	// Escala inicial (puedes modificarla o usar AjustarTamanoMuro)
	AjustarTamanoMuro(FVector(1.0f, 1.0f, 1.0f));
}

// Called when the game starts or when spawned
void AMuroBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMuroBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AActor* AMuroBase::Clonar(UWorld* Mundo, const FVector& Pos, const FRotator& Rot) const
{
	AMuroBase* NuevoMuro = Mundo->SpawnActor<AMuroBase>(GetClass(), Pos, Rot);
	if (NuevoMuro)
	{
		NuevoMuro->Configurar(Tipo);
	}
	return NuevoMuro;
}

void AMuroBase::Configurar(const FString& NuevoTipo)
{
	Tipo = NuevoTipo;
}

void AMuroBase::AjustarTamanoMuro(FVector NuevoTamano)
{
	if (MeshMuro) // Evita crash por puntero nulo
	{
		MeshMuro->SetWorldScale3D(NuevoTamano);
	}
}
