#pragma once
#include "CoreMinimal.h"
#include "EPalMasterDataExecPinType.generated.h"

UENUM(BlueprintType)
enum class EPalMasterDataExecPinType : uint8 {
    Success,
    RowNotFound,
};

