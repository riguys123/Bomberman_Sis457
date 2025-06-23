// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IComand.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIComand : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMAN_012025_API IIComand
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	// Método que ejecuta el comando
	virtual void Ejecutar() = 0;

	// Método que deshace el comando (opcional pero útil)
	virtual void Deshacer() = 0;
};

