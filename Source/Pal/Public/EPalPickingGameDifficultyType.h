#pragma once
#include "CoreMinimal.h"
#include "EPalPickingGameDifficultyType.generated.h"

UENUM(BlueprintType)
enum class EPalPickingGameDifficultyType : uint8 {
    Invalid,
    VeryEasy,
    Easy,
    Normal,
    Hard,
    VeryHard,
};

