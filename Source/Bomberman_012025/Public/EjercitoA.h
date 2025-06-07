// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IEjercitoBuilder.h"
#include "EjercitoA.generated.h"

UCLASS()
class BOMBERMAN_012025_API AEjercitoA : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEjercitoA();
	void AgregarEnemigo(AActor* Enemigo);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
private:
	TArray<AActor*> Enemigos;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
