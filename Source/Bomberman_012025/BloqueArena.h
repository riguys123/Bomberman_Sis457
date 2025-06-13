// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque_Padre.h"
#include "BloqueArena.generated.h"

UCLASS()
class BOMBERMAN_012025_API ABloqueArena : public ABloque_Padre
{
	GENERATED_BODY()
public:
	ABloqueArena();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Pos, const FRotator& Rot) const override;

protected:
	float VelocidadA;
	float Amplitud;
	float Direccion;
	FVector PosicionInicial;
	bool PuedeMoverseA;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};