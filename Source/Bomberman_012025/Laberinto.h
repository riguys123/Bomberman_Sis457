// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberinto.h"
#include "Laberinto.generated.h"

class ABloque_Padre;

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

public:
	TArray<AActor*> Elementos;

	void AgregarElemento(AActor* Elemento);

};
