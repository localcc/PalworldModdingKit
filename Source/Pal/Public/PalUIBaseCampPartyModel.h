#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalItemSlotPressType.h"
#include "PalUIBaseCampPartyModel.generated.h"

class UPalIndividualCharacterSlot;

UCLASS(Blueprintable)
class UPalUIBaseCampPartyModel : public UObject {
    GENERATED_BODY()
public:
    UPalUIBaseCampPartyModel();
    UFUNCTION(BlueprintCallable)
    void SelectHandleSlot(const int32 DisplayIndex, const EPalItemSlotPressType PressType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetSlotCountInPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<UPalIndividualCharacterSlot*> GetCurrentPageSlots() const;
    
};

