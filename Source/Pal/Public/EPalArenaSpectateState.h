#pragma once
#include "CoreMinimal.h"
#include "EPalArenaSpectateState.generated.h"

UENUM(BlueprintType)
enum class EPalArenaSpectateState : uint8 {
    STATE_None,
    STATE_Spectating,
};

