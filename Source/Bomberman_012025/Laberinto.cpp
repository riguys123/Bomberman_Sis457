// Fill out your copyright notice in the Description page of Project Settings.


#include "Laberinto.h"

// Sets default values
ALaberinto::ALaberinto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ALaberinto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALaberinto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALaberinto::SetBomba(int Cantidad)
{
	// Implementación de la función SetBomba
}
void ALaberinto::SetEnemigo(int Cantidad)
{
	// Implementación de la función SetEnemigo
}
void ALaberinto::SetPuerta(int Cantidad)
{
	// Implementación de la función SetPuerta
}
void ALaberinto::SetBloque_Padre(int Cantidad)
{
	// Implementación de la función SetBloque_Padre
}




