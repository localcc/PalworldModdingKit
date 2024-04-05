#pragma once
#include "CoreMinimal.h"
#include "EPalFoodStatusEffectType.generated.h"

UENUM(BlueprintType)
enum class EPalFoodStatusEffectType : uint8 {
    None,
    Attack,
    Defense,
    HungerResist,
    SANResist,
    WorkSpeed,
    Regene_Hp,
};

