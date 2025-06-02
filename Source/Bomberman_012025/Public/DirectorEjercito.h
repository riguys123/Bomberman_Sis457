// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IEjercitoBuilder.h"
#include "GameFramework/Actor.h"
#include "DirectorEjercito.generated.h"

UCLASS()
class BOMBERMAN_012025_API ADirectorEjercito : public AActor
{
	GENERATED_BODY()

private:
	IEjercitoBuilder* Builder;
public:
	void SetBuilder(IEjercitoBuilder* InBuilder)
	{
		Builder = InBuilder;
	}

	void ConstruirEjercitoAcuatico(UWorld* Mundo, FVector PosicionInicial)
	{
		Builder->Reset();
		Builder->AgregarComandanteA();
		Builder->AgregarEnemigoAcuaticoPezGlobo1();
		Builder->AgregarEnemigoAcuaticoPezGlobo2();
	}

public:	
	// Sets default values for this actor's properties
	ADirectorEjercito();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
