#pragma once
#include "CoreMinimal.h"
#include "EPalApplySaveDataOrder.generated.h"

UENUM(BlueprintType)
enum class EPalApplySaveDataOrder : uint8 {
    Early,
    Normal,
    Late,
    Num,
};

