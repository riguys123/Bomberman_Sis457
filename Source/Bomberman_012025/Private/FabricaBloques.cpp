// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaBloques.h"
#include "Bomberman_012025/BloqueAcero.h"
#include "Bomberman_012025/BloqueLadrillo.h"
#include "Bomberman_012025/BloqueMadera.h"
#include "Bomberman_012025/BloqueBurbuja.h"
#include "Bomberman_012025/BloqueElectrico.h"
#include "Bomberman_012025/BloqueHongo.h"
#include "Bomberman_012025/BloqueLava.h"
#include "Bomberman_012025/BloqueConcreto.h"
#include "Bomberman_012025/BloqueArena.h"
#include "Bomberman_012025/BloqueHielo.h"


// Sets default values
AFabricaBloques::AFabricaBloques()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaBloques::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaBloques::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ABloque_Padre* AFabricaBloques::CrearBloque(ETipoBloque Tipo, const FVector& Posicion, int32 BloqueID)
{
    GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, FString::Printf(TEXT("Bloque %d creado en %s"), BloqueID, *Posicion.ToString()));

    TSubclassOf<ABloque_Padre> Clase = ObtenerClaseBloque(Tipo);
    if (!Clase || !GetWorld()) return nullptr;

    FActorSpawnParameters SpawnParams;
    SpawnParams.Name = FName(*FString::Printf(TEXT("Bloque_%d"), BloqueID));

    ABloque_Padre* NuevoBloque = GetWorld()->SpawnActor<ABloque_Padre>(Clase, Posicion, FRotator::ZeroRotator, SpawnParams);

    if (NuevoBloque)
    {
        NuevoBloque->SetTipoBloque(Tipo); // función en Bloque_Padre
        BloquesCreados.Add(BloqueID, NuevoBloque);
    }

    return NuevoBloque;
}

TSubclassOf<ABloque_Padre> AFabricaBloques::ObtenerClaseBloque(ETipoBloque Tipo)
{
    switch (Tipo)
    {
    case ETipoBloque::Acero:     return ABloqueAcero::StaticClass();
    case ETipoBloque::Ladrillo:  return ABloqueLadrillo::StaticClass();
    case ETipoBloque::Madera:    return ABloqueMadera::StaticClass();
    case ETipoBloque::Burbuja:   return ABloqueBurbuja::StaticClass();
    case ETipoBloque::Electrico: return ABloqueElectrico::StaticClass();
    case ETipoBloque::Hongo:     return ABloqueHongo::StaticClass();
    case ETipoBloque::Lava:      return ABloqueLava::StaticClass();
    case ETipoBloque::Concreto:  return ABloqueConcreto::StaticClass();
    case ETipoBloque::Arena:     return ABloqueArena::StaticClass();
    case ETipoBloque::Hielo:     return ABloqueHielo::StaticClass();
    default: return nullptr;
    }
	
	
	
	return TSubclassOf<ABloque_Padre>();
}

