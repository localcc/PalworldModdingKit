#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectConvertItemModelRequestResult.generated.h"

UENUM(BlueprintType)
enum class EPalMapObjectConvertItemModelRequestResult : uint8 {
    Success,
    FailedInvalidRecipeId,
};

