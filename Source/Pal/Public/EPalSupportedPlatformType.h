#pragma once
#include "CoreMinimal.h"
#include "EPalSupportedPlatformType.generated.h"

UENUM(BlueprintType)
enum class EPalSupportedPlatformType : uint8 {
    Unknown,
    Windows,
    WinGDK,
    XB1,
    XSX,
    Linux,
};

