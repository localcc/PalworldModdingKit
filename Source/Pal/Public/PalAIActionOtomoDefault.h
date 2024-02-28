#pragma once
#include "CoreMinimal.h"
#include "PalAIActionCompositeBase.h"
#include "PalAIActionOtomoDefault.generated.h"

class AActor;

UCLASS(Blueprintable)
class UPalAIActionOtomoDefault : public UPalAIActionCompositeBase {
    GENERATED_BODY()
public:
    UPalAIActionOtomoDefault();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldSetCombatAction() const;
    
    UFUNCTION(BlueprintCallable)
    void SetOtomoWorkActionFixedAssign(AActor* HitActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOtomoWorkAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOtomoFollowAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOtomoCombatAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOtomoBerserker(AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOtomoBaseCampAction();
    
};

