#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class ETipoBloque : uint8
{
    Libre        UMETA(DisplayName = "Libre"),        // 0
    Acero        UMETA(DisplayName = "Acero"),        // 1
    Ladrillo     UMETA(DisplayName = "Ladrillo"),     // 2
    Madera       UMETA(DisplayName = "Madera"),       // 3
    Burbuja      UMETA(DisplayName = "Burbuja"),      // 4
    Electrico    UMETA(DisplayName = "Electrico"),    // 5
    Hongo        UMETA(DisplayName = "Hongo"),        // 6
    Lava         UMETA(DisplayName = "Lava"),         // 7
    Concreto     UMETA(DisplayName = "Concreto"),     // 8
    Arena        UMETA(DisplayName = "Arena"),        // 9
    Hielo        UMETA(DisplayName = "Hielo")         // 10
};