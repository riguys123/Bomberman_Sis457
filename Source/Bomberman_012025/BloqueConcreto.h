// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque_Padre.h"
#include "BloqueConcreto.generated.h"


UCLASS()
class BOMBERMAN_012025_API ABloqueConcreto : public ABloque_Padre
{
	GENERATED_BODY()
public:
	ABloqueConcreto();

protected:
	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;
public:
	virtual void Tick(float DeltaTime) override;

public:
	bool bPuedeGirar;
	float RotationSpeed;
};
