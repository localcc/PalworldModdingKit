#pragma once
#include "CoreMinimal.h"
#include "EPalFishingRodState.generated.h"

UENUM(BlueprintType)
enum class EPalFishingRodState : uint8 {
    None,
    Idle,
    Throwing,
    Fishing,
    Pick,
    Hit,
    CatchBattle,
    Return,
};

