#pragma once
#include "CoreMinimal.h"
#include "EPalStagePlayerState.generated.h"

UENUM(BlueprintType)
enum class EPalStagePlayerState : uint8 {
    Init,
    WaitingStageLoad,
    Login,
    InExiting,
};

