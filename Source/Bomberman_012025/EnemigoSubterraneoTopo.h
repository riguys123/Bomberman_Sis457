// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoSubterraneoTopo.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API AEnemigoSubterraneoTopo : public AEnemigo
{
	GENERATED_BODY()
public:
	AEnemigoSubterraneoTopo();



protected:
	virtual void BeginPlay() override;




public:
	virtual void Tick(float DeltaTime) override;

	// M�todo para cavar un t�nel y pasar por debajo de los muros
	void CavarTunel();

	virtual void MostrarMensaje() const;
	// M�todo virtual para manejar la colisi�n con el jugador
	virtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
		class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);




private:
//	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
//		class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
//		bool bFromSweep, const FHitResult& SweepResult);

};
