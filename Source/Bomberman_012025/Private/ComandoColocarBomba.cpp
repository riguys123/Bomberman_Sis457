// Fill out your copyright notice in the Description page of Project Settings.


#include "ComandoColocarBomba.h"
#include "Bomberman_012025/Bomberman_012025Character.h"
#include "Bomberman_012025/Bomba.h"

// Sets default values
AComandoColocarBomba::AComandoColocarBomba()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	BombaColocada = nullptr;

}

void AComandoColocarBomba::Inicializar(ABomberman_012025Character* _Personaje)
{
	Personaje = _Personaje;
}

void AComandoColocarBomba::Ejecutar()
{
	if (Personaje)
	{
		BombaColocada = Personaje->ColocarBomba();// puntero a la bomba colocada
	}
}

void AComandoColocarBomba::Deshacer()
{
	if (BombaColocada)
	{
		BombaColocada->Destroy(); // Destruir la bomba colocada
		BombaColocada = nullptr;
	}
}

// Called when the game starts or when spawned
void AComandoColocarBomba::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AComandoColocarBomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

