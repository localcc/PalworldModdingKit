#pragma once
#include "CoreMinimal.h"
#include "EPalPlatformType.generated.h"

UENUM(BlueprintType)
enum class EPalPlatformType : uint8 {
    Undefined,
    XboxOne,
    PS4,
    XboxSeries,
    PS5,
    PC,
    DedicatedServer,
    CoopHost,
};

