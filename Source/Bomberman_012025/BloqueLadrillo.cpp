// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueLadrillo.h"

ABloqueLadrillo::ABloqueLadrillo()
{
	if (MallaBloque_Padre)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'"));
        if (MaterialBase.Succeeded())
        {
            MallaBloque_Padre->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
    bDestruible = true;
	PuedeSubir = true;
	// Inicializar variables
	velocidad = 1.0f; // Velocidad de movimiento
	amplitud = 500.0f;   // Distancia maxima de apertura
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

	/*if (PuedeSubir) {

		// Calcular la nueva posición en el eje Z
		FVector NewLocation = GetActorLocation();
		float Tiempo = GetWorld()->GetTimeSeconds(); // Tiempo actual del juego

		// Movimiento oscilatorio en el eje Z (arriba y abajo, pero no baja de 5.0f)
		float Oscilacion = FMath::Sin(Tiempo * velocidad) * amplitud;

		// Movimiento oscilatorio en el eje Z (arriba y abajo)
		NewLocation.Z = FMath::Max(PosicionInicial + Oscilacion, 10.0f);

		// Actualizar la posición del actor
		SetActorLocation(NewLocation);
	}*/
}