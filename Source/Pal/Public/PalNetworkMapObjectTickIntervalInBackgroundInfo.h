#pragma once
#include "CoreMinimal.h"
#include "PalNetworkMapObjectTickIntervalInBackgroundInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalNetworkMapObjectTickIntervalInBackgroundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    PAL_API FPalNetworkMapObjectTickIntervalInBackgroundInfo();
};

