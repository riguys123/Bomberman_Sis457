// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque_Padre.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
ABloque_Padre::ABloque_Padre()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaBloque_Padre = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
	MallaBloque_Padre->SetupAttachment(RootComponent);
	RootComponent = MallaBloque_Padre;

	//Para las particulas
	Particulas = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particulas"));
	Particulas->SetupAttachment(RootComponent);

    // Establece el Tamano inicial del bloque 
	AjustarTamano(FVector(1.0f, 1.0f, 2.0f)); //modificar 
	
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloque_Padre(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	//if (ObjetoMallaBloque_Padre.Succeeded())
	//{
	//	MallaBloque_Padre->SetStaticMesh(ObjetoMallaBloque_Padre.Object);

	//	MallaBloque_Padre->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	//	//Escala de los bloques 
	//	MallaBloque_Padre->SetRelativeScale3D(FVector(1.f, 1.f, 2.f)); //(2.f, 2.f, 4.f) perfecta escala
	//}

	FloatSpeed = 1.0f;
	RotationSpeed = 3.0f;

	bPuedeMoverse = true; // Habilitar movimiento
	bPuedeMoverse = false; // Por defecto, los bloques no se mueven
	bMoverEnX = FMath::RandBool(); // Decide aleatoriamente si se moverá en X o Y
	DistanciaMovimiento = 100.0f; // Distancia fija de movimiento (puedes ajustarla)

}

// Called when the game starts or when spawned
void ABloque_Padre::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABloque_Padre::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void ABloque_Padre::AjustarTamano(FVector NuevoTamano)
{
	MallaBloque_Padre->SetWorldScale3D(NuevoTamano);
}

void ABloque_Padre::SetTipoBloque(ETipoBloque NuevoTipo)
{
	TipoBloque = NuevoTipo;
}

ETipoBloque ABloque_Padre::GetTipoBloque() const
{
	return TipoBloque;
}
