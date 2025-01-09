#pragma once
#include "CoreMinimal.h"
#include "EPalExpCalcType.generated.h"

UENUM(BlueprintType)
enum class EPalExpCalcType : uint8 {
    None,
    Build,
    Craft,
};

