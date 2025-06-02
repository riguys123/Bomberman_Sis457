// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAcuaticoAnguila.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API AEnemigoAcuaticoAnguila : public AEnemigo
{
	GENERATED_BODY()
public:
	AEnemigoAcuaticoAnguila();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

	float TiempoTotal;
	float FrecuenciaOndulacion;
	float AmplitudOndulacion;
	FVector DireccionMovimiento;
	
	void CambiarDireccion();
	void Paralizar(ACharacter* Player);
	virtual void MostrarMensaje() const;

	//UFUNCTION()
	/*void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
		class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);*/
		// Método virtual para manejar la colisión con el jugador
	//virtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
	//	class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	//	bool bFromSweep, const FHitResult& SweepResult);



	UPROPERTY(VisibleAnywhere)
	class USphereComponent* CollisionComponent;


};
