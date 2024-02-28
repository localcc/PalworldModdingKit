#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerInputButtonType.generated.h"

UENUM(BlueprintType)
enum class EPalPlayerInputButtonType : uint8 {
    None,
    OnPress,
    OnRelease,
};

