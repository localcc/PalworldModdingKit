#pragma once
#include "CoreMinimal.h"
#include "EPalSupplyType.generated.h"

UENUM(BlueprintType)
enum class EPalSupplyType : uint8 {
    None,
    Capsule,
    Meteor,
};

