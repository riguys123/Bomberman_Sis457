// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberintoBuilder.h"
#include "Laberinto.h"
#include "LaberintoConcretoBuilder.generated.h"


//UStaticMesh* Bloque_PadreMesh;
UCLASS()
class BOMBERMAN_012025_API ALaberintoConcretoBuilder : public AActor, public IILaberintoBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaberintoConcretoBuilder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	ALaberinto* Laberinto;

public:
	virtual void ConstruirMatriz(const TArray<TArray<int32>>& Matriz) override;

	virtual ALaberinto* ObtenerLaberinto() override;

	virtual const TArray<FVector>& GetPosicionesValidas() const override;
private:
	TArray<TArray<int32>> aMapaBloques;
	TArray<FVector> PosicionesValidas;

};
