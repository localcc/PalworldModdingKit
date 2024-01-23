#pragma once
#include "CoreMinimal.h"
#include "EPalGuildPlayerStatus.generated.h"

UENUM(BlueprintType)
enum class EPalGuildPlayerStatus : uint8 {
    Logout,
    Online,
};

