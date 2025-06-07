// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETipoBloque.h"
#include "Bomberman_012025/Bloque_Padre.h"
#include "IFabricaBloques.h"
#include "FabricaBloques.generated.h"

UCLASS()
class BOMBERMAN_012025_API AFabricaBloques : public AActor, public IIFabricaBloques
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaBloques();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	ABloque_Padre* CrearBloque(ETipoBloque Tipo, const FVector& Posicion, int32 BloqueID);

	// Mapa de bloques generados
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TMap<int32, ABloque_Padre*> BloquesCreados;

private:
	// Mapeo de TipoBloque a clase C++
	TSubclassOf<ABloque_Padre> ObtenerClaseBloque(ETipoBloque Tipo);
};
