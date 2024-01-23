#pragma once
#include "CoreMinimal.h"
#include "EPalGameSystemInitFailedReason.generated.h"

UENUM(BlueprintType)
enum class EPalGameSystemInitFailedReason : uint8 {
    None,
    WatchLog,
};

