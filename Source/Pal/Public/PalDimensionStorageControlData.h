#pragma once
#include "CoreMinimal.h"
#include "PalDimensionStorageControlData.generated.h"

class UPalDimensionLockerTimeoutTimer;

USTRUCT(BlueprintType)
struct FPalDimensionStorageControlData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControllingPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalDimensionLockerTimeoutTimer* TimeoutTimer;
    
    PAL_API FPalDimensionStorageControlData();
};

