#pragma once
#include "CoreMinimal.h"
#include "EPalBodyPartsType.generated.h"

UENUM(BlueprintType)
enum class EPalBodyPartsType : uint8 {
    Weak,
    Normal,
    Strong,
    Invincible,
};

