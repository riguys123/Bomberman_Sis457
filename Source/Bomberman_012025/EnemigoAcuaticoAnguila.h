#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAcuaticoAnguila.generated.h"

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
	virtual void MostrarMensaje() const override;

	void CambiarDireccion();
	void Paralizar(ACharacter* Player);

	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult) override;

protected:
	UPROPERTY(VisibleAnywhere)
	class USphereComponent* CollisionComponent;

	float TiempoTotal;
	float FrecuenciaOndulacion;
	float AmplitudOndulacion;
	FVector DireccionMovimiento;
};
