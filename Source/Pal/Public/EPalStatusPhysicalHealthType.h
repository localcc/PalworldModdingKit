#pragma once
#include "CoreMinimal.h"
#include "EPalStatusPhysicalHealthType.generated.h"

UENUM(BlueprintType)
enum class EPalStatusPhysicalHealthType : uint8 {
    Healthful,
    MinorInjury,
    Severe,
    Dying,
    DeadBody,
    CloudCemetery,
};

