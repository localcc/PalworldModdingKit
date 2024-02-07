#pragma once
#include "CoreMinimal.h"
#include "PalStaticItemIdAndNum.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIRepairItemBase.generated.h"

class UPalItemSlot;
class UPalMapObjectRepairItemModel;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIRepairItemBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalMapObjectRepairItemModel* RepairItemModel;
    
public:
    UPalUIRepairItemBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SetMaxDurabilityForce(const TArray<UPalItemSlot*>& TargetItemSlotArray);
    
    UFUNCTION(BlueprintCallable)
    void RequestRepair(const TArray<UPalItemSlot*>& TargetItemSlotArray);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRecievedRepairResult(bool IsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CollectRepairInfo(const TArray<UPalItemSlot*>& TargetItemSlotArray, TArray<FPalStaticItemIdAndNum>& OutRequiredMaterials, bool& OutCanRepair);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CollectRepairableSlot(TArray<UPalItemSlot*>& OutRepairableSlots);
    
};

