// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IComand.h"
#include "ComandoColocarBomba.generated.h"

UCLASS()
class BOMBERMAN_012025_API AComandoColocarBomba : public AActor, public IIComand
{
	GENERATED_BODY()
private:
	class ABomberman_012025Character* Personaje;
	class ABomba* BombaColocada;
		
public:	
	// Sets default values for this actor's properties
	AComandoColocarBomba();
	void Inicializar(ABomberman_012025Character* _Personaje);
	virtual void Ejecutar() override;
	virtual void Deshacer() override;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
