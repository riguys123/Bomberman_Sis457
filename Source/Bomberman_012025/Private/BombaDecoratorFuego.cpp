// Fill out your copyright notice in the Description page of Project Settings.

#include "BombaDecoratorFuego.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"

void ABombaDecoratorFuego::Explota()
{
    // Llamar a la explosión de la bomba decorada o base
    Super::Explota();

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, TEXT("¡Bomba con efecto Fuego activada!"));
    }

    // Agregar efecto extra de fuego
    EfectoFuegoExtra();
}

void ABombaDecoratorFuego::EfectoFuegoExtra()
{
    UWorld* Mundo = GetWorld();
    if (!Mundo) return;

    FVector Centro = GetActorLocation();
    Centro.Z += 50.f;

    // Cargar efecto de partículas de fuego
    UParticleSystem* FireFX = Cast<UParticleSystem>(StaticLoadObject(UParticleSystem::StaticClass(), nullptr,TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Fire.P_Fire'")));

    if (FireFX)
    {
        UGameplayStatics::SpawnEmitterAtLocation(Mundo, FireFX, Centro);
    }

    // Aquí puedes agregar más lógica para daño extra, quemar enemigos, etc.
}