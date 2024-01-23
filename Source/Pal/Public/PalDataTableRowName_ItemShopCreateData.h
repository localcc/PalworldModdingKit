#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemShopCreateData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_ItemShopCreateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_ItemShopCreateData();
};

