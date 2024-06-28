#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalItemShopSettingDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalItemShopSettingDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrencyItemID;
    
    PAL_API FPalItemShopSettingDataRow();
};

