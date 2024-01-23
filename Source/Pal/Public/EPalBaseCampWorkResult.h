#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampWorkResult.generated.h"

UENUM(BlueprintType)
enum class EPalBaseCampWorkResult : uint8 {
    Success,
    FailedNotFoundBaseCamp,
    FailedNotFoundWork,
    FailedNotMatchWorkType,
};

