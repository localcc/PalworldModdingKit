#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalItemSlotPressType.h"
#include "PalCharacterContainerSortInfo.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIPalBoxBase.generated.h"

class UPalIndividualCharacterContainer;
class UPalIndividualCharacterSlot;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIPalBoxBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPalUIPalBoxBase();

    UFUNCTION(BlueprintCallable)
    void TryMoveToOtomo(UPalIndividualCharacterSlot* MoveSlot);
    
    UFUNCTION(BlueprintCallable)
    void TryMoveToBox(UPalIndividualCharacterSlot* MoveSlot);
    
    UFUNCTION(BlueprintCallable)
    void TryMoveToBaseCamp(UPalIndividualCharacterSlot* MoveSlot);
    
    UFUNCTION(BlueprintCallable)
    void TryLoosePal(UPalIndividualCharacterSlot* TargetSlot);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleFavorite(UPalIndividualCharacterSlot* TargetSlot);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPagePalBoxList(int32 NewPage);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseCampId(const FGuid& BaseCampId);
    
    UFUNCTION(BlueprintCallable)
    void SelectCharacterSlot(UPalIndividualCharacterSlot* TargetSlot, const EPalItemSlotPressType PressType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestSortBox(const FPalCharacterContainerSortInfo& SortInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateWorkerCapacity(UPalIndividualCharacterContainer* Container);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdatePageWorkerList(const TArray<UPalIndividualCharacterSlot*>& SlotList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdatePagePalBoxList(int32 NowPage, const TArray<UPalIndividualCharacterSlot*>& SlotList);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNowDisplayWorkerList(TArray<UPalIndividualCharacterSlot*>& OutSlots);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBoxMaxPageNum();
    
    UFUNCTION(BlueprintCallable)
    void ChangePrevPagePalBoxList();
    
    UFUNCTION(BlueprintCallable)
    void ChangeNextPagePalBoxList();
    
    UFUNCTION(BlueprintCallable)
    void CancelLift();
    
};

