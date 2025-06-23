// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Bomba.h"
#include "InvokerBombManager.h"
#include "ComandoColocarBomba.h"
#include "IOriginador.h"
#include "IMemento.h"
#include "CuidadorJugador.h"
#include "GameFramework/Character.h"
#include "Bomberman_012025Character.generated.h"

UCLASS(config=Game)
class ABomberman_012025Character : public ACharacter, public IIOriginador
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
public:
	ABomberman_012025Character();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;
	//--------------------------------------------------------------------------------COMAND
	// Clase de bomba que se va a colocar (se asigna en el editor o por c�digo)
	UPROPERTY(EditDefaultsOnly, Category = "Bomba")
	TSubclassOf<ABomba> ClaseBomba;

	// M�todo que crea y retorna una bomba en el mundo
	ABomba* ColocarBomba();

	// Invoker para comandos de bomba
	UPROPERTY()
	AInvokerBombManager* InvokerBombManager;

	// Comando concreto para colocar bomba
	UPROPERTY()
	AComandoColocarBomba* ComandoColocarBombaInstance;
	//--------------------------------------------------------------MEMENTO
	// Variables para guardar/restaurar
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Estado")
	int Vida = 3;

	// Implementaci�n del m�todo para guardar estado
	virtual void GuardarEstado(IIMemento* Memento) override;

	// M�todo que usar� el memento para restaurar datos
	void RestaurarDesdeMemento(class AMementoJugador* Memento);

	// Ejemplo funci�n para mostrar estado actual en pantalla
	void MostrarEstado();

	void Morir();
private:
	UPROPERTY()
	ACuidadorJugador* CuidadorJugador;
public:
	UFUNCTION()
	void RestaurarEstadoJugador();
	UFUNCTION()
	void SetVida(int NuevaVida);
protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

	UFUNCTION()
	void InputColocarBomba();

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

protected:
	virtual void BeginPlay() override;
};

