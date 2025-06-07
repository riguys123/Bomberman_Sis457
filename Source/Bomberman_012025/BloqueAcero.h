// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque_Padre.h"
#include "BloqueAcero.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloqueAcero : public ABloque_Padre
{
	GENERATED_BODY()
public:
	ABloqueAcero();
protected:

	virtual void BeginPlay() override;


public:
	virtual void Tick(float DeltaTime) override;
};
