#pragma once
#include "CoreMinimal.h"
#include "EPalWorkAssignType.generated.h"

UENUM(BlueprintType)
enum class EPalWorkAssignType : uint8 {
    None,
    Work,
    WorkAttack,
    Defense,
};

