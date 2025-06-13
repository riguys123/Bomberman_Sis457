// Copyright Epic Games, Inc. All Rights Reserved.

#include "Bomberman_012025GameMode.h"
#include "Bomberman_012025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
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
#include "Enemigo.h"
#include "EnemigoAcuaticoAnguila.h"
#include "EnemigoAcuaticoPezGlobo.h"
#include "EnemigoAereoMurcielago.h"
#include "EnemigoAereoFenix.h"
#include "EnemigoTerrestreLobo.h"
#include "EnemigoTerrestreTicTac.h"
#include "EnemigoSubterraneoTopo.h"
#include "EnemigoSubterraneoTarantula.h" 
#include "Laberinto.h"
#include "Director.h"
#include "ILaberintoBuilder.h"
#include "LaberintoConcretoBuilder.h"
#include "EjercitoAcuaticoBuilder.h"
#include "DirectorEjercito.h"
#include "FabricaBloques.h"
#include "ETipoBloque.h"
#include "IPrototype.h"
#include "MuroBase.h"


ABomberman_012025GameMode::ABomberman_012025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

}

void ABomberman_012025GameMode::BeginPlay()
{
	Super::BeginPlay();


	//-------------------------------------------------------------------------------FACTORY METHOD
	// 1. Spawnea la fábrica en el mundo
	FActorSpawnParameters SpawnParams;
	SpawnParams.Name = TEXT("FabricaDeBloques");
	
	AFabricaBloques* Fabrica = GetWorld()->SpawnActor<AFabricaBloques>(
		AFabricaBloques::StaticClass(),
		FVector(0.f, 0.f, 0.f),           // Posición donde aparece la fábrica
		FRotator::ZeroRotator,
		SpawnParams
	);

	// 2. Verifica que la fábrica se creó correctamente
	if (Fabrica)
	{
		// 3. Crea un bloque de tipo Ladrillo en la posición (100, 100, 0)
		Fabrica->CrearBloque(ETipoBloque::Ladrillo, FVector(100.f, 100.f, 0.f), 1);
	}



    //------------------------------------------------------------------------------BUILDER laberinto
	// Matriz del laberinto
	TArray<TArray<int32>> Matriz = {

{ 0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
	{ 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1 },
	{ 0,  0,  2,  3,  4,  5,  6,  7,  0,  9, 10,  0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  0,  0,  1,  2,  3,  4,  5,  6,  7,  8,  0,  10, 0,  1,  2,  3,  4,  5,  6,  7,  8,  0,  10, 0,  6,  2,  3,  0,  1 },
	{ 1,  0,  2,  2,  2,  2,  2,  2,  0,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  0,  2,  2,  2,  2,  2,  2,  2,  2,  2,  0,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  0,  2,  2,  2,  2,  2,  0,  1 },
	{ 1,  0,  4, 10,  0,  5,  9,  2,  0,  6,  1,  3,  0,  7,  5,  2,  9,  4,  6,  8,  0,  0,  3,  5,  7,  1,  2,  4,  6,  8,  3,  0,  3,  5,  2,  4,  6,  8,  9,  7,  2,  5,  0,  4,  6,  0,  3,  8,  0,  1 },
	{ 1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1 },
	{ 1,  0,  7, 10,  0,  5,  9,  2,  0,  6, 10,  3,  0,  7,  5,  2,  9,  4,  6,  8,  0,  0,  3,  5,  7, 10,  2,  4,  6,  8,  1,  0,  3,  5,  2,  4,  6,  8,  9,  7,  2,  5,  0,  4,  6,  0,  3,  8,  0,  1 },
	{ 1,  0,  1,  2,  3,  4,  5,  6,  0,  8,  9, 10,  0,  1,  2,  3,  4,  5,  6,  7,  8,  0, 10,  0,  1,  2,  3,  4,  5,  6,  7,  0,  9, 10,  0,  1,  2,  3,  4,  5,  6,  7,  0,  9, 10,  0,  8,  2,  0,  1 },
	{ 1,  0,  4, 10,  0,  5,  9,  2,  0,  6,  1,  3,  0,  7,  5,  2,  9,  4,  6,  8,  0,  0,  3,  5,  7,  10,  2,  4,  6,  8,  1,  0,  3,  5,  2,  4,  6,  8,  9,  7,  2,  5,  0,  4,  6,  0,  3,  8,  0,  1 },
	{ 1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1 },
	{ 1,  0,  7,  1,  0,  5,  9,  2,  0,  6, 10,  3,  0,  7,  5,  2,  9,  4,  6,  8,  0,  0,  3,  5,  7, 10,  2,  4,  6,  8,  1,  0,  3,  5,  2,  4,  6,  8,  9,  7,  2,  5,  0,  4,  6,  0,  3,  8,  0,  1 },
	{ 1,  0,  2,  3,  4,  5,  6,  7,  0,  9, 10,  0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  0,  0,  7,  2,  3,  4,  5,  6,  7,  8,  0, 10,  0,  1,  2,  3,  4,  5,  6,  7,  8,  0, 10,  0,  1,  2,  3,  0,  1 },
	{ 1,  0,  4,  2,  0,  5,  8,  7,  0,  9,  2,  3,  1,  4,  0,  5,  8,  7,  6,  9,  5,  0,  3,  4,  5,  0,  6,  7,  8,  9,  2,  0,  4,  4,  0,  5,  8,  7,  6,  9,  1,  2,  0,  4,  5,  0,  6,  7,  0,  1 },
	{ 1,  0,  3,  4,  5,  6,  7,  8,  0,  1,  0,  2,  3,  4,  5,  6,  7,  8,  9,  2,  0,  0,  3,  4,  5,  6,  7,  8,  9,  10,  0,  0,  3,  4,  5,  6,  7,  8,  9,  1,  0,  2,  0,  4,  5,  6,  7,  8,  0,  1 },
	{ 1,  0,  3,  2,  1,  0,  9,  8,  0,  6,  5,  4,  3,  2,  7,  0,  9,  8,  7,  6,  5,  0,  3,  2,  1,  0,  9,  8,  7,  6,  5,  0,  3,  2,  1,  0,  9,  8,  7,  6,  5,  4,  0,  2,  1,  0,  9,  8,  0,  1 },
	{ 1,  0,  2,  3,  4,  5,  6,  7,  0,  9,  1,  0,  2,  3,  4,  5,  6,  7,  8,  9,  1,  0,  2,  3,  4,  5,  6,  7,  8,  9,  1,  0,  2,  3,  4,  5,  6,  7,  8,  9,  1,  0,  0,  3,  4,  5,  6,  7,  0,  1 },
	{ 1,  0,  7,  6,  5,  4,  3,  2,  0,  0,  9,  8,  7,  6,  5,  4,  3,  2,  1,  0,  9,  0,  7,  6,  5,  4,  3,  2,  1,  0,  9,  0,  7,  6,  5,  4,  3,  2,  1,  0,  9,  8,  0,  6,  5,  4,  3,  2,  0,  1 },
	{ 1,  0,  1,  3,  0,  5,  6,  7,  0,  9,  3,  2,  1,  0,  5,  4,  6,  7,  8,  9,  2,  0,  10,  0,  5,  4,  6,  7,  8,  9,  10,  0,  2,  3,  4,  5,  6,  7,  8,  9,  0,  1,  0,  3,  4,  5,  6,  7,  0,  1 },
	{ 1,  0,  2,  3,  4,  5,  6,  7,  0,  9,  1,  2,  3,  4,  5,  6,  7,  8,  9,  0,  1,  0,  3,  4,  5,  6,  7,  8,  9,  0,  10,  0,  3,  4,  5,  6,  7,  8,  9,  0,  1,  2,  0,  4,  5,  6,  7,  8,  0,  1 },
	{ 1,  0,  3,  2,  1,  0,  9,  8,  0,  6,  5,  4,  3,  2,  1,  0,  9,  8,  7,  6,  5,  0,  3,  2,  1,  0,  9,  8,  7,  6,  5,  0,  3,  2,  1,  0,  9,  8,  7,  6,  5,  4,  0,  2,  1,  0,  9,  8,  0,  1 },
	{ 1,  0,  2,  3,  4,  5,  6,  7,  0,  9,  1,  0,  2,  3,  4,  5,  6,  7,  8,  9,  10,  0,  2,  3,  4,  5,  6,  7,  8,  9,  9,  0,  2,  3,  4,  5,  6,  7,  8,  9,  1,  0,  0,  3,  4,  5,  6,  7,  0,  1 },
	{ 1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1 },
	{ 1,  0,  2,  3,  4,  5,  6,  7,  0,  9, 10,  0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  0,  0,  1,  2,  3,  4,  5,  6,  7,  8,  0,  10, 0,  1,  2,  3,  4,  5,  6,  7,  8,  0,  10, 0,  1,  2,  3,  0,  1 },
	{ 1,  0,  2,  2,  2,  2,  2,  2,  0,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  0,  2,  2,  2,  2,  2,  2,  2,  2,  2,  0,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  0,  2,  2,  2,  2,  2,  0,  1 },
	{ 1,  0,  4,  1,  0,  5,  9,  2,  0,  6,  1,  3,  0,  7,  5,  2,  9,  4,  6,  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  8,  1,  0,  3,  5,  2,  4,  6,  8,  9,  7,  2,  5,  0,  4,  6,  0,  3,  8,  0,  1 },
	{ 1,  0,  1,  2,  3,  4,  5,  6,  0,  8,  9, 10,  0,  1,  2,  3,  4,  5,  6,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  9, 10,  0,  1,  2,  3,  4,  5,  6,  7,  0,  9, 10,  0,  3,  2,  0,  1 },
	{ 1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1 },
	{ 1,  0,  1,  2,  3,  4,  5,  6,  0,  8,  9, 10,  0,  5,  2,  3,  4,  5,  6,  7,  8,  0, 10,  0,  1,  2,  3,  4,  5,  6,  7,  0,  9, 10,  0,  1,  2,  3,  4,  5,  6,  7,  0,  9, 10,  0,  4,  2,  0,  1 },
	{ 1,  0,  4,  1,  0,  5,  9,  2,  0,  6,  6,  3,  0,  7,  5,  2,  9,  4,  6,  8,  0,  0,  3,  5,  7,  2,  2,  4,  6,  8,  8,  0,  3,  5,  2,  4,  6,  8,  9,  7,  2,  5,  0,  4,  6,  0,  3,  8,  0,  1 },
	{ 1,  0,  1,  2,  3,  4,  5,  6,  0,  8,  9, 10,  0,  1,  2,  3,  4,  5,  6,  7,  8,  0, 10,  0,  9,  2,  3,  4,  5,  6,  7,  0,  9, 10,  0,  1,  2,  3,  4,  5,  6,  7,  0,  9, 10,  0,  5,  2,  0,  1 },
	{ 1,  0,  7,  1,  0,  5,  9,  2,  0,  6, 10,  3,  0,  7,  5,  2,  9,  4,  6,  8,  0,  0,  3,  5,  7, 10,  2,  4,  6,  8,  6,  0,  3,  5,  2,  4,  6,  8,  9,  7,  2,  5,  0,  4,  6,  0,  3,  8,  0,  1 },
	{ 1,  0,  2,  3,  4,  5,  6,  7,  0,  9, 10,  0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  0,  0,  7,  2,  3,  4,  5,  6,  7,  8,  0, 10,  0,  1,  2,  3,  4,  5,  6,  7,  8,  0, 10,  0,  1,  2,  3,  0,  1 },
	{ 1,  0,  4,  2,  0,  5,  8,  7,  0,  9,  2,  3,  1,  4,  0,  5,  8,  7,  6,  9,  5,  0,  3,  4,  5,  0,  6,  7,  8,  9,  2,  0,  8,  4,  0,  5,  8,  7,  6,  9,  1,  2,  0,  4,  5,  0,  6,  7,  0,  1 },
	{ 1,  0,  3,  4,  5,  6,  7,  8,  0,  8,  0,  2,  3,  4,  5,  6,  7,  8,  9,  7,  0,  0,  3,  4,  5,  6,  7,  8,  9,  4,  0,  0,  3,  4,  5,  6,  7,  8,  9,  1,  0,  2,  0,  4,  5,  6,  7,  8,  0,  1 },
	{ 1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1 },
	{ 1,  0,  2,  3,  4,  5,  6,  7,  0,  9,  3,  0,  2,  3,  4,  5,  6,  7,  8,  9,  2,  0,  2,  3,  4,  5,  6,  7,  8,  9,  9,  0,  2,  3,  4,  5,  6,  7,  8,  9,  1,  0,  0,  3,  4,  5,  6,  7,  0,  1 },
	{ 1,  0,  7,  6,  5,  4,  3,  2,  0,  0,  9,  8,  7,  6,  5,  4,  3,  2,  1,  0,  9,  0,  7,  6,  5,  4,  3,  2,  1,  0,  9,  0,  7,  6,  5,  4,  3,  2,  1,  0,  9,  8,  0,  6,  5,  4,  3,  2,  0,  1 },
	{ 1,  0,  1,  3,  0,  5,  6,  7,  0,  9,  3,  2,  5,  0,  5,  4,  6,  7,  8,  9,  2,  0,  1,  0,  5,  4,  6,  7,  8,  9,  7,  0,  2,  3,  4,  5,  6,  7,  8,  9,  0,  1,  0,  3,  4,  5,  6,  7,  0,  1 },
	{ 1,  0,  2,  3,  4,  5,  6,  7,  0,  9,  6,  2,  3,  4,  5,  6,  7,  8,  9,  0,  0,  0,  3,  4,  5,  6,  7,  8,  9,  0,  5,  0,  3,  4,  5,  6,  7,  8,  9,  0,  1,  2,  0,  4,  5,  6,  7,  8,  0,  1 },
	{ 1,  0,  3,  2,  2,  0,  9,  8,  0,  6,  5,  4,  3,  2,  7,  0,  9,  8,  7,  6,  5,  0,  3,  2,  5,  0,  9,  8,  7,  6,  5,  0,  3,  2,  1,  0,  9,  8,  7,  6,  5,  4,  0,  2,  1,  0,  9,  8,  0,  1 },
	{ 1,  0,  2,  3,  4,  5,  6,  7,  0,  9,  9,  0,  2,  3,  4,  5,  6,  7,  8,  9,  8,  0,  2,  3,  4,  5,  6,  7,  8,  9,  4,  0,  2,  3,  4,  5,  6,  7,  8,  9,  1,  0,  0,  3,  4,  5,  6,  7,  0,  1 },
	{ 1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1 },
	{ 1,  0,  2,  3,  4,  5,  6,  7,  0,  9, 10,  0,  3,  2,  3,  4,  5,  6,  7,  8,  9,  0,  0,  1,  2,  3,  4,  5,  6,  7,  8,  0,  10, 0,  1,  2,  3,  4,  5,  6,  7,  8,  0,  10, 0,  10,  2,  3,  0,  1 },
	{ 1,  0,  2,  2,  2,  2,  2,  2,  0,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  0,  2,  2,  2,  2,  2,  2,  2,  2,  2,  0,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  0,  2,  2,  2,  2,  2,  0,  1 },
	{ 1,  0,  4,  3,  0,  5,  9,  2,  0,  6,  3,  3,  0,  7,  5,  2,  9,  4,  6,  8,  0,  0,  3,  5,  7,  1,  2,  4,  6,  8,  3,  0,  3,  5,  2,  4,  6,  8,  9,  7,  2,  5,  0,  4,  6,  0,  3,  8,  0,  1 },
	{ 1,  0,  9,  2,  3,  4,  5,  6,  0,  8,  9, 10,  0,  8,  2,  3,  4,  5,  6,  7,  8,  0, 10,  0,  3,  2,  3,  4,  5,  6,  7,  0,  9, 10,  0,  1,  2,  3,  4,  5,  6,  7,  0,  9, 10,  0,  10,  2,  0,  1 },
	{ 1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1 },
	{ 1,  0,  5,  2,  3,  4,  5,  6,  0,  8,  9, 10,  0,  9,  2,  3,  4,  5,  6,  7,  8,  0, 10,  0,  2,  2,  3,  4,  5,  6,  7,  0,  9, 10,  0,  1,  2,  3,  4,  5,  6,  7,  0,  9, 10,  0,  10,  2,  0,  1 },
	{ 1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1 },
	{ 1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 1,  1,  1,  1,  1,  1 }
	};

	// Spawn del Director
	ADirector* Director = GetWorld()->SpawnActor<ADirector>();

	// Spawn del Builder
	ALaberintoConcretoBuilder* Builder = GetWorld()->SpawnActor<ALaberintoConcretoBuilder>();

	// Asignar el builder al director
	Director->SetBuilder(Cast<IILaberintoBuilder>(Builder));

	// Construcción del laberinto usando la matriz
	Director->ConstruirLaberinto(Matriz);

	//-----------------------------------------------------------------------------PROTOTYPE MuroBase


	// Crear prototipos y ocultarlos
	ABloqueHielo* HieloProto = GetWorld()->SpawnActor<ABloqueHielo>();
	HieloProto->SetActorHiddenInGame(true);
	HieloProto->SetActorEnableCollision(false);
	HieloProto->SetActorTickEnabled(false);

	Prototipos.Add("Hielo", HieloProto);

	// Para clonar después:
	AActor* NuevoBloque = Prototipos["Hielo"]->Clonar(GetWorld(), FVector(100.0f, 200.0f, 190.0f), FRotator::ZeroRotator);


	/*ADirectorEjercito* ADirectorA = GetWorld()->SpawnActor<ADirectorEjercito>();
	FVector Posicion = FVector(500.f, 500.f, 100.f);

	AEjercitoAcuaticoBuilder* AEjercitoA = GetWorld()->SpawnActor<AEjercitoA>(AEjercitoAcuaticoBuilder::StaticClass(), Posicion, FRotator::ZeroRotator);
		
	//aca me quede 
	ADirectorA->SetBuilder(Builder);
	ADirectorA->Set();

	AEjercitoA* Ejercito = Builder->GetEjercito();
	*/


	/*
	ADirector* ALaberintoDirector = GetWorld()->SpawnActor<ADirector>();

	ALaberinto* LaberintoConcreto = GetWorld()->SpawnActor<ALaberinto>();

	ALaberintoDirector->SetBuilder(LaberintoConcreto); // Laberinto implementa ILaberintoBuilder
	ALaberintoDirector->SetLaberinto(LaberintoConcreto); // Laberinto también implementa ILaberinto

	ALaberintoDirector->MandarConstruir();
	*/
	//GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("Bloque Spawning"));
	SpawnLaberinto();
	SpawnPersonaje();
	PosicionarEnBloqueMaderaConMasAdyacentes();
	//recorremos la matriz para generar bloques 
	/*for (int32 fila = 0; fila < aMapaBloques.Num(); ++fila)
	{
		for (int32 columna = 0; columna < aMapaBloques[fila].Num(); ++columna)
		{
			int32 valor = aMapaBloques[fila][columna];
			if (valor != 0)// si no es espacio vacio 
			{
				//calculamos la posicion del bloque 
				FVector posicionBloque = FVector(
					XInicial + columna * AnchoBloque,
					YInicial + fila * LargoBloque,
					20.0f); // Z queda en 0 (altura del bloque)

				// Llamamos a la función para generar un bloque
				SpawnBloque(posicionBloque, valor);

			}
		}
	}*/
	//para eliminar bloque administrador de tiempo
	GetWorld()->GetTimerManager().SetTimer(TimerInicialBloquesMadera, this, &ABomberman_012025GameMode::IniciarEliminarBloque, 10.0f, false);

	// Inicializar posiciones válidas para enemigos
	//InicializarPosicionesEnemigos();

	// Spawnear enemigos
	//for (int i = 0; i < 5; i++) // Generar 5 enemigos como ejemplo
	//{
	//	SpawnEnemigo();
	//}






	//parcial pregunta 4
	GetWorld()->GetTimerManager().SetTimer(TimerMovimientoBloques, this, &ABomberman_012025GameMode::MoverBloquesAleatorios, 2.0f, true);
	// Obtener todos los actores de tipo ABloque_Padre en el nivel
	TArray<AActor*> Bloques;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABloque_Padre::StaticClass(), Bloques);

	// Verificar que hay suficientes bloques
	if (Bloques.Num() >= 4)
	{
		// Seleccionar los bloques aleatorios
		for (int i = 0; i < 10; i++)
		{
			int32 IndexAleatorio = FMath::RandRange(0, Bloques.Num() - 1);
			ABloque_Padre* Bloque = Cast<ABloque_Padre>(Bloques[IndexAleatorio]);

			if (Bloque)
			{
				Bloque->bPuedeMoverse = true; // Habilitar movimiento
				Bloques.RemoveAt(IndexAleatorio); // Evitar seleccionar el mismo bloque dos veces
			}
		}
	}

	// Configura el temporizador para que llame a CambiarDireccion cada 3 segundos
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_CambiarDireccion, this, &ABomberman_012025GameMode::CambiarDireccion, 3.0f, true);

	// Inicializa la dirección en X
	bDireccionEnX = true;
	bDireccionEnY = true;








	// la otra pregunta del parcial pregunta 1 
	//aqui queria que el bloque madera aparezca en el bloque mas cercano al borde pero tiene un error y aparece incluso en os bloques madera del centro 
	/*
	if (aposicionesLibresMadera.Num() > 0) {
		FVector posicionMasCercana;
		float distanciaMinima = FLT_MAX; // Variable para almacenar la menor distancia
		TArray<FVector> bloquesCandidatosLocales; // Guardar bloques elegibles

		for (const FVector& posicion : aposicionesLibresMadera) {
			// Calcular las distancias a los bordes del mapa
			float distanciaSuperior = FMath::Abs(posicion.Y - YInicial); // Distancia al borde superior
			float distanciaInferior = FMath::Abs(posicion.Y - (YInicial + (aMapaBloques.Num() * LargoBloque))); // Borde inferior
			float distanciaIzquierda = FMath::Abs(posicion.X - XInicial); // Borde izquierdo
			float distanciaDerecha = FMath::Abs(posicion.X - (XInicial + (aMapaBloques[0].Num() * AnchoBloque))); // Borde derecho

			// Obtener la distancia mínima a cualquier borde
	
			float distanciaActual = FMath::Min(
				FMath::Min(distanciaSuperior, distanciaInferior),
				FMath::Min(distanciaIzquierda, distanciaDerecha)
			);

			// Verificar si esta distancia es menor o igual que el límite actual
			if (distanciaActual <= distanciaMinima) {
				distanciaMinima = distanciaActual;
				bloquesCandidatosLocales.Add(posicion); // Agregar a los bloques cercanos
			}
		}

		// Seleccionar un bloque aleatorio de los candidatos
		if (bloquesCandidatosLocales.Num() > 0) {
			int indiceAleatorio = FMath::RandRange(0, bloquesCandidatosLocales.Num() - 1);
			posicionMasCercana = bloquesCandidatosLocales[indiceAleatorio];
		}


		// Ajustar la posición para que el personaje esté encima del bloque de madera
		posicionMasCercana.Z += 100.0f;

		// Obtener al personaje
		APawn* personaje = UGameplayStatics::GetPlayerPawn(this, 0);
		if (personaje) {
			// Teletransportar al personaje a la posición aleatoria
			personaje->SetActorLocation(posicionMasCercana);
		}
	}
	*/
	//if (PosicionesValidasPersonaje.Num() > 0)
	//{
	//	int32 Index = FMath::RandRange(0, PosicionesValidasPersonaje.Num() - 1);
	//	FVector SpawnLocation = PosicionesValidasPersonaje[Index];
	//	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	//	if (PC)
	//	{
	//		APawn* Personaje = PC->GetPawn();
	//		if (Personaje)
	//		{
	//			Personaje->SetActorLocation(SpawnLocation);
	//		}
	//		else
	//		{
	//			ABomberman_012025Character* NuevoPersonaje = GetWorld()->SpawnActor<ABomberman_012025Character>(ABomberman_012025Character::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
	//			if (NuevoPersonaje)
	//			{
	//				PC->Possess(NuevoPersonaje);
	//			};
	//		};
	//	};
	//};
	
}

