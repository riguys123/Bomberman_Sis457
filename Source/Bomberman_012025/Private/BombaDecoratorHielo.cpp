// Fill out your copyright notice in the Description page of Project Settings.


#include "BombaDecoratorHielo.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "Engine/Engine.h" 

void ABombaDecoratorHielo::Explota()
{
    // Llama primero a la explosión base o decorada
    Super::Explota();

    // Mensaje en pantalla para indicar que es una bomba con efecto hielo
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Cyan, TEXT("¡Bomba con efecto Hielo activada!"));
    }

    // Aplica el efecto extra de hielo
    EfectoHieloExtra();
}

void ABombaDecoratorHielo::EfectoHieloExtra()
{
    UWorld* Mundo = GetWorld();
    if (!Mundo) return;

    FVector Centro = GetActorLocation();
    Centro.Z += 50.f;

    // Carga efecto de partículas de hielo (puedes cambiar la ruta al efecto que tengas)
    UParticleSystem* IceFX = Cast<UParticleSystem>(StaticLoadObject(
        UParticleSystem::StaticClass(), nullptr,
        TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Ice.P_Ice'") // Cambia esta ruta si no tienes el efecto
    ));

    if (IceFX)
    {
        UGameplayStatics::SpawnEmitterAtLocation(Mundo, IceFX, Centro);
    }

    // Aquí puedes agregar lógica para ralentizar enemigos, congelar bloques, etc.
}