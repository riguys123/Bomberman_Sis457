// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberintoBuilder.h"
#include "Director.generated.h"

UCLASS()
class BOMBERMAN_012025_API ADirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	IILaberintoBuilder* Builder;

public:
	void SetBuilder(IILaberintoBuilder* InBuilder);
	void ConstruirLaberinto(const TArray<TArray<int32>>& Matriz);


};
