#pragma once
#include "CoreMinimal.h"
#include "EPalFacialEyeType.generated.h"

UENUM(BlueprintType)
enum class EPalFacialEyeType : uint8 {
    None,
    Default,
    Close,
    HalfClose,
    Pain,
    Smile,
    Anger,
    Trouble,
    GuruGuru,
};

