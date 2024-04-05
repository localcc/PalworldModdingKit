#pragma once
#include "CoreMinimal.h"
#include "ESequentialProcessState.generated.h"

UENUM(BlueprintType)
enum class ESequentialProcessState : uint8 {
    Init,
    InProgress,
    Complete,
    Failed,
};

