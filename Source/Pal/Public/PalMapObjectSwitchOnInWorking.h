#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectSwitchOnInWorking.generated.h"

class UPalWorkBase;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectSwitchOnInWorking : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    UPalMapObjectSwitchOnInWorking();
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateAssignedCharacter_ServerInternal(UPalWorkBase* Work);
    
};

