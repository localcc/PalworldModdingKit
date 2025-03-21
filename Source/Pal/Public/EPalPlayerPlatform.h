#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerPlatform.generated.h"

UENUM(BlueprintType)
enum class EPalPlayerPlatform : uint8 {
    None,
    Steam,
    Xbox,
    Mac,
    PS5,
};

