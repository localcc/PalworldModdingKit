#pragma once
#include "CoreMinimal.h"
#include "EPalGameSystemInitState.generated.h"

UENUM(BlueprintType)
enum class EPalGameSystemInitState : uint8 {
    Init,
    InProgress,
    Complete,
    Failed,
};

