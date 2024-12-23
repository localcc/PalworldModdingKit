#pragma once
#include "CoreMinimal.h"
#include "PalShopProductBase.h"
#include "PalShopProduct_InGameSkin.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalShopProduct_InGameSkin : public UPalShopProductBase {
    GENERATED_BODY()
public:
    UPalShopProduct_InGameSkin();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkinPrice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetProductSkinName() const;
    
};

