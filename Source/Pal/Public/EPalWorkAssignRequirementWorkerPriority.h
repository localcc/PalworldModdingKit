#pragma once
#include "CoreMinimal.h"
#include "EPalWorkAssignRequirementWorkerPriority.generated.h"

UENUM(BlueprintType)
enum class EPalWorkAssignRequirementWorkerPriority : uint8 {
    Normal,
    WorkSpeedASC,
    WorkSpeedDESC,
};

