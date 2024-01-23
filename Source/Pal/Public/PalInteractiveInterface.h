#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PalInteractiveInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UPalInteractiveInterface : public UInterface {
    GENERATED_BODY()
};

class IPalInteractiveInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool IsEnableTriggerInteract() const PURE_VIRTUAL(IsEnableTriggerInteract, return false;);
    
};

