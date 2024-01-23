#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampSignificanceInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampSignificanceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceInRangeFromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    PAL_API FPalBaseCampSignificanceInfo();
};

