// Fill out your copyright notice in the Description page of Project Settings.

#include "Director.h"

// Sets default values
ADirector::ADirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirector::SetBuilder(IILaberintoBuilder* InBuilder)
{
    Builder = InBuilder;
}

void ADirector::ConstruirLaberinto(const TArray<TArray<int32>>& Matriz)
{
	if (Builder)
	{
		Builder->ConstruirMatriz(Matriz);
		// Obtener las posiciones válidas del builder
		const TArray<FVector>& PosicionesValidas = Builder->GetPosicionesValidas();

	}
}

