#pragma once
#include "CoreMinimal.h"
#include "EPalRaidBossBattleStartRequestResult.generated.h"

UENUM(BlueprintType)
enum class EPalRaidBossBattleStartRequestResult : uint8 {
    FailedNotValidBaseCampId,
    FailedAlreadyStarted,
    Success,
};

