#pragma once
#include "CoreMinimal.h"
#include "EPalBossBattleStartRequestResult.generated.h"

UENUM(BlueprintType)
enum class EPalBossBattleStartRequestResult : uint8 {
    Success_Started,
    Failed,
    Failed_OverConcurrentStageLimitation,
};