void ABomberman_012025GameMode::PosicionarEnBloqueMaderaConMasAdyacentes()
{
}

void ABomberman_012025GameMode::SpawnEnemigo()
{
	if (PosicionesLibresEnemigos.Num() < 8) return;

	    TArray<FVector> PosicionesLibres;
	    auto ObtenerPosicionAleatoria = [&]() -> FVector
		{
			FVector Posicion;
			do
			{
				Posicion = PosicionesLibresEnemigos[FMath::RandRange(0, PosicionesLibresEnemigos.Num() - 1)];
			} while (PosicionesLibresEnemigos.Contains(Posicion)); // Asegurarse de que la posición no esté ocupada
			PosicionesLibresEnemigos.Add(Posicion); // Agregar la posición a la lista de ocupadas
			return Posicion;
		};

	// Spawnear 5 enemigos aleatorios en posiciones vacías
	GetWorld()->SpawnActor<AEnemigoAcuaticoPezGlobo>(AEnemigoAcuaticoPezGlobo::StaticClass(), ObtenerPosicionAleatoria(), FRotator::ZeroRotator);
	GetWorld()->SpawnActor<AEnemigoAcuaticoPezGlobo>(AEnemigoAcuaticoPezGlobo::StaticClass(), ObtenerPosicionAleatoria(), FRotator::ZeroRotator);
	GetWorld()->SpawnActor<AEnemigoAcuaticoAnguila>(AEnemigoAcuaticoAnguila::StaticClass(), ObtenerPosicionAleatoria(), FRotator::ZeroRotator);
	GetWorld()->SpawnActor<AEnemigoAcuaticoAnguila>(AEnemigoAcuaticoAnguila::StaticClass(), ObtenerPosicionAleatoria(), FRotator::ZeroRotator);
	//GetWorld()->SpawnActor<AEnemigoSubterraneoTarantula>(AEnemigoSubterraneoTarantula::StaticClass(), ObtenerPosicionAleatoria(), FRotator::ZeroRotator);
   }
