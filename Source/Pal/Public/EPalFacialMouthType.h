#pragma once
#include "CoreMinimal.h"
#include "EPalFacialMouthType.generated.h"

UENUM(BlueprintType)
enum class EPalFacialMouthType : uint8 {
    None,
    Default,
    Pain,
    Smile,
    Anger,
};

