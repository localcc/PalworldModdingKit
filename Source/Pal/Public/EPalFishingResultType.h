#pragma once
#include "CoreMinimal.h"
#include "EPalFishingResultType.generated.h"

UENUM(BlueprintType)
enum class EPalFishingResultType : uint8 {
    Success,
    Failed_AlreadyFishing,
    Failed_Escaped,
    Failed_NotExist,
    Failed_Unknown,
    Unknown,
};

