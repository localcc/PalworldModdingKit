#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectSignificanceInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectSignificanceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceInRangeFromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvalidTickForSkeletalMeshComponent;
    
    PAL_API FPalMapObjectSignificanceInfo();
};

