#pragma once
#include "CoreMinimal.h"
#include "EPalActivatableDamageAreaState.generated.h"

UENUM(BlueprintType)
enum class EPalActivatableDamageAreaState : uint8 {
    Inactive,
    Activating,
};

