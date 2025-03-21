#pragma once
#include "CoreMinimal.h"
#include "EPalSpectateInternalState.generated.h"

UENUM(BlueprintType)
enum class EPalSpectateInternalState : uint8 {
    STATE_None,
    STATE_ClientWaitServerBegin,
    STATE_Spectating,
    STATE_ClientWaitServerVerifyNextPlayer,
    STATE_ClientUpdateSpectateNextPlayer,
    STATE_ClientWaitServerEnd,
};