void ABomberman_012025GameMode::EliminarBloque()
{
}


void ABomberman_012025GameMode::IniciarEliminarBloque()
{
	// Iniciar el temporizador para eliminar bloques
	GetWorld()->GetTimerManager().SetTimer(TimerEliminarBloque, this, &ABomberman_012025GameMode::EliminarBloque, 3.0f, true);

}




void ABomberman_012025GameMode::SpawnLaberinto()
{
	/*
	PosicionesValidas.Empty();
	// Spawnear bloques según el valor de aMapaBloques
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			FVector Posicion = FVector(110.0f + (i + 1) * 150.0f, -1250.0f + (j + 1) * 150.0f, 190.0f);//espacio entre bloques * aumento de 100 a 150

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
	*/

}



                           //preguntas del parcial 


void ABomberman_012025GameMode::MoverBloquesAleatorios() //pregunta 1 
{
	for (ABloque_Padre* Bloque : aBloques)
	{
		if (Bloque && Bloque->bPuedeMoverse) // Verificar si el bloque puede moverse
		{
			FVector NuevaPosicion = Bloque->GetActorLocation();

			if (bDireccionEnX)
			{
				NuevaPosicion.X += 50.0f; // Mover en el eje X
			}
			else
			{
				NuevaPosicion.Y += 50.0f; // Mover en el eje Y
			}

			Bloque->SetActorLocation(NuevaPosicion);
		}
	}
}

