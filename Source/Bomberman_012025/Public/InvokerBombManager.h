// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IComand.h"
#include "InvokerBombManager.generated.h"

UCLASS()
class BOMBERMAN_012025_API AInvokerBombManager : public AActor
{
	GENERATED_BODY()
	
private:
	// Puntero al comando actual
	IIComand* ComandoActual;

	// Historial opcional para deshacer
	TArray<IIComand*> HistorialComandos;

public:	
	// Sets default values for this actor's properties
	AInvokerBombManager();

	void SetComando(IIComand* NuevoComando);

	void EjecutarComando();

	void DeshacerUltimoComando();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
