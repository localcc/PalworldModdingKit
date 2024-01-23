#pragma once
#include "CoreMinimal.h"
#include "EPalSaveError.generated.h"

UENUM(BlueprintType)
enum class EPalSaveError : uint8 {
    Success,
    NotFound,
    Unknown,
};

