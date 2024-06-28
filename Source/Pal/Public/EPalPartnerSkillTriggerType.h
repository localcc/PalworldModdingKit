#pragma once
#include "CoreMinimal.h"
#include "EPalPartnerSkillTriggerType.generated.h"

UENUM(BlueprintType)
enum class EPalPartnerSkillTriggerType : uint8 {
    None,
    PlayerTrigger,
    OpenTreasure,
};

