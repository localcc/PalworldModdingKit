#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EPalTackleState.h"
#include "PalSkillModule_Tackle_OnMontageNotifyDelegateDelegate.h"
#include "PalSkillModule_Tackle_OnSpawnedLoopEffectDelegateDelegate.h"
#include "PalSkillModule_Tackle_SimpleDelegateDelegate.h"
#include "PalUniqueSkillModule.h"
#include "Templates/SubclassOf.h"
#include "PalSkillModule_Tackle.generated.h"

class APalSkillEffectBase;
class UAnimMontage;
class UPalPlayMontageCallbackProxy;

UCLASS(Blueprintable)
class PAL_API UPalSkillModule_Tackle : public UPalUniqueSkillModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* StartAnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LoopAnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* EndAnimMontage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AttackTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AttackEndTimeForPassed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double YawMultiply;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double EndBrakeTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxSpeedMultiply;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinSpeedMultiply;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TackleHomingRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StartHomingRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TackleHomingDistanceLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTackleHoming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEffectSpawnOnGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndSkillEffectNotifyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartTossinNotifyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartEffectNotifyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalSkillEffectBase> StartSkillEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalSkillEffectBase> LoopSkillEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalSkillEffectBase* StartSkillEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalSkillEffectBase* LoopSkillEffect;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double EndBrakeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bStopUpdateYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle AttackTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalTackleState TackleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName flagName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalSkillModule_Tackle_OnSpawnedLoopEffectDelegate OnSpawnedLoopEffectDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalSkillModule_Tackle_SimpleDelegate OnEndAttackDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalSkillModule_Tackle_OnMontageNotifyDelegate OnMontageNotifyDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalSkillModule_Tackle_SimpleDelegate OnCompletedEndMontageDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalTackleState, float> TackleTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalPlayMontageCallbackProxy* Proxy;
    
public:
    UPalSkillModule_Tackle();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateYaw(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateVelocity(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TerminateMotion();
    
    UFUNCTION(BlueprintCallable)
    void SetFlagName(FName InFlagName);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentState(EPalTackleState InState);
    
    UFUNCTION(BlueprintCallable)
    void ResetTackleTimes();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartTossin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMontageNotifyEvent(UAnimMontage* Montage, FName NotifyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMontageEnded_Tackle(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndMontageNotifyEnd(FName NotifyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndMontageNotifyBegin(FName NotifyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndMontageInterrupted(FName NotifyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndMontageCompleted(FName NotifyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndMontageBlendOut(FName NotifyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingEndMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingAnyMontage(const TArray<UAnimMontage*> Montages) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTackleTime(EPalTackleState InState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTackleTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalTackleState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ControlInput(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckEndHoming();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckEndCurrentState();
    
};

