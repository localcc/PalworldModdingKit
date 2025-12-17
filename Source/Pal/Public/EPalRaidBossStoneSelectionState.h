#pragma once
#include "CoreMinimal.h"
#include "EPalRaidBossStoneSelectionState.generated.h"

UENUM(BlueprintType)
enum class EPalRaidBossStoneSelectionState : uint8 {
    None,
    Available,
    InsufficientMaterials,
    Unavailable,
};

