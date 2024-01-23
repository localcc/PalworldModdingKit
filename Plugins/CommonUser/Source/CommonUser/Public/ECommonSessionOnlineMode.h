#pragma once
#include "CoreMinimal.h"
#include "ECommonSessionOnlineMode.generated.h"

UENUM(BlueprintType)
enum class ECommonSessionOnlineMode : uint8 {
    Offline,
    LAN,
    Online,
};

