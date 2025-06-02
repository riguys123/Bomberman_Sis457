// Fill out your copyright notice in the Description page of Project Settings.


#include "EjercitoA.h"

// Sets default values
AEjercitoA::AEjercitoA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AEjercitoA::AgregarEnemigo(AActor* Enemigo)
{
	if (Enemigo)
	{
		Enemigos.Add(Enemigo);
	}
}

// Called when the game starts or when spawned
void AEjercitoA::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEjercitoA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

