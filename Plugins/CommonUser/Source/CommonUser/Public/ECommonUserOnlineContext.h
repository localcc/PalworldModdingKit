#pragma once
#include "CoreMinimal.h"
#include "ECommonUserOnlineContext.generated.h"

UENUM(BlueprintType)
enum class ECommonUserOnlineContext : uint8 {
    Game,
    Default,
    Service,
    ServiceOrDefault,
    Platform,
    PlatformOrDefault,
    Invalid,
};

