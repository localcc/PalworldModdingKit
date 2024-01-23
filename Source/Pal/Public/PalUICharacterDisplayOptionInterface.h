#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PalUICharacterDisplayOptionInterface.generated.h"

class UPalIndividualCharacterSlot;

UINTERFACE(Blueprintable, MinimalAPI)
class UPalUICharacterDisplayOptionInterface : public UInterface {
    GENERATED_BODY()
};

class IPalUICharacterDisplayOptionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsSelectableSlot(const UPalIndividualCharacterSlot* Slot) const;
    
};

