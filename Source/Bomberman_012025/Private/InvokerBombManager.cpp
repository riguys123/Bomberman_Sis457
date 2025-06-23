// Fill out your copyright notice in the Description page of Project Settings.


#include "InvokerBombManager.h"

// Sets default values
AInvokerBombManager::AInvokerBombManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	ComandoActual = nullptr;
}

void AInvokerBombManager::SetComando(IIComand* NuevoComando)
{
	ComandoActual = NuevoComando;
}

void AInvokerBombManager::EjecutarComando()
{
	if (ComandoActual)
	{
		ComandoActual->Ejecutar();
		HistorialComandos.Add(ComandoActual);
	}
}

void AInvokerBombManager::DeshacerUltimoComando()
{
	if (HistorialComandos.Num() > 0)
	{
		IIComand* Ultimo = HistorialComandos.Pop();
		if (Ultimo)
		{
			Ultimo->Deshacer();
		}
	}
}

// Called when the game starts or when spawned
void AInvokerBombManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInvokerBombManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

