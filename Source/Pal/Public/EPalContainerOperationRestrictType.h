#pragma once
#include "CoreMinimal.h"
#include "EPalContainerOperationRestrictType.generated.h"

UENUM(BlueprintType)
enum class EPalContainerOperationRestrictType : uint8 {
    None,
    CannotInject,
};

