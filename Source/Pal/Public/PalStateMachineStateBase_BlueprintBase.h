#pragma once
#include "CoreMinimal.h"
#include "PalStateMachineStateBase.h"
#include "PalStateMachineStateBase_BlueprintBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API UPalStateMachineStateBase_BlueprintBase : public UPalStateMachineStateBase {
    GENERATED_BODY()
public:
    UPalStateMachineStateBase_BlueprintBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StateTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StateExit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StateEnter();
    
};

