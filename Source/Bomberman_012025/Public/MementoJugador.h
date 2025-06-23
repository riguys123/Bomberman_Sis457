// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IMemento.h"
#include "IOriginador.h"
#include "MementoJugador.generated.h"

UCLASS()
class BOMBERMAN_012025_API AMementoJugador : public AActor, public IIMemento
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMementoJugador();

public:
	UPROPERTY()
	int VidaGuardada;

	UPROPERTY()
	FVector PosicionGuardada;

	virtual void RestaurarEstado(IIOriginador* Originador) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
