#pragma once
#include "CoreMinimal.h"
#include "EPalAudioTrigger.generated.h"

UENUM(BlueprintType)
enum class EPalAudioTrigger : uint8 {
    None,
    BattleWin,
    RaidEnd,
    Captured,
    GameOver,
};

