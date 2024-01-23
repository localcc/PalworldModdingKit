#pragma once
#include "CoreMinimal.h"
#include "EPalCurrentActionNotifyType.generated.h"

UENUM(BlueprintType)
enum class EPalCurrentActionNotifyType : uint8 {
    Attack,
    Spawn,
    Other,
};

