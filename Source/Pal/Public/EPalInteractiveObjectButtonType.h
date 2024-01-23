#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectButtonType.generated.h"

UENUM(BlueprintType)
enum class EPalInteractiveObjectButtonType : uint8 {
    OnePush,
    LongPush_WithGauge,
    LongPush_WithoutGauge,
    LongPush_Infinity,
};

