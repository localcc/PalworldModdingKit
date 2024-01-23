#pragma once
#include "CoreMinimal.h"
#include "EPalLogPriority.generated.h"

UENUM(BlueprintType)
enum class EPalLogPriority : uint8 {
    None,
    Normal,
    Important,
    VeryImportant,
};

