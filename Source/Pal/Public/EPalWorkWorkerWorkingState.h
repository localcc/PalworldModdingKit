#pragma once
#include "CoreMinimal.h"
#include "EPalWorkWorkerWorkingState.generated.h"

UENUM(BlueprintType)
enum class EPalWorkWorkerWorkingState : uint8 {
    Wait,
    ApproachTo,
    Working,
    WaitForWorkable,
};

