// Fill out your copyright notice in the Description page of Project Settings.


#include "MementoJugador.h"
#include "IOriginador.h" // Asegúrate que coincida con tu archivo real
#include "Bomberman_012025/Bomberman_012025Character.h"

// Sets default values
AMementoJugador::AMementoJugador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

void AMementoJugador::RestaurarEstado(IIOriginador* Originador)
{
	if (!Originador) return;

	// Lógica para restaurar la vida y posición del jugador
	ABomberman_012025Character* Jugador = Cast<ABomberman_012025Character>(Originador);
	if (Jugador)
	{
		Jugador->SetActorLocation(PosicionGuardada);
		Jugador->SetVida(VidaGuardada); // Este método lo debes tener o crear en el Character
	}
}
// Called when the game starts or when spawned
void AMementoJugador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMementoJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