void ABomberman_012025GameMode::CambiarDireccion()
{
	// Alternar la dirección
	bDireccionEnX = !bDireccionEnX;

	// Lógica para cambiar la dirección de los bloques
	if (bDireccionEnX)
	{
		UE_LOG(LogTemp, Warning, TEXT("Cambiando dirección a X"));
		// Aquí puedes implementar la lógica para mover en el eje X
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Cambiando dirección a Y"));
		// Aquí puedes implementar la lógica para mover en el eje Y
	}
	// Mostrar mensaje en pantalla
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, bDireccionEnX ? TEXT("Moviendo en X") : TEXT("Moviendo en Y"));

}

void ABomberman_012025GameMode::CrearEjercitoAcuatico()
{
	// Crear el director de ejercito
	ADirectorEjercito* DirectorEjercito = GetWorld()->SpawnActor<ADirectorEjercito>(ADirectorEjercito::StaticClass(), FVector(500.f, 500.f,110.f), FRotator::ZeroRotator);

	// Crear el builder de ejercito acuático
	AEjercitoAcuaticoBuilder* EjercitoBuilder = GetWorld()->SpawnActor<AEjercitoAcuaticoBuilder>(AEjercitoAcuaticoBuilder::StaticClass(), FVector(500.f, 500.f, 100.f), FRotator::ZeroRotator);

	// Configurar el director con el builder
	DirectorEjercito->SetBuilder(EjercitoBuilder);

	// Elegir una posición inicial (ejemplo: en el centro del mapa)
	FVector PosicionInicial = FVector(0.0f, 0.0f, 100.0f);

	// Construir el ejercito acuático
	DirectorEjercito->ConstruirEjercitoAcuatico(GetWorld(),PosicionInicial);

	// Obtener el ejercito construido
	AEjercitoA* Ejercito = EjercitoBuilder->GetEjercito();
	if (Ejercito)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Ejército acuático creado exitosamente."));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Error al crear el ejército acuático."));
	}
}