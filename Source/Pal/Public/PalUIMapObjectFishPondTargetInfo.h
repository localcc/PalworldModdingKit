#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectFishPondTargetInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalUIMapObjectFishPondTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetLotteryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredWorkAmount;
    
    PAL_API FPalUIMapObjectFishPondTargetInfo();
};

