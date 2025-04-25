// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoTerrestreTicTac.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API AEnemigoTerrestreTicTac : public AEnemigo
{
	GENERATED_BODY()
public:
	AEnemigoTerrestreTicTac();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:

	// Método para explotar cuando colisiona con el jugador
	void Explosion();
	virtual void MostrarMensaje() const;

	// Método virtual para manejar la colisión con el jugador
	virtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
		class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);

private:
	//void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
	//	class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	//	bool bFromSweep, const FHitResult& SweepResult);

	// Componente de partículas
	//UPROPERTY(VisibleAnywhere)
	//class UParticleSystemComponent* ParticleSystem;

};
