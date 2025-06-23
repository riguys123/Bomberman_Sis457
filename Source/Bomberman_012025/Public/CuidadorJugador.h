// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CuidadorJugador.generated.h"

class AMementoJugador;
class ABomberman_012025Character;

UCLASS()
class BOMBERMAN_012025_API ACuidadorJugador : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACuidadorJugador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY()
	AMementoJugador* Memento;


public:
	void Guardar(ABomberman_012025Character* Jugador);
	void Restaurar(ABomberman_012025Character* Jugador);

	UPROPERTY(EditDefaultsOnly, Category = "Jugador")
	TSubclassOf<ABomberman_012025Character> ClaseDelJugador;
};
