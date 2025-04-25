// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueHongo.h"

ABloqueHongo::ABloqueHongo()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Ground_Moss.M_Ground_Moss'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaBloque_Padre->SetMaterial(0, ObjetoMaterial.Object);
	}

}