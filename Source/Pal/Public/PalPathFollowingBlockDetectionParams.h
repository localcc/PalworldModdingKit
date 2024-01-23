#pragma once
#include "CoreMinimal.h"
#include "PalPathFollowingBlockDetectionParams.generated.h"

USTRUCT(BlueprintType)
struct FPalPathFollowingBlockDetectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockDetectionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockDetectionInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlockDetectionSampleCount;
    
    PAL_API FPalPathFollowingBlockDetectionParams();
};

