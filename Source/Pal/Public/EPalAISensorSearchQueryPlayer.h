#pragma once
#include "CoreMinimal.h"
#include "EPalAISensorSearchQueryPlayer.generated.h"

UENUM(BlueprintType)
enum class EPalAISensorSearchQueryPlayer : uint8 {
    IncludePlayer,
    IgnorePlayer,
    PlayerOnly,
};

