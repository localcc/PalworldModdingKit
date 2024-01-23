#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectConcreteModelAccessResult.generated.h"

UENUM(BlueprintType)
enum class EPalMapObjectConcreteModelAccessResult : uint8 {
    Success,
    FailedMissing,
    FailedInBuilding,
};

