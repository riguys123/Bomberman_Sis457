#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemigoAcuaticoPezGlobo.generated.h"

class USphereComponent;
class UStaticMeshComponent;
class ABomberman_012025Character;

UCLASS()
class BOMBERMAN_012025_API AEnemigoAcuaticoPezGlobo : public AActor
{
    GENERATED_BODY()

public:
    AEnemigoAcuaticoPezGlobo();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Componentes
    UPROPERTY(VisibleAnywhere, Category = "Componentes")
    USphereComponent* CollisionComponent;

    UPROPERTY(VisibleAnywhere, Category = "Componentes")
    UStaticMeshComponent* MallaEnemigo;

    // Funci�n llamada al comenzar la colisi�n, debe tener UFUNCTION para AddDynamic
    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
        bool bFromSweep, const FHitResult& SweepResult);

    // M�todo para mostrar mensaje en pantalla
    void MostrarMensaje() const;

    // M�todo para aplicar veneno (puedes implementar m�s l�gica)
    void Veneno();

private:
    FVector PosicionInicial;
    float DuracionVeneno;
};
