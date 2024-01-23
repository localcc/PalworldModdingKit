#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PalShopCreateData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_PalShopCreateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_PalShopCreateData();
};

