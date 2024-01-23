#pragma once
#include "CoreMinimal.h"
#include "EPalBodyTemperatureState.generated.h"

UENUM(BlueprintType)
enum class EPalBodyTemperatureState : uint8 {
    Default,
    Cold,
    Heat,
};

