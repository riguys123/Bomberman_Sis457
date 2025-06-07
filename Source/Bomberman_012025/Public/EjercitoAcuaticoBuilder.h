// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IEjercitoBuilder.h"
#include "EjercitoA.h"
#include "IEjercitoBuilder.h"
#include "Bomberman_012025/EnemigoAcuaticoAnguila.h"
#include "Bomberman_012025/EnemigoAcuaticoPezGlobo.h"
#include "GameFramework/Actor.h"
#include "EjercitoAcuaticoBuilder.generated.h"

UCLASS()
class BOMBERMAN_012025_API AEjercitoAcuaticoBuilder : public AActor, public IIEjercitoBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEjercitoAcuaticoBuilder();

private:
	UWorld* Mundo; // Referencia al mundo del juego
	AEjercitoA* Ejercito;
	FVector PosicionBase;

public:
	AEjercitoAcuaticoBuilder(UWorld* InMundo, FVector PosicionInicial);

	void Reset()override;
	void AgregarComandante()override;
	void AgregarAEnemigoAcuaticoPezGlobo1()override;
	void AgregarAEnemigoAcuaticoPezGlobo2()override;
	AEjercitoA* GetEjercito() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
