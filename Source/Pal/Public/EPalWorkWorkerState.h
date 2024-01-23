#pragma once
#include "CoreMinimal.h"
#include "EPalWorkWorkerState.generated.h"

UENUM(BlueprintType)
enum class EPalWorkWorkerState : uint8 {
    None,
    Reserve,
    Working,
    Leave,
};

