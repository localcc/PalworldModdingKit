#pragma once
#include "CoreMinimal.h"
#include "EPalPalLoadoutApplyResult.generated.h"

UENUM(BlueprintType)
enum class EPalPalLoadoutApplyResult : uint8 {
    None,
    Success,
    PalBoxFull,
    PalLost,
};

