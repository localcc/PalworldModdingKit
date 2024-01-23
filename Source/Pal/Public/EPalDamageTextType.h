#pragma once
#include "CoreMinimal.h"
#include "EPalDamageTextType.generated.h"

UENUM(BlueprintType)
enum class EPalDamageTextType : uint8 {
    DoubleRegist,
    SingleRegist,
    Normal,
    SignelWeak,
    DoubleWeak,
};

