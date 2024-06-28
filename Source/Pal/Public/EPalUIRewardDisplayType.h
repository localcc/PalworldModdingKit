#pragma once
#include "CoreMinimal.h"
#include "EPalUIRewardDisplayType.generated.h"

UENUM(BlueprintType)
enum class EPalUIRewardDisplayType : uint8 {
    Default,
    GetItem,
    HatchedPal,
    FastTravel,
    DefeatBoss,
    UnlockHardMode,
};

