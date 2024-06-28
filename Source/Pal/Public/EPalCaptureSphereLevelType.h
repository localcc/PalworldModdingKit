#pragma once
#include "CoreMinimal.h"
#include "EPalCaptureSphereLevelType.generated.h"

UENUM(BlueprintType)
enum class EPalCaptureSphereLevelType : uint8 {
    Undefined,
    Normal,
    Mega,
    Giga,
    Master,
    Tera,
    Legend,
    Ultimate,
};

