#pragma once
#include "CoreMinimal.h"
#include "EPalOptionWorldMode.generated.h"

UENUM(BlueprintType)
enum class EPalOptionWorldMode : uint8 {
    None,
    Single,
    ListenMulti,
    Dedicated_PvE,
    Dedicated_PvP,
};

