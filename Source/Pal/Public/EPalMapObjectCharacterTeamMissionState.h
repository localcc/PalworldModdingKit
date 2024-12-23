#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectCharacterTeamMissionState.generated.h"

UENUM(BlueprintType)
enum class EPalMapObjectCharacterTeamMissionState : uint8 {
    None,
    Ready,
    InProgress,
    Reward,
};

