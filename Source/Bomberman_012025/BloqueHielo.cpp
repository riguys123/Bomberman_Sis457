// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueHielo.h"

ABloqueHielo::ABloqueHielo()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Water_Lake.M_Water_Lake'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaBloque_Padre->SetMaterial(0, ObjetoMaterial.Object);
	}
}