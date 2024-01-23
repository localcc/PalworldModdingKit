#pragma once
#include "CoreMinimal.h"
#include "EPalGeneralAnimSequenceType.generated.h"

UENUM(BlueprintType)
enum class EPalGeneralAnimSequenceType : uint8 {
    None,
    JumpStart,
    JumpLoop,
    JumpEnd,
};

