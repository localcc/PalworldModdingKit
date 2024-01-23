#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectPickupItemPalEggData.h"
#include "PalMapObjectPickupItemPalEggLotteryData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectPickupItemPalEggLotteryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectPickupItemPalEggData PalEggData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    PAL_API FPalMapObjectPickupItemPalEggLotteryData();
};

