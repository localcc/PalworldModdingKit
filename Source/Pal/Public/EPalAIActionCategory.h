#pragma once
#include "CoreMinimal.h"
#include "EPalAIActionCategory.generated.h"

UENUM(BlueprintType)
enum class EPalAIActionCategory : uint8 {
    Undefined,
    Call,
    Coop,
    NullAction,
};

