#pragma once
#include "CoreMinimal.h"
#include "EPalWorkBehaviourType.generated.h"

UENUM(BlueprintType)
enum class EPalWorkBehaviourType : uint8 {
    Undefined,
    StackAmount,
    Participate,
};

