#pragma once
#include "CoreMinimal.h"
#include "EPalMonsterControllerBaseCampLogType.generated.h"

UENUM(BlueprintType)
enum class EPalMonsterControllerBaseCampLogType : uint8 {
    SuccessFixedAssign,
    FailedFixedAssignSimple,
    FailedFixedAssignWithTargetWork,
    FailedFixedAssignOverflowWorkers,
    FailedFixedAssignNoWorkInRange,
    FailedFixedAssignNotAssignableOtomo,
    FailedFixedAssignNoSuitability,
    FailedFixedAssignNotWantToDo,
};

