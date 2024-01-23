#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIItemShopBase.generated.h"

class UPalItemSlot;
class UPalShopBase;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIItemShopBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPalUIItemShopBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TrySteal(const FGuid& buyProductID, const int32 stealNum);
    
    UFUNCTION(BlueprintCallable)
    bool TrySell(const TArray<UPalItemSlot*>& SellItemSlots);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryBuy(const FGuid& buyProductID, const int32 BuyNum);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMyShop(UPalShopBase*& OutShop) const;
    
};

