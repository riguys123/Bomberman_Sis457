// Fill out your copyright notice in the Description page of Project Settings.


#include "CuidadorJugador.h"
#include "MementoJugador.h"
#include "Bomberman_012025/Bomberman_012025Character.h"
#include "Engine/World.h"

// Sets default values
ACuidadorJugador::ACuidadorJugador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	Memento = nullptr;	
}

// Called when the game starts or when spawned
void ACuidadorJugador::BeginPlay()
{
	Super::BeginPlay();

	if (!ClaseDelJugador)
	{
		ClaseDelJugador = ABomberman_012025Character::StaticClass();
	}
	
}

// Called every frame
void ACuidadorJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACuidadorJugador::Guardar(ABomberman_012025Character* Jugador)
{
	if (!Jugador) return;

	// Si ya existe un memento anterior, limpiarlo
	if (Memento)
	{
		Memento->Destroy();
		Memento = nullptr;
	}

	UWorld* World = GetWorld();
	if (World)
	{
		Memento = World->SpawnActor<AMementoJugador>(AMementoJugador::StaticClass());
		Jugador->GuardarEstado(Memento);
	}
}

void ACuidadorJugador::Restaurar(ABomberman_012025Character* Jugador)
{
	if (!Memento) return;

	UWorld* World = GetWorld();
	if (!World) return;

	// Verificar si el jugador fue destruido
	if (!Jugador || Jugador->IsPendingKill())
	{
		if (!ClaseDelJugador)
		{
			UE_LOG(LogTemp, Error, TEXT("ClaseDelJugador no está asignada en el cuidador."));
			return;
		}

		// Respawnear nuevo jugador
		Jugador = World->SpawnActor<ABomberman_012025Character>(
			ClaseDelJugador,
			Memento->PosicionGuardada,
			FRotator::ZeroRotator
		);

		if (!Jugador)
		{
			UE_LOG(LogTemp, Error, TEXT("Error al respawnear el jugador."));
			return;
		}
	}

	// Restaurar estado
	Memento->RestaurarEstado(Jugador);
}

