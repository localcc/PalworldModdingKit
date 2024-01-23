#pragma once
#include "CoreMinimal.h"
#include "EPalWorkTransportItemType.generated.h"

UENUM(BlueprintType)
enum class EPalWorkTransportItemType : uint8 {
    TakeOut,
    PutIn,
};

