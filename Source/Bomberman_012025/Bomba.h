// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bomba.generated.h"

UCLASS()
class BOMBERMAN_012025_API ABomba : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABomba();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshBomba;

	UPROPERTY(EditAnywhere, Category = "Bomba")
	float TiempoDeBoom = 3.0f;

	FTimerHandle TimerExplosion;
	FTimerHandle TimerFire;

	void Explotar();
	UPROPERTY(EditAnywhere, Category="Explosion")
	int32 RangoExplosion = 2;//bloques que llega la explosión

	UPROPERTY(EditAnywhere, Category = "Explosion")
	float DistanciaEntreBloques = 100.0f; //distancia bloques 


};
