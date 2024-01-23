#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerDamageCameraShakeCategory.generated.h"

UENUM(BlueprintType)
enum class EPalPlayerDamageCameraShakeCategory : uint8 {
    None,
    Waza_S,
    Waza_M,
    Waza_L,
    Gun_S,
    Gun_M,
    Gun_L,
    Melee,
};

