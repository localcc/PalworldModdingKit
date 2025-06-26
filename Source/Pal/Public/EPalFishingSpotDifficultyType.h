#pragma once
#include "CoreMinimal.h"
#include "EPalFishingSpotDifficultyType.generated.h"

UENUM(BlueprintType)
enum class EPalFishingSpotDifficultyType : uint8 {
    None,
    Easy,
    Normal,
    Difficult,
    VeryDifficult,
};

