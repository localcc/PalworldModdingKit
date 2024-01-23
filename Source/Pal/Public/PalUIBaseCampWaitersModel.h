#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalItemSlotPressType.h"
#include "PalUIBaseCampWaitersModel.generated.h"

class UPalIndividualCharacterSlot;

UCLASS(Blueprintable)
class UPalUIBaseCampWaitersModel : public UObject {
    GENERATED_BODY()
public:
    UPalUIBaseCampWaitersModel();
    UFUNCTION(BlueprintCallable)
    void SelectHandleSlot(const int32 DisplayIndex, const EPalItemSlotPressType PressType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotCountInPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPalIndividualCharacterSlot*> GetCurrentPageSlots() const;
    
};

