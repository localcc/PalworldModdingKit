#pragma once
#include "CoreMinimal.h"
#include "EPalUICommonWarningType.generated.h"

UENUM(BlueprintType)
enum class EPalUICommonWarningType : uint8 {
    Default,
    MissileWarning,
    RaidWarning,
};

