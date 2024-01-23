#pragma once
#include "CoreMinimal.h"
#include "PalAIActionCompositeBase.h"
#include "PalAIActionCompositeActionDummy.generated.h"

class UPalAIActionBase;
class UPawnAction;

UCLASS(Blueprintable)
class UPalAIActionCompositeActionDummy : public UPalAIActionCompositeBase {
    GENERATED_BODY()
public:
    UPalAIActionCompositeActionDummy();
private:
    UFUNCTION(BlueprintCallable)
    void OnResumeAction(UPalAIActionBase* action);
    
    UFUNCTION(BlueprintCallable)
    void OnPauseAction(UPalAIActionBase* action, const UPawnAction* PausedBy);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishAction(UPalAIActionBase* action);
    
};

