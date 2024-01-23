#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalItemShopCreateDataStruct.h"
#include "PalItemShopCreateDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalItemShopCreateDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalItemShopCreateDataStruct> productDataArray;
    
    PAL_API FPalItemShopCreateDataRow();
};

