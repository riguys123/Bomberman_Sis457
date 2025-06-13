// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETipoBloque.h"
#include "IPrototype.h"
#include "Bloque_Padre.generated.h"

class UStaticMeshComponent;	
class UParticleSystemComponent;
UCLASS()
class BOMBERMAN_012025_API ABloque_Padre : public AActor, public IIPrototype
{
	GENERATED_BODY()

protected:
	// Componente de malla estática
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componentes")
	UStaticMeshComponent* MallaBloque_Padre;// malla del bloque padre
	UPROPERTY()
	UParticleSystemComponent* Particulas;// particulas
	ETipoBloque TipoBloque;
protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	ABloque_Padre();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float FloatSpeed;
	float RotationSpeed;
	bool bPuedeMoverse;
	// Variables para el movimiento aleatorio
	FVector PosicionInicial; // Guarda la posición inicial del bloque
	bool bMoverEnX;          // Determina si el bloque se mueve en el eje X
	float DistanciaMovimiento; // Distancia que se moverá el bloque
	bool bDestruible = true; // Indica si el bloque es destruible

	virtual void AjustarTamano(FVector NuevoTamano);

	// Getter y Setter para el tipo de bloque
	void SetTipoBloque(ETipoBloque NuevoTipo);
	ETipoBloque GetTipoBloque() const;

	// Implementación de la función Clone
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Pos, const FRotator& Rot) const override;
//	virtual ETipoBloque GetTipoBloque() const { return TipoBloque; }//para que devuelva el tipo de bloque



protected:
	// Variable para almacenar el tipo
//	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
//	ETipoBloque TipoBloque;
};
