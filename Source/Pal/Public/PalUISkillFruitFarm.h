#pragma once
#include "CoreMinimal.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUISkillFruitFarm.generated.h"

class UPalItemContainer;
class UPalItemSlot;
class UPalMapObjectFarmSkillFruitsModel;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUISkillFruitFarm : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPalUISkillFruitFarm();

protected:
    UFUNCTION(BlueprintCallable)
    void SetCanTransport(bool bCanTransport);
    
    UFUNCTION(BlueprintCallable)
    bool MoveToSkillFruitSlot(UPalItemSlot* fromSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalItemSlot* GetTargetSkillFruitSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPalItemSlot*> GetProductSlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalMapObjectFarmSkillFruitsModel* GetModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalItemContainer* GetFarmItemContainer() const;
    
    UFUNCTION(BlueprintCallable)
    void GetAllProduct();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTransport() const;
    
};

