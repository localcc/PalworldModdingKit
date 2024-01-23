#pragma once
#include "CoreMinimal.h"
#include "EPalStatusHungerType.generated.h"

UENUM(BlueprintType)
enum class EPalStatusHungerType : uint8 {
    Default,
    Hunger,
    Starvation,
};

