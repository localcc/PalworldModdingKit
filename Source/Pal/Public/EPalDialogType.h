#pragma once
#include "CoreMinimal.h"
#include "EPalDialogType.generated.h"

UENUM(BlueprintType)
enum class EPalDialogType : uint8 {
    Alert,
    YesNo,
    OkCancel,
};

