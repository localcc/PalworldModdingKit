#pragma once
#include "CoreMinimal.h"
#include "EPalRaidBossAreaRequestResult.generated.h"

UENUM(BlueprintType)
enum class EPalRaidBossAreaRequestResult : uint8 {
    Success,
    Failed,
    Failed_AlreadyInStage,
    Failed_AlreadyInRaidBossArea,
    Failed_NoAvailableStage,
    Failed_InvalidPlayer,
    Failed_NotFound,
    Failed_NotLoaded,
};

