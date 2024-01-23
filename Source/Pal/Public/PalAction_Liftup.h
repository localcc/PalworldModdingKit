#pragma once
#include "CoreMinimal.h"
#include "PalActionBase.h"
#include "PalAction_Liftup.generated.h"

class APalCharacter;

UCLASS(Blueprintable)
class UPalAction_Liftup : public UPalActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttachRelativeLocationOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttachToLeftHand;
    
public:
    UPalAction_Liftup();
protected:
    UFUNCTION(BlueprintCallable)
    void StartRagdollForTargetCharacter();
    
    UFUNCTION(BlueprintCallable)
    void StartInterpTransformForAttachCharacter();
    
    UFUNCTION(BlueprintCallable)
    void PlayWeaponChangeAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayTargetBeLiftupAction(APalCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayStartLiftupMontage();
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerPlayerInteract();
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteStartLiftupMontage();
    
    UFUNCTION(BlueprintCallable)
    void AttachLiftedCharacter();
    
};

