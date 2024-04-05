#pragma once
#include "CoreMinimal.h"
#include "EPalGuildJoinRequestConfirm.generated.h"

UENUM(BlueprintType)
enum class EPalGuildJoinRequestConfirm : uint8 {
    None,
    JoinLowBaseCampLevelGuild,
    LoseLastBaseCamp,
};

