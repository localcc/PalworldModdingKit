#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemShopLotteryData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_ItemShopLotteryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_ItemShopLotteryData();
};

