// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberinto.h"
#include "Laberinto.generated.h"



UCLASS()
class BOMBERMAN_012025_API ALaberinto : public AActor, public IILaberinto
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaberinto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void SetBomba(int Cantidad) override;
	virtual void SetEnemigo(int Cantidad) override;
	virtual void SetPuerta(int Cantidad) override;
	virtual void SetBloque_Padre(int Cantidad) override;


	//variables para los objetos del laberinto 
	/*
	UPROPERTY()
	TArray<ABomba*> Bombas;

	UPROPERTY()
	TArray<AEnemigo*> Enemigos;

	UPROPERTY()
	TArray<APuerta*> Puertas;

	UPROPERTY()	
	TArray<ABloque_Padre*> Bloques_Padres;
	*/
};
