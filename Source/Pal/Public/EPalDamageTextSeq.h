#pragma once
#include "CoreMinimal.h"
#include "EPalDamageTextSeq.generated.h"

UENUM(BlueprintType)
enum class EPalDamageTextSeq : uint8 {
    WaitStart,
    Displaying,
    WaitClose,
};

