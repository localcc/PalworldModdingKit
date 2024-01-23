#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalMapObjectItemProductData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalMapObjectItemProductData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Product_Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredWorkAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoWorkAmountBySec;
    
    FPalMapObjectItemProductData();
};

