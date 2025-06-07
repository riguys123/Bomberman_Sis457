// Fill out your copyright notice in the Description page of Project Settings.

#include "LaberintoConcretoBuilder.h"
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

void ALaberintoConcretoBuilder::ConstruirMatriz(const TArray<TArray<int32>>& Matriz)
{
    /*if (!FabricaBloques) return;

    aMapaBloques = Matriz;
    PosicionesValidas.Empty();

    const float Espaciado = 150.f;
    const FVector Offset = FVector(110.f, -1250.f, 190.f);

    Laberinto = GetWorld()->SpawnActor<ALaberinto>(ALaberinto::StaticClass());

    for (int32 i = 0; i < aMapaBloques.Num(); i++)
    {
        for (int32 j = 0; j < aMapaBloques[i].Num(); j++)
        {
            int32 TipoBloque = aMapaBloques[i][j];

            FVector Posicion = Offset + FVector(i * Espaciado, j * Espaciado, 0.f);
            int32 ID = i * 100 + j;

            if (TipoBloque >= 1 && TipoBloque <= 10)
            {
                ABloque_Padre* Bloque = FabricaBloques->CrearBloque(static_cast<ETipoBloque>(TipoBloque), Posicion, ID);
                if (Bloque && Laberinto)
                {
                    Laberinto->AgregarBloque(Bloque);
                }
            }
            else if (TipoBloque == 0)
            {
                PosicionesValidas.Add(Posicion);
            }
        }
    }*/
  
    // Guardamos la matriz
    aMapaBloques = Matriz;

    // Limpiamos posiciones válidas
    PosicionesValidas.Empty();

    // Recorremos la matriz para spawnear bloques
    for (int i = 0; i < aMapaBloques.Num(); i++)
    {
        for (int j = 0; j < aMapaBloques[i].Num(); j++)
        {
            FVector Posicion = FVector(110.0f + (i + 1) * 150.0f, -1250.0f + (j + 1) * 150.0f, 190.0f);

            switch (aMapaBloques[i][j])
            {
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
            }
        }
    }

    // Guardamos posiciones donde no hay bloque (valor 0)
    for (int i = 0; i < aMapaBloques.Num(); i++)
    {
        for (int j = 0; j < aMapaBloques[i].Num(); j++)
        {
            if (aMapaBloques[i][j] == 0)
            {
                FVector Pos = FVector(110.0f + (i + 1) * 100.0f, -1250.0f + (j + 1) * 100.0f, 190.0f);
                PosicionesValidas.Add(Pos);
            }
        }
    }
    
    //Laberinto = GetWorld()->SpawnActor<ALaberinto>();

    //const float Espaciado = 100.f;

    //for (int32 Y = 0; Y < Matriz.Num(); ++Y)
    //{
    //    for (int32 X = 0; X < Matriz[Y].Num(); ++X)
    //    {
    //        FVector Posicion(X * Espaciado, Y * Espaciado, 0.f);
    //        AActor* Muro = nullptr;

    //        switch (Matriz[Y][X])
    //        {
    //        case 1: Muro = GetWorld()->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), Posicion, FRotator::ZeroRotator); break;
    //        case 2: Muro = GetWorld()->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), Posicion, FRotator::ZeroRotator); break;
    //        case 3: Muro = GetWorld()->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), Posicion, FRotator::ZeroRotator); break;
    //        case 4: Muro = GetWorld()->SpawnActor<ABloqueBurbuja>(ABloqueBurbuja::StaticClass(), Posicion, FRotator::ZeroRotator);break;
    //        case 5: Muro = GetWorld()->SpawnActor<ABloqueElectrico>(ABloqueElectrico::StaticClass(), Posicion, FRotator::ZeroRotator); break;
    //        case 6: Muro = GetWorld()->SpawnActor<ABloqueHongo>(ABloqueHongo::StaticClass(), Posicion, FRotator::ZeroRotator); break;
    //        case 7: Muro = GetWorld()->SpawnActor<ABloqueLava>(ABloqueLava::StaticClass(), Posicion, FRotator::ZeroRotator); break;
    //        case 8: Muro = GetWorld()->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), Posicion, FRotator::ZeroRotator); break;
    //        case 9: Muro = GetWorld()->SpawnActor<ABloqueArena>(ABloqueArena::StaticClass(), Posicion, FRotator::ZeroRotator); break;
    //        case 10: Muro = GetWorld()->SpawnActor<ABloqueHielo>(ABloqueHielo::StaticClass(), Posicion, FRotator::ZeroRotator); break;
    //        default: break;
    //        }

    //        if (Muro)
    //        {
    //            Laberinto->AgregarElemento(Muro);
    //        }
    //    }
    //}
}

ALaberinto* ALaberintoConcretoBuilder::ObtenerLaberinto()
{
	return Laberinto;
}

const TArray<FVector>& ALaberintoConcretoBuilder::GetPosicionesValidas() const
{
	return PosicionesValidas;
}

void ALaberintoConcretoBuilder::SetFabrica(AFabricaBloques* NuevaFabrica)
{
    FabricaBloques = NuevaFabrica;
}

void ALaberintoConcretoBuilder::EstablecerFabricaBloques(AFabricaBloques* Fabrica)
{
    this->FabricaBloques = Fabrica;
}

