// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque_Padre.h"
#include "Bomberman_012025GameMode.h"
#include "BloqueBurbuja.generated.h"


class ABomberman_012025GameMode;
UCLASS()
class BOMBERMAN_012025_API ABloqueBurbuja : public ABloque_Padre
{
	GENERATED_BODY()
public:
	ABloqueBurbuja();
	
protected:

    virtual void BeginPlay() override;

public:

    virtual void Tick(float DeltaTime) override;
    virtual AActor* Clonar(UWorld* Mundo, const FVector& Pos, const FRotator& Rot) const override;

public:

    FVector PosicionInicial;
    float Velocidad = 300.f;
    float TiempoEntreMovimientos = 1.0f;
    float TiempoTranscurrido = 0.0f;
    float DistanciaRecorrido = 4500.f;
    int32 CurrentMovement = 1;
    TArray<FIntPoint> DireccionesValidas;
    int32 IndiceDireccion = 0;

    bool bPuedeMoverse = true;

    ABomberman_012025GameMode* GameModeRef;
};
