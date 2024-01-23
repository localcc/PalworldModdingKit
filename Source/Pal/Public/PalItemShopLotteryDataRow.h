#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalItemShopLotteryDataStruct.h"
#include "PalItemShopLotteryDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalItemShopLotteryDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalItemShopLotteryDataStruct> lotteryDataArray;
    
    PAL_API FPalItemShopLotteryDataRow();
};

