#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampEnergyStorageConsumePriority.generated.h"

UENUM(BlueprintType)
enum class EPalBaseCampEnergyStorageConsumePriority : uint8 {
    Normal,
    Low,
    Num,
};

