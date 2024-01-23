#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIPalShopBase.generated.h"

class UPalIndividualCharacterContainer;
class UPalIndividualCharacterSlot;
class UPalShopBase;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIPalShopBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPalUIPalShopBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateLocalLostPalProduct();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TrySell(const TArray<UPalIndividualCharacterSlot*> SellPalSlots);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryBuy(const FGuid& buyProductID);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestCollectLocalLostPalData();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPalStorageSlots(UPalIndividualCharacterContainer*& OutContainer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMyShop(UPalShopBase*& OutShop) const;
    
};

