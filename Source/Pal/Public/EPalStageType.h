#pragma once
#include "CoreMinimal.h"
#include "EPalStageType.generated.h"

UENUM(BlueprintType)
enum class EPalStageType : uint8 {
    Undefined,
    Dungeon,
    BossBattle,
    Arena,
};

