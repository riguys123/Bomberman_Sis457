// Fill out your copyright notice in the Description page of Project Settings.

#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Components/StaticMeshComponent.h"
#include "Bloque_Padre.h"
#include "BloqueLadrillo.h"
#include "BloqueMadera.h"
#include "BloqueAcero.h"
#include "BloqueConcreto.h"
#include "BloqueBurbuja.h"
#include "BloqueLava.h"
#include "BloqueArena.h"
#include "BloqueElectrico.h"
#include "BloqueHielo.h"
#include "BloqueHongo.h"
#include "LaberintoConcretoBuilder.h"


// Sets default values
ALaberintoConcretoBuilder::ALaberintoConcretoBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ALaberintoConcretoBuilder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALaberintoConcretoBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ALaberintoConcretoBuilder::SetBomba(int Cantidad)
{
	// Implementación de la función SetBomba
}
void ALaberintoConcretoBuilder::SetEnemigo(int Cantidad)
{
	// Implementación de la función SetEnemigo
}
void ALaberintoConcretoBuilder::SetPuerta(int Cantidad)
{
	// Implementación de la función SetPuerta
}
void ALaberintoConcretoBuilder::SetBloque_Padre(int Cantidad)
{
	// Implementación de la función SetBloque_Padre
}

void ALaberintoConcretoBuilder::SpawnLaberinto()
{
	PosicionesValidas.Empty();
	// Spawnear bloques según el valor de aMapaBloques
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			FVector Posicion = FVector(110.0f + (i + 1) * 100.0f, -1250.0f + (j + 1) * 100.0f, 190.0f);//espacio entre bloques *

			switch (aMapaBloques[i][j]) {
			case 1:
				GetWorld()->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), Posicion, FRotator::ZeroRotator);
				break;
			case 2:
				GetWorld()->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), Posicion, FRotator::ZeroRotator);
				break;
			case 3:
				GetWorld()->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), Posicion, FRotator::ZeroRotator);
				break;
			case 4:
				GetWorld()->SpawnActor<ABloqueBurbuja>(ABloqueBurbuja::StaticClass(), Posicion, FRotator::ZeroRotator);
				break;
			case 5:
				GetWorld()->SpawnActor<ABloqueElectrico>(ABloqueElectrico::StaticClass(), Posicion, FRotator::ZeroRotator);
				break;
			case 6:
				GetWorld()->SpawnActor<ABloqueHongo>(ABloqueHongo::StaticClass(), Posicion, FRotator::ZeroRotator);
				break;
			case 7:
				GetWorld()->SpawnActor<ABloqueLava>(ABloqueLava::StaticClass(), Posicion, FRotator::ZeroRotator);
				break;
			case 8:
				GetWorld()->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), Posicion, FRotator::ZeroRotator);
				break;
			case 9:
				GetWorld()->SpawnActor<ABloqueArena>(ABloqueArena::StaticClass(), Posicion, FRotator::ZeroRotator);
				break;
			case 10:
				GetWorld()->SpawnActor<ABloqueHielo>(ABloqueHielo::StaticClass(), Posicion, FRotator::ZeroRotator);
				break;
			default:
				break;
			};
		};
	};

	// Crear lista de posiciones válidas (donde Laberinto1[i][j] == 0)
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			if (aMapaBloques[i][j] == 0) {
				FVector Pos = FVector(110.0f + (i + 1) * 100.0f, -1250.0f + (j + 1) * 100.0f, 190.0f);
				PosicionesValidas.Add(Pos);
			};
		};
	};
}
	