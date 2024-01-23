#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PalObjectDurabilityInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UPalObjectDurabilityInterface : public UInterface {
    GENERATED_BODY()
};

class IPalObjectDurabilityInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void SetDurability(float NewDurability) PURE_VIRTUAL(SetDurability,);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetMaxDurability() const PURE_VIRTUAL(GetMaxDurability, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetDurability() const PURE_VIRTUAL(GetDurability, return 0.0f;);
    
};

