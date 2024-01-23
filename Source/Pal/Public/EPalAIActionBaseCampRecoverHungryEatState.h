#pragma once
#include "CoreMinimal.h"
#include "EPalAIActionBaseCampRecoverHungryEatState.generated.h"

UENUM(BlueprintType)
enum class EPalAIActionBaseCampRecoverHungryEatState : uint8 {
    TurnToFood,
    Eat,
};

