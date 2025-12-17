#pragma once
#include "CoreMinimal.h"
#include "EPalStageRequestMessageType.generated.h"

UENUM(BlueprintType)
enum class EPalStageRequestMessageType : uint8 {
    Undefined,
    Surrender,
};

