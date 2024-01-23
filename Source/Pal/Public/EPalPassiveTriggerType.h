#pragma once
#include "CoreMinimal.h"
#include "EPalPassiveTriggerType.generated.h"

UENUM()
enum class EPalPassiveTriggerType : int32 {
    None,
    ActiveOtomo,
    Worker,
    Ride = 0x4,
    Reserve = 0x8,
    InOtomo = 0x10,
    Always = 0x20,
};

