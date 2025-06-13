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

    // Función llamada al comenzar la colisión, debe tener UFUNCTION para AddDynamic
    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
        bool bFromSweep, const FHitResult& SweepResult);

    // Método para mostrar mensaje en pantalla
    void MostrarMensaje() const;

    // Método para aplicar veneno (puedes implementar más lógica)
    void Veneno();

private:
    FVector PosicionInicial;
    float DuracionVeneno;
};
