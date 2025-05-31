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

void ADirector::SetBuilder(TScriptInterface<IILaberintoBuilder> Builder)
{
	LB = Builder;
}

void ADirector::SetLaberinto(TScriptInterface<IILaberinto> Laberinto)
{
	LA = Laberinto;
}

void ADirector::MandarConstruir()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Construyendo Laberinto..."));
	if (LB)
	{
		LB->BuildBomba();
		LB->BuildEnemigo();
		LB->BuildPuerta();
		LB->BuildBloque_Padre();
	}
	if (LA)
	{
		LA->SetBomba(1);
		LA->SetEnemigo(1);
		LA->SetPuerta(1);
		LA->SetBloque_Padre(1);
	}
}
