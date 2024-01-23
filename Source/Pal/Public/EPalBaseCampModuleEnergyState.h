#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampModuleEnergyState.generated.h"

UENUM(BlueprintType)
enum class EPalBaseCampModuleEnergyState : uint8 {
    Providable,
    Waiting,
};

