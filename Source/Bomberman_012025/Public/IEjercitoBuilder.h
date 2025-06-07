// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IEjercitoBuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIEjercitoBuilder : public UInterface
{
	GENERATED_BODY()
};
class AEjercitoA;

class BOMBERMAN_012025_API IIEjercitoBuilder
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
  
	virtual void Reset() = 0;
	virtual void AgregarComandante() = 0;
	virtual void AgregarAEnemigoAcuaticoPezGlobo1() = 0;
	virtual void AgregarAEnemigoAcuaticoPezGlobo2() = 0;
    virtual AEjercitoA* GetEjercito() = 0;
};
