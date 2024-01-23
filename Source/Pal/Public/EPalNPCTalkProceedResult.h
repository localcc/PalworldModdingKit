#pragma once
#include "CoreMinimal.h"
#include "EPalNPCTalkProceedResult.generated.h"

UENUM(BlueprintType)
enum class EPalNPCTalkProceedResult : uint8 {
    Failed,
    CommandExecuted,
    AllCommandComplete,
    CommandExecutedAndContinueProcess,
};

