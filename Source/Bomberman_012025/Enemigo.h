// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemigo.generated.h"

class UStaticMeshComponent;
class UParticleSystemComponent;
class ABomberman_012025GameMode;
UCLASS()
class BOMBERMAN_012025_API AEnemigo : public ACharacter
{
	GENERATED_BODY()


public:
	// Sets default values for this character's properties
	AEnemigo();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//componente de malla
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* MallaEnemigo;	


public:	

	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// No necesitamos crear una nueva cápsula, usamos la del Character
	UPROPERTY(VisibleAnywhere)
	class UCapsuleComponent* ColisionCapsula;

	UFUNCTION()
	// Método virtual para manejar la colisión con el jugador
	virtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
		class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);
	// Función para mostrar el mensaje (esto se puede sobrescribir en la clase hija)
	virtual void MostrarMensaje() const;

	// Velocidad de movimiento del enemigo
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
	float VelocidadMovimiento;

	// Dirección de movimiento del enemigo
	FVector DireccionMovimiento;

protected:


	float Altura;
	float Danio;
	float VelocidadMovimineto;
	int Vida;	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshEnemigo;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* ParticleSystem;
	ABomberman_012025GameMode* GameModeReference; // Referencia al modo de juego
	float Espaciado = 900.0f;
	bool EsEspacioLibre(FVector Pos);
};
