#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PalMapObjectRequireElementalActionInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UPalMapObjectRequireElementalActionInterface : public UInterface {
    GENERATED_BODY()
};

class IPalMapObjectRequireElementalActionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual FName GetAssignDefineId() const PURE_VIRTUAL(GetAssignDefineId, return NAME_None;);
    
};

