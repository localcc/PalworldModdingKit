#pragma once
#include "CoreMinimal.h"
#include "EPalItemUseEffectType.generated.h"

UENUM(BlueprintType)
enum class EPalItemUseEffectType : uint8 {
    Invalid,
    CommonEffect_ToIndividualParameter,
    GrantTechnologyPoint,
    Homeward,
    PalPassiveSkillChange,
};

