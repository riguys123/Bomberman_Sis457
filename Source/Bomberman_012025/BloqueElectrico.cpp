// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueElectrico.h"

ABloqueElectrico::ABloqueElectrico()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaBloque_Padre->SetMaterial(0, ObjetoMaterial.Object);
	}
}
