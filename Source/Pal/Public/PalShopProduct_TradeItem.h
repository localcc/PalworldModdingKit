#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalShopProductBase.h"
#include "PalShopProduct_TradeItem.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalShopProduct_TradeItem : public UPalShopProductBase {
    GENERATED_BODY()
public:
    UPalShopProduct_TradeItem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStackNumPerProduct() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequireItemNum(const FGuid& PlayerUId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRequireItemName(FName& OutRequireItemName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetProductStaticItemID(FName& OutStaticID) const;
    
};

