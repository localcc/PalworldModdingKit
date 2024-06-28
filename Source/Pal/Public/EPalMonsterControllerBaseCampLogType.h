#pragma once
#include "CoreMinimal.h"
#include "EPalMonsterControllerBaseCampLogType.generated.h"

UENUM(BlueprintType)
enum class EPalMonsterControllerBaseCampLogType : uint8 {
    Undefined,
    SuccessFixedAssign,
    FailedFixedAssignSimple,
    FailedFixedAssignWithTargetWork,
    FailedFixedAssignOverflowWorkers,
    FailedFixedAssignNoWorkInRange,
    FailedFixedAssignNotAssignableOtomo,
    FailedFixedAssignNoSuitability,
    FailedFixedAssignNotWantToDo,
};

