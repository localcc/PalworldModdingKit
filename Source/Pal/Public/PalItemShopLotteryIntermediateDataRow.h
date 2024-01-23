#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalItemShopLotteryIntermediateDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalItemShopLotteryIntermediateDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShopGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    PAL_API FPalItemShopLotteryIntermediateDataRow();
};

