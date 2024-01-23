#pragma once
#include "CoreMinimal.h"
#include "EPalOptionWorldDifficulty.generated.h"

UENUM(BlueprintType)
enum class EPalOptionWorldDifficulty : uint8 {
    None,
    Easy,
    Normal,
    Hard,
    Custom,
};

