#pragma once
#include "CoreMinimal.h"
#include "EPalFarmSkillFruitsState.generated.h"

UENUM(BlueprintType)
enum class EPalFarmSkillFruitsState : uint8 {
    None,
    Planting,
    Watered,
    Growup,
    Harvestable,
};

