#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampAssignType.generated.h"

UENUM(BlueprintType)
enum class EPalBaseCampAssignType : uint8 {
    None,
    Work,
    WorkableObject,
    Defense,
};

