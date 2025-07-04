// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Bomberman_012025/Bloque_Padre.h"
#include "ETipoBloque.h"
#include "IFabricaBloques.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIFabricaBloques : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMAN_012025_API IIFabricaBloques
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual ABloque_Padre* CrearBloque(ETipoBloque Tipo, const FVector& Posicion, int32 BloqueID) = 0;
};