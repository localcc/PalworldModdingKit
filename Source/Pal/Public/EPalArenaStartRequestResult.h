#pragma once
#include "CoreMinimal.h"
#include "EPalArenaStartRequestResult.generated.h"

UENUM(BlueprintType)
enum class EPalArenaStartRequestResult : uint8 {
    Success_Started,
    Failed,
    Failed_OverConcurrentStageLimitation,
};

