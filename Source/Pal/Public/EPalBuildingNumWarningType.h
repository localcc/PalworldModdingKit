#pragma once
#include "CoreMinimal.h"
#include "EPalBuildingNumWarningType.generated.h"

UENUM(BlueprintType)
enum class EPalBuildingNumWarningType : uint8 {
    None,
    Warning,
    Limit,
};

