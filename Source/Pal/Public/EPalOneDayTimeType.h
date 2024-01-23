#pragma once
#include "CoreMinimal.h"
#include "EPalOneDayTimeType.generated.h"

UENUM(BlueprintType)
enum class EPalOneDayTimeType : uint8 {
    Undefined,
    Day,
    Night,
};

