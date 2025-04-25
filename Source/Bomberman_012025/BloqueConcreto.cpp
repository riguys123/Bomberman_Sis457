// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueConcreto.h"

ABloqueConcreto::ABloqueConcreto()
{
	if (MallaBloque_Padre)
	{
		static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Concrete_Grime.M_Concrete_Grime'"));
		if (MaterialBase.Succeeded())
		{
			MallaBloque_Padre->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
		}
	}
}
