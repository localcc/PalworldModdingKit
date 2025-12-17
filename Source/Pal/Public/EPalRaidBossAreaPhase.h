#pragma once
#include "CoreMinimal.h"
#include "EPalRaidBossAreaPhase.generated.h"

UENUM(BlueprintType)
enum class EPalRaidBossAreaPhase : uint8 {
    None,
    Load,
    Ready,
    Appearance,
    Battle,
    Result,
    Cleanup,
    Finished,
    Max,
};

