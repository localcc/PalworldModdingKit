#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ActionDynamicParameter.h"
#include "EPalPassiveSkillEffectType.h"
#include "PalNetArchive.h"
#include "PalActionBase.generated.h"

class AActor;
class APalCharacter;
class UPalIndividualCharacterParameter;

UCLASS(Blueprintable)
class UPalActionBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FActionEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionEndDelegate OnActionEndDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEndAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDeleteInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanInterruptWaza;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsChangeWorkAnimPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsChangeWalkableFloorAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionWalkableFloorAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisableNavWalk;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReflectForClient;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionDynamicParameter DynamicParameter;
    
public:
    UPalActionBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickAction(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimRateScale(FName flagName, float AnimRateScale);
    
    UFUNCTION(BlueprintCallable)
    void SendNotify(FName NotifyName);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdatePassiveSkill(EPalPassiveSkillEffectType EffectType, float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnEndPassiveSkill(EPalPassiveSkillEffectType EffectType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndAction();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeCurrentWorkSuitability();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBreakAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginAction();
    
    UFUNCTION(BlueprintCallable)
    bool IsInServer() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInLocalControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEndAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSimpleName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRandomStream GetRandomStream() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGeneralPurposeIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalNetArchive GetBlackboard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActionVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActionTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterParameter* GetActionIndividualCharacterParameter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetActionCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanStepCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanNextActionCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanGainSP();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanDeleteInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AnimEventSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AnimEventOther();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AnimEventAttack();
    
};

