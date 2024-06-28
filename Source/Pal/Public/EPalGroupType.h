#pragma once
#include "CoreMinimal.h"
#include "EPalGroupType.generated.h"

UENUM(BlueprintType)
enum class EPalGroupType : uint8 {
    Undefined,
    Neutral,
    Organization,
    IndependentGuild,
    Guild,
    ResidentEnemy,
};

