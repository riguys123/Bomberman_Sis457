// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueBurbuja.h"

ABloqueBurbuja::ABloqueBurbuja()
{
    if (MallaBloque_Padre)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Basic_Floor.M_Basic_Floor'"));

        if (MaterialBase.Succeeded())
        {
            MallaBloque_Padre->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
}
