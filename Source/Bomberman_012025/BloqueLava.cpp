// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueLava.h"

ABloqueLava::ABloqueLava()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_CobbleStone_Smooth.M_CobbleStone_Smooth'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaBloque_Padre->SetMaterial(0, ObjetoMaterial.Object);
	}
}