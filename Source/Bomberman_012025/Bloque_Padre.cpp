// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque_Padre.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABloque_Padre::ABloque_Padre()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaBloque_Padre = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
	//RootComponent = MeshComp;
	MallaBloque_Padre->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloque_Padre(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (ObjetoMallaBloque_Padre.Succeeded())
	{
		MallaBloque_Padre->SetStaticMesh(ObjetoMallaBloque_Padre.Object);

		MallaBloque_Padre->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		//Escala de los bloques 
		MallaBloque_Padre->SetRelativeScale3D(FVector(1.f, 1.f, 2.f)); //(2.f, 2.f, 4.f) perfecta escala
	}

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

	// Guardar la posición inicial del bloque
	PosicionInicial = GetActorLocation();
}

// Called every frame
void ABloque_Padre::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bPuedeMoverse)
	{
		FVector NewLocation = GetActorLocation();

		// Movimiento aleatorio en X o Y
		if (bMoverEnX)
		{
			// Movimiento horizontal (izquierda/derecha)
			NewLocation.X = PosicionInicial.X + FMath::Sin(GetWorld()->GetTimeSeconds()) * DistanciaMovimiento;
		}
		else
		{
			// Movimiento vertical (arriba/abajo)
			NewLocation.Y = PosicionInicial.Y + FMath::Sin(GetWorld()->GetTimeSeconds()) * DistanciaMovimiento;
		}

		SetActorLocation(NewLocation);
	}
	/*
	if (bPuedeMoverse)
	{
		FVector NewLocation = GetActorLocation();
		FRotator NewRotation = GetActorRotation();
		float RunningTime = GetGameTimeSinceCreation();

		// Aleatoriedad en el desplazamiento en Z
		float DeltaHeight = FMath::FRandRange(-1.0f, 1.0f) * FloatSpeed;
		NewLocation.Z += DeltaHeight;

		// Aleatoriedad en la rotación
		float DeltaRotation = FMath::FRandRange(-1.0f, 1.0f) * RotationSpeed;
		NewRotation.Yaw += DeltaRotation;

		SetActorLocationAndRotation(NewLocation, NewRotation);
	}*/
}
