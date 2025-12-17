#pragma once
#include "CoreMinimal.h"
#include "EPalSupportedPlatformType.h"
#include "PalOptionWorldSettinThresholds.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionWorldSettinThresholds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalSupportedPlatformType, int32> BaseCampMaxNumInGuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalSupportedPlatformType, int32> BaseCampWorkerMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalSupportedPlatformType, int32> MaxBuildingLimitNum;
    
    PAL_API FPalOptionWorldSettinThresholds();
};

