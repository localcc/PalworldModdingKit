#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectItemContainerSlotAttribute.generated.h"

UENUM(BlueprintType)
enum class EPalMapObjectItemContainerSlotAttribute : uint8 {
    Undefined,
    Input,
    PublicOutput,
    FoodProvidable,
    CannotTransport,
};

