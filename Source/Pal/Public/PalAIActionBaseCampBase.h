#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "EPalMapBaseCampWorkerOrderType.h"
#include "PalAIActionBase.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalMonsterControllerBaseCampHungryParameter.h"
#include "Templates/SubclassOf.h"
#include "PalAIActionBaseCampBase.generated.h"

class AActor;
class UPalAIActionBaseCampChildBase;
class UPalAIActionCombatBase;
class UPalBaseCampModel;
class UPalHUDDispatchParameterBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class PAL_API UPalAIActionBaseCampBase : public UPalAIActionBase, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkSpeedDefault;
    
public:
    UPalAIActionBaseCampBase();

protected:
    UFUNCTION(BlueprintCallable)
    void StartCombatAction(TSubclassOf<UPalAIActionCombatBase> CombatActionClass);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateFullStomach(const float Current, const float Last);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void OnClosedWorkerRadialMenu(UPalHUDDispatchParameterBase* Parameter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOrderCommand(const EPalMapBaseCampWorkerOrderType OrderType);
    
    UFUNCTION(BlueprintCallable)
    void InterruptActionToRecoverHungry(const FPalMonsterControllerBaseCampHungryParameter Parameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetBaseCampIdBelongTo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBaseCampModel* GetBaseCampBelongTo() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishCombatAction();
    
    UFUNCTION(BlueprintCallable)
    void ChangeChildAction(UPalAIActionBaseCampChildBase* action);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeActionToWorker();
    

    // Fix for true pure virtual functions not being implemented
};

