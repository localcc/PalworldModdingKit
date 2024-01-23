#pragma once
#include "CoreMinimal.h"
#include "PalActionBase.h"
#include "PalAction_FeedItemToCharacter.generated.h"

class UPalAIActionFed;

UCLASS(Blueprintable)
class UPalAction_FeedItemToCharacter : public UPalActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FSimpleDelegate);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalAIActionFed* TargetCharacterAction;
    
public:
    UPalAction_FeedItemToCharacter();
private:
    UFUNCTION(BlueprintCallable)
    void TimeoutStartTargetCharacterApproachAction();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMontageFeeding();
    
    UFUNCTION(BlueprintCallable)
    void OnNotifiedMontage_OnReachFeeding();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishPlayMontageFeeding();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCancelByInputGuard();
    
};

