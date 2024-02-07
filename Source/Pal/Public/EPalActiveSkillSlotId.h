#pragma once
#include "CoreMinimal.h"
#include "EPalActiveSkillSlotId.generated.h"

UENUM(BlueprintType)
enum class EPalActiveSkillSlotId : uint8 {
    Default,
    PartnerSkill = 100,
};

