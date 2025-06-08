// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IPrototype.h"
#include "MuroBase.generated.h"

class UStaticMeshComponent;
UCLASS()
class BOMBERMAN_012025_API AMuroBase : public AActor, public IIPrototype
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMuroBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	FString Tipo;

	virtual AActor* Clonar(UWorld* Mundo, const FVector& Pos, const FRotator& Rot) const override;

	void Configurar(const FString& NuevoTipo);

	// Método para ajustar tamaño del muro
	virtual void AjustarTamanoMuro(FVector NuevoTamano);
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componentes")
	UStaticMeshComponent* MeshMuro;

};
