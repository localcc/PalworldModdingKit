#pragma once
#include "CoreMinimal.h"
#include "EPalPassiveAddTriggerType.generated.h"

UENUM(BlueprintType)
enum class EPalPassiveAddTriggerType : uint8 {
    None,
    DayTime,
    Night,
    NonBattle = 4,
    AllOtomoTribeDifferent = 8,
};

