#pragma once
#include "CoreMinimal.h"
#include "EPalPassiveSkillEffectTargetType.generated.h"

UENUM(BlueprintType)
enum class EPalPassiveSkillEffectTargetType : uint8 {
    None,
    ToSelf,
    ToTrainer,
    ToSelfAndTrainer,
    ToBaseCampPal,
    ToBuildObject,
};

