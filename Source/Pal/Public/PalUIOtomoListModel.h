#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalItemSlotPressType.h"
#include "PalContainerId.h"
#include "PalUIOtomoListModel.generated.h"

class UPalIndividualCharacterSlot;
class UPalUIOtomoListModel;

UCLASS(Blueprintable)
class UPalUIOtomoListModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateSlotDelegate, UPalUIOtomoListModel*, Model);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSelectSlotDelegate, UPalUIOtomoListModel*, Model, const int32, SlotIndex, const EPalItemSlotPressType, PressType);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSelectSlotDelegate OnSelectSlotDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateSlotDelegate OnUpdateSlotDelegate;
    
    UPalUIOtomoListModel();
    UFUNCTION(BlueprintCallable)
    void SelectHandleSlot(const int32 DisplayIndex, const EPalItemSlotPressType PressType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetSlotCountInPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCurrentPageSlots(TArray<UPalIndividualCharacterSlot*>& OutSlots) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalContainerId GetContainerId() const;
    
};

