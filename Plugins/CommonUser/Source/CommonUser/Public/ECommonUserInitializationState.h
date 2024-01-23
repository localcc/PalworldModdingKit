#pragma once
#include "CoreMinimal.h"
#include "ECommonUserInitializationState.generated.h"

UENUM(BlueprintType)
enum class ECommonUserInitializationState : uint8 {
    Unknown,
    DoingInitialLogin,
    DoingNetworkLogin,
    FailedtoLogin,
    LoggedInOnline,
    LoggedInLocalOnly,
    Invalid,
};

