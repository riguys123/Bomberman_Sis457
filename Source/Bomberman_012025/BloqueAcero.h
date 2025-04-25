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
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
