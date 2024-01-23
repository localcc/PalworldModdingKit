#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectEnergyModuleStatusType.generated.h"

UENUM(BlueprintType)
enum class EPalMapObjectEnergyModuleStatusType : uint8 {
    Providable,
    Waiting,
};

