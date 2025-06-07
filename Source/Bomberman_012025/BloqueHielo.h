// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque_Padre.h"
#include "BloqueHielo.generated.h"

UCLASS()
class BOMBERMAN_012025_API ABloqueHielo : public ABloque_Padre
{
	GENERATED_BODY()
public:
	ABloqueHielo();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;


	FVector PosicionInicial;
	float TiempoMovimiento;
};
