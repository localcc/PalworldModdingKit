#pragma once
#include "CoreMinimal.h"
#include "EPalItemSlotPressType.generated.h"

UENUM(BlueprintType)
enum class EPalItemSlotPressType : uint8 {
    Normal,
    LiftHalf,
    LiftOne,
};

