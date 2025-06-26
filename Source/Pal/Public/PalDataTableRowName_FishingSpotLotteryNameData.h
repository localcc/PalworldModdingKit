#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_FishingSpotLotteryNameData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_FishingSpotLotteryNameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_FishingSpotLotteryNameData();
};

