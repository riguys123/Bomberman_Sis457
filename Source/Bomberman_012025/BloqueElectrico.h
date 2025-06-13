// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque_Padre.h"
#include "BloqueElectrico.generated.h"


UCLASS()
class BOMBERMAN_012025_API ABloqueElectrico : public ABloque_Padre
{
	GENERATED_BODY()
public:
	ABloqueElectrico();
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Pos, const FRotator& Rot) const override;

public:
	UParticleSystemComponent* ParticulasElectricas;

	bool bAbriendoM;
	float VelocidadMovimiento;
	float DistanciaApertura; // Distancia máxima al abrir
	FVector PosicionInicial; // Posición inicial
};
