#pragma once
#include "CoreMinimal.h"
#include "EPalSessionMemberChange.generated.h"

UENUM(BlueprintType)
enum class EPalSessionMemberChange : uint8 {
    None,
    Join,
    Leave,
    Mute,
    UnMute,
    Block,
    UnBlock,
    ChangedPlayerUId,
};

