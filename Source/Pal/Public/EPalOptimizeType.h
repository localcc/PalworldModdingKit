#pragma once
#include "CoreMinimal.h"
#include "EPalOptimizeType.generated.h"

UENUM(BlueprintType)
enum class EPalOptimizeType : uint8 {
    Undefined,
    XboxOne,
    PS4,
    XboxSeries,
    PS5,
    PC,
    DedicatedServer,
    CoopHost,
};

