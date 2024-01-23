#pragma once
#include "CoreMinimal.h"
#include "EPalUIConvertItemRequestStartResponse.generated.h"

UENUM(BlueprintType)
enum class EPalUIConvertItemRequestStartResponse : uint8 {
    Enable,
    FailedNotSelectedRecipe,
    FailedNotExistConcreteModel,
    FailedNotExistEnergyModule,
    FailedNotEnoughItems,
    FailedNotEnoughEnergy,
};

