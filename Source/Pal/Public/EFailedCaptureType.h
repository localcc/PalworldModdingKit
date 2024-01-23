#pragma once
#include "CoreMinimal.h"
#include "EFailedCaptureType.generated.h"

UENUM(BlueprintType)
enum class EFailedCaptureType : uint8 {
    None,
    NoMPZero,
    TestFailed,
};

