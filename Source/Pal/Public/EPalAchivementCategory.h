#pragma once
#include "CoreMinimal.h"
#include "EPalAchivementCategory.generated.h"

UENUM(BlueprintType)
enum class EPalAchivementCategory : uint8 {
    BossDefeat,
    PalCapture,
    PalDex,
};

