// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque_Padre.h"
#include "BloqueLadrillo.generated.h"

UCLASS()
class BOMBERMAN_012025_API ABloqueLadrillo : public ABloque_Padre
{
	GENERATED_BODY()
public:	
	ABloqueLadrillo();

protected:

	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;

public:
	virtual void Tick(float DeltaTime) override;
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Pos, const FRotator& Rot) const override;

public:

	bool PuedeSubir;
	float velocidad;
	float amplitud;
	float PosicionInicial;
};
