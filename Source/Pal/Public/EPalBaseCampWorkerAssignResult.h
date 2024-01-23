#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampWorkerAssignResult.generated.h"

UENUM(BlueprintType)
enum class EPalBaseCampWorkerAssignResult : uint8 {
    Success,
    FailedNotFoundBaseCamp,
    FailedNotFoundWork,
    FailedOverflowAssignCount,
    FailedCharacterHandleMissing,
};

