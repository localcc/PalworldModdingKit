#pragma once
#include "CoreMinimal.h"
#include "EPalSpwnerImportanceType.generated.h"

UENUM(BlueprintType)
enum class EPalSpwnerImportanceType : uint8 {
    Undefined,
    AllUpdate,
    Near,
    Mid,
    Far,
};

