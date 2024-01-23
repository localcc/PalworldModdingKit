#pragma once
#include "CoreMinimal.h"
#include "EPalOrganizationType.generated.h"

UENUM(BlueprintType)
enum class EPalOrganizationType : uint8 {
    None,
    Guild,
    Police,
    City,
    Brigade,
    TeamBlackHunter,
    TeamFireCult,
    TeamWelfareGroup,
    MAX,
};

