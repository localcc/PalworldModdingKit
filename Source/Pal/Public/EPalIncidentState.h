#pragma once
#include "CoreMinimal.h"
#include "EPalIncidentState.generated.h"

UENUM(BlueprintType)
enum class EPalIncidentState : uint8 {
    None,
    Initialized,
    Executing,
    Completed,
    Canceled,
    InstanceCreateFailed = 255,
};

