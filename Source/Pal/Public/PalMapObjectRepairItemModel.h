#pragma once
#include "CoreMinimal.h"
#include "PalItemId.h"
#include "PalItemSlotId.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "PalStaticItemIdAndNum.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectRepairItemModel.generated.h"

class UPalUserWidgetOverlayUI;

UCLASS(Blueprintable)
class UPalMapObjectRepairItemModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNotifyRepairResult, bool, IsSuccess);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RequiredRepairItemRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> WidgetClass;
    
public:
    UPalMapObjectRepairItemModel();
    UFUNCTION(BlueprintCallable)
    void RequestRepairItem(const TArray<FPalItemSlotId>& TargetItemSlotIdArray);
    
private:
    UFUNCTION(BlueprintCallable)
    void RepairItem_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyRepairResult(bool IsSuccess);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRequiredMaterials(const TArray<FPalItemId>& TargetRepairItemIdArray, TArray<FPalStaticItemIdAndNum>& OutRequiredMaterials) const;
    
};

