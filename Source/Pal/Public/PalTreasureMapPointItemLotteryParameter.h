#pragma once
#include "CoreMinimal.h"
#include "PalTreasureMapPointItemLotteryParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalTreasureMapPointItemLotteryParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rarity;
    
    PAL_API FPalTreasureMapPointItemLotteryParameter();
};

