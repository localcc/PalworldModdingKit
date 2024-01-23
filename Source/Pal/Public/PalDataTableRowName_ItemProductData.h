#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemProductData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_ItemProductData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_ItemProductData();
};

