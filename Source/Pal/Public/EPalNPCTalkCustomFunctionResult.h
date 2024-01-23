#pragma once
#include "CoreMinimal.h"
#include "EPalNPCTalkCustomFunctionResult.generated.h"

UENUM(BlueprintType)
enum class EPalNPCTalkCustomFunctionResult : uint8 {
    None,
    ContinueProcess,
    BreakProcess,
};

