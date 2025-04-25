// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAereoMurcielago.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API AEnemigoAereoMurcielago : public AEnemigo
{
	GENERATED_BODY()
public:
	AEnemigoAereoMurcielago();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    void Chillido();
	virtual void MostrarMensaje() const;

    // Método virtual para manejar la colisión con el jugador
    virtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
        class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
        bool bFromSweep, const FHitResult& SweepResult);




private:
    ////UFUNCTION()
    //void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
    //    class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
    //    bool bFromSweep, const FHitResult& SweepResult);

    UPROPERTY(VisibleAnywhere)
    class USphereComponent* CollisionComponent;
};
