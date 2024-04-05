#pragma once
#include "CoreMinimal.h"
#include "EPalSpecialAttackRateType.generated.h"

UENUM(BlueprintType)
enum class EPalSpecialAttackRateType : uint8 {
    None,
    vsWood,
    vsStone,
    vsWood_Raid,
    vsStone_Raid,
};

