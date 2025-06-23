// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BombaDecorator.h"
#include "BombaDecoratorFuego.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABombaDecoratorFuego : public ABombaDecorator
{
	GENERATED_BODY()

public:
	virtual void Explota() override;

private:
	void EfectoFuegoExtra();
};
