#pragma once
#include "CoreMinimal.h"
#include "EPalBuildObjectState.generated.h"

UENUM(BlueprintType)
enum class EPalBuildObjectState : uint8 {
    Init,
    Simulation,
    Building,
    Available,
    NotAvailable,
};

