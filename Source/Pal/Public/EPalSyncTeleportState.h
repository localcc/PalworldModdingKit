#pragma once
#include "CoreMinimal.h"
#include "EPalSyncTeleportState.generated.h"

UENUM(BlueprintType)
enum class EPalSyncTeleportState : uint8 {
    None,
    ClientFadeIn,
    ClientFadeOut,
    Prepare,
};

