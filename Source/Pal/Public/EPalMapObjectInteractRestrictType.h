#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectInteractRestrictType.generated.h"

UENUM(BlueprintType)
enum class EPalMapObjectInteractRestrictType : uint8 {
    SameGuildOnly,
    Anyone,
};

