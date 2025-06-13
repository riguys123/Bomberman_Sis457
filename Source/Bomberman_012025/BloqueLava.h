// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque_Padre.h"
#include "BloqueLava.generated.h"


UCLASS()
class BOMBERMAN_012025_API ABloqueLava : public ABloque_Padre
{
	GENERATED_BODY()

protected:
	ABloqueLava();
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Pos, const FRotator& Rot) const override;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UParticleSystemComponent* ParticulasLava;

	float TiempoLava;
	FVector PosicionInicial;
};
