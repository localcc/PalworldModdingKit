#pragma once
#include "CoreMinimal.h"
#include "EPalItemOperationType.generated.h"

UENUM(BlueprintType)
enum class EPalItemOperationType : uint8 {
    Undefined,
    Product,
    Move,
    Dispose,
};

