#pragma once
#include "CoreMinimal.h"
#include "EPalFishingRodState.generated.h"

UENUM(BlueprintType)
enum class EPalFishingRodState : uint8 {
    None,
    Idle,
    WaitThrowing,
    Throwing,
    WaitPick,
    Pick,
    WaitHit,
    CatchBattle,
    Return,
};

