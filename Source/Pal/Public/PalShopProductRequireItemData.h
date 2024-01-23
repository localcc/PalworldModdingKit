#pragma once
#include "CoreMinimal.h"
#include "PalShopProductRequireItemData.generated.h"

USTRUCT(BlueprintType)
struct FPalShopProductRequireItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StaticItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 requireNum;
    
    PAL_API FPalShopProductRequireItemData();
};

