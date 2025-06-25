#pragma once
#include "CoreMinimal.h"
#include "EPalStatusDyingIndex.generated.h"

UENUM(BlueprintType)
enum class EPalStatusDyingIndex : uint8 {
    None,
    InstantDeath,
    PartnerSkillRevive,
};

