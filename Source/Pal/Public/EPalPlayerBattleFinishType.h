#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerBattleFinishType.generated.h"

UENUM(BlueprintType)
enum class EPalPlayerBattleFinishType : uint8 {
    Undefined,
    Escape,
    Victory,
    Capture,
};

