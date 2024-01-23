#pragma once
#include "CoreMinimal.h"
#include "EPalLogContentToneType.generated.h"

UENUM(BlueprintType)
enum class EPalLogContentToneType : uint8 {
    Normal,
    Negative,
    Positive,
};

