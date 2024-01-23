#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampFacilityUsageState.generated.h"

UENUM(BlueprintType)
enum class EPalBaseCampFacilityUsageState : uint8 {
    Vacant,
    Reserved,
    Using,
};

