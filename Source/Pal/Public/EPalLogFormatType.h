#pragma once
#include "CoreMinimal.h"
#include "EPalLogFormatType.generated.h"

UENUM(BlueprintType)
enum class EPalLogFormatType : uint8 {
    Text,
    Json,
};

