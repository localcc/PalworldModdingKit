#pragma once
#include "CoreMinimal.h"
#include "EFSR2DeDitherMode.generated.h"

UENUM()
enum class EFSR2DeDitherMode : int32 {
    Off,
    Full,
    HairOnly,
};

