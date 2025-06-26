#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractTriggerEventDelegate.h"
#include "InteractTriggeringEventDelegate.h"
#include "PalInteractiveInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UPalInteractiveInterface : public UInterface {
    GENERATED_BODY()
};

class IPalInteractiveInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void UnbindOnTriggerInteract(FInteractTriggerEvent Event) PURE_VIRTUAL(UnbindOnTriggerInteract,);
    
    UFUNCTION(BlueprintCallable)
    virtual void UnbindOnTriggeringInteract(FInteractTriggeringEvent Event) PURE_VIRTUAL(UnbindOnTriggeringInteract,);
    
    UFUNCTION(BlueprintCallable)
    virtual void UnbindOnStartTriggerInteract(FInteractTriggerEvent Event) PURE_VIRTUAL(UnbindOnStartTriggerInteract,);
    
    UFUNCTION(BlueprintCallable)
    virtual void UnbindOnEndTriggerInteract(FInteractTriggerEvent Event) PURE_VIRTUAL(UnbindOnEndTriggerInteract,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsEnableTriggerInteract() const PURE_VIRTUAL(IsEnableTriggerInteract, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BindOnTriggerInteract(FInteractTriggerEvent Event) PURE_VIRTUAL(BindOnTriggerInteract,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BindOnTriggeringInteract(FInteractTriggeringEvent Event) PURE_VIRTUAL(BindOnTriggeringInteract,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BindOnStartTriggerInteract(FInteractTriggerEvent Event) PURE_VIRTUAL(BindOnStartTriggerInteract,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BindOnEndTriggerInteract(FInteractTriggerEvent Event) PURE_VIRTUAL(BindOnEndTriggerInteract,);
    
};

