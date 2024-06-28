#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBase.h"
#include "PalAIActionWorkerInterruptInterface.h"
#include "PalDeadInfo.h"
#include "Templates/SubclassOf.h"
#include "PalAIActionCombatBase.generated.h"

class AActor;
class APalAIController;
class APalCharacter;
class UPalAICombatModule;
class UPalActionBase;
class UPalActionComponent;
class UPalActiveSkillSlot;
class UPalCharacterParameterComponent;
class UPalStaticCharacterParameterComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class PAL_API UPalAIActionCombatBase : public UPalAIActionBase, public IPalAIActionWorkerInterruptInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCombatFinishDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatFinishDelegate OnCombatFinish;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalCharacter* SelfActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalAICombatModule* CombatModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool NextIsWaza;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NextWazaSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalActionBase> NextActionClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InterruptSkillSlotID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInterruptSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInterruptSkillWaiting;
    
public:
    UPalAIActionCombatBase();

protected:
    UFUNCTION(BlueprintCallable)
    void StartNextAction_Event(const UPalActionComponent* ActionComponent);
    
    UFUNCTION(BlueprintCallable)
    void SkillSlotSetUp();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTargetAndNextAction(AActor* Target);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool PreTickFinishCheck();
    
    UFUNCTION(BlueprintCallable)
    void PlayActionWhenDarknessStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnDeadDeledate_Event(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintCallable)
    void MoveToTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LineTraceTarget();
    
public:
    UFUNCTION(BlueprintCallable)
    void InterruptAction(int32 SkillSlotID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalStaticCharacterParameterComponent* GetStaticParamCompRef();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalActiveSkillSlot* GetSkillSlotRef();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalCharacterParameterComponent* GetParamCompRef();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalAIController* GetControllerRef();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalActionComponent* GetActorActionComponentRef();
    
    UFUNCTION(BlueprintCallable)
    void ChangeNextAction();
    

    // Fix for true pure virtual functions not being implemented
};

