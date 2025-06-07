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
	IIEjercitoBuilder* Builder;

public:
	void SetBuilder(IIEjercitoBuilder* InBuilder)
	{
		Builder = InBuilder;
	}

	void ConstruirEjercitoAcuatico(UWorld* Mundo, FVector PosicionInicial)
	{
		Builder->Reset();
		Builder->AgregarComandante();
		Builder->AgregarAEnemigoAcuaticoPezGlobo1();
		Builder->AgregarAEnemigoAcuaticoPezGlobo2();
	}

public:	
	// Sets default values for this actor's properties
	ADirectorEjercito();
	//// Asegúrate de que EjercitoA esté definido e inicializado correctamente
	//AActor* EjercitoA = GetWorld()->SpawnActor<AActor>(); // Ejemplo de inicialización
	//Builder = Cast<IIEjercitoBuilder>(EjercitoA);
	//if (Builder)
	//{
	//	SetBuilder(Builder);
	//}
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
