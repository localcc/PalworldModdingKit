#pragma once
#include "CoreMinimal.h"
#include "EPalArenaEntryRequestResult.generated.h"

UENUM(BlueprintType)
enum class EPalArenaEntryRequestResult : uint8 {
    Failed,
    Failed_AlreadyStarted,
    Failed_FullMember,
    Success_Entered,
    Failed_BattleEnd,
};

