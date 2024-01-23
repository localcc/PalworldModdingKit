#pragma once
#include "CoreMinimal.h"
#include "PalActionBase.h"
#include "PalDeadInfo.h"
#include "PalAction_BeLiftup.generated.h"

UCLASS(Blueprintable)
class UPalAction_BeLiftup : public UPalActionBase {
    GENERATED_BODY()
public:
    UPalAction_BeLiftup();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartLifting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartInterpTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndInterpTransform();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDeadOwner_ServerInternal(FPalDeadInfo DeadInfo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttachedForBP();
    
};

