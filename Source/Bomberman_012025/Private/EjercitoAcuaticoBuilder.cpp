// Fill out your copyright notice in the Description page of Project Settings.


#include "EjercitoAcuaticoBuilder.h"

// Sets default values
AEjercitoAcuaticoBuilder::AEjercitoAcuaticoBuilder((UWorld* InMundo, FVector PosicionInicial))
	: Mundo(InMundo), PosicionBase(InPosicion), EjercitoA(nullptr)

{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AEjercitoAcuaticoBuilder::Reset()
{
	Ejercito = Mundo->SpawnActor<AEjercitoA>(PosicionBase, FRotator::ZeroRotator);
}

void AEjercitoAcuaticoBuilder::AgregarComandanteA()
{
	FVector Pos = PosicionBase + FVector(0.f, 0.f, 100.f);
	AEnemigoAcuaticoAnguila* Comandante = Mundo->SpawnActor<AEnemigoAcuaticoAnguila>(Pos, FRotator::ZeroRotator);
	Ejercito->AgregarEnemigo(Comandante);
}

void AEjercitoAcuaticoBuilder::AgregarEnemigoAcuaticoPezGlobo1()
{
	FVector Pos = PosicionBase + FVector(0.f, 0.f, 50.f);
	AEnemigoAcuaticoPezGlobo* PezGlobo1 = Mundo->SpawnActor<AEnemigoAcuaticoPezGlobo>(Pos, FRotator::ZeroRotator);
	Ejercito->AgregarEnemigo(PezGlobo1);

}

void AEjercitoAcuaticoBuilder::AgregarEnemigoAcuaticoPezGlobo2()
{
	FVector Pos = PosicionBase + FVector(0.f, 0.f, 150.f);
	AEnemigoAcuaticoPezGlobo* PezGlobo2 = Mundo->SpawnActor<AEnemigoAcuaticoPezGlobo>(Pos, FRotator::ZeroRotator);
	Ejercito->AgregarEnemigo(PezGlobo2);

}

AEjercitoA* AEjercitoAcuaticoBuilder::GetEjercito()
{
	return Ejercito;
}

// Called when the game starts or when spawned
void AEjercitoAcuaticoBuilder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEjercitoAcuaticoBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

