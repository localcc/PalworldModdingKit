#pragma once
#include "CoreMinimal.h"
#include "EPalWorkAssignableFixedType.generated.h"

UENUM(BlueprintType)
enum class EPalWorkAssignableFixedType : uint8 {
    Both,
    FreeOnly,
    FixedOnly,
    Cannot,
};

