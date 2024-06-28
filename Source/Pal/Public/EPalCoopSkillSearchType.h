#pragma once
#include "CoreMinimal.h"
#include "EPalCoopSkillSearchType.generated.h"

UENUM(BlueprintType)
enum class EPalCoopSkillSearchType : uint8 {
    Undefined,
    MapObject,
    Character,
    DungeonPortal,
    DungeonGoal,
};

