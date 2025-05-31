// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Puerta.generated.h"


class UStaticMeshComponent;
UCLASS()
class BOMBERMAN_012025_API APuerta : public AActor
{
	GENERATED_BODY()
	
protected:
	// Componente de malla estática
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componentes")
	UStaticMeshComponent* Malla_Puerta;

public:	
	// Sets default values for this actor's properties
	APuerta();

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	float FloatSpeed;
	float RotationSpeed;
	bool bPuedeMoverse;
	// Variables para el movimiento aleatorio
	FVector PosicionInicial; // Guarda la posición inicial del bloque
	bool bMoverEnX;          // Determina si el bloque se mueve en el eje X
	float DistanciaMovimiento; // Distancia que se moverá el bloque

};
