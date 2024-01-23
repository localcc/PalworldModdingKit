#pragma once
#include "CoreMinimal.h"
#include "EPalKeyConfigAxisFilterType.generated.h"

UENUM(BlueprintType)
enum class EPalKeyConfigAxisFilterType : uint8 {
    All,
    Plus,
    Minus,
};

