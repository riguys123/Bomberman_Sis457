// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBomba.h"
#include "BombaDecorator.generated.h"

UCLASS()
class BOMBERMAN_012025_API ABombaDecorator : public AActor, public IIBomba
{
	GENERATED_BODY()

protected:
	TScriptInterface<IIBomba> BombaEnvoltura; // Bomba decorada (puede ser base o decorador)
public:	
	// Sets default values for this actor's properties
	ABombaDecorator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Inicializar con una bomba real o decorador
	void InicializarDecorator(const TScriptInterface<IIBomba>& _Bomba)
	{
		BombaEnvoltura = _Bomba;
	}
	// Explotar: llama a la bomba original
	virtual void Explota() override
	{
		if (BombaEnvoltura)
		{
			BombaEnvoltura->Explota();
		}
	}

};
