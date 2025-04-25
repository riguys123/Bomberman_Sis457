// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAcuaticoPezGlobo.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API AEnemigoAcuaticoPezGlobo : public AEnemigo
{
	GENERATED_BODY()
public:
	AEnemigoAcuaticoPezGlobo();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
private:
	FVector PosicionInicial;
	float DuracionVeneno;

public:	
	void Veneno();
	virtual void MostrarMensaje() const;

	// Método virtual para manejar la colisión con el jugador
	virtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
		class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);

private:

	//virtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
	//	class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	//	bool bFromSweep, const FHitResult& SweepResult) ;


	UPROPERTY(VisibleAnywhere)
	class USphereComponent* CollisionComponent;

};
