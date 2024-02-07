#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "PalAIActionBase.h"
#include "PalAIActionWorkerInterruptInterface.h"
#include "PalAIActionLiftup.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalAIActionLiftup : public UPalAIActionBase, public IPalAIActionWorkerInterruptInterface {
    GENERATED_BODY()
public:
    UPalAIActionLiftup();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLanded();
    
private:
    UFUNCTION(BlueprintCallable)
    void CallOnLanded(const FHitResult& Hit);
    

    // Fix for true pure virtual functions not being implemented
};

