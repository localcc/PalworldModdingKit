#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "EPalMapBaseCampWorkerOrderType.h"
#include "PalAIActionBaseCampSleepActivelyParameter.h"
#include "PalMonsterControllerBaseCampHungryParameter.h"
#include "Templates/SubclassOf.h"
#include "PalMonsterControllerBaseCampInterface.generated.h"

class UPalAIActionBase;
class UPalAIActionBaseCampSleep;

UINTERFACE(Blueprintable, MinimalAPI)
class UPalMonsterControllerBaseCampInterface : public UInterface {
    GENERATED_BODY()
};

class IPalMonsterControllerBaseCampInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TerminateBaseCampActionByClass(TSubclassOf<UPalAIActionBase> actionClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDefaultPositionAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCapturedStorageAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBaseCampActionWithFixAssign(const FGuid& TargetWorkProgressId, const float DistanceFixAssignTargetting);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBaseCampActionSpawningForWork();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBaseCampActionSleepMedicalBed(const FGuid& TargetBedConcreteModelId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPalAIActionBaseCampSleep* SetBaseCampActionSleep();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBaseCampActionLift();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPalAIActionBase* SetBaseCampActionByClass(TSubclassOf<UPalAIActionBase> actionClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBaseCampAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOrderCommand(const EPalMapBaseCampWorkerOrderType OrderType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InterruptSleepActivelyAction(const FPalAIActionBaseCampSleepActivelyParameter& Parameter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InterruptReturnBackToBaseCamp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InterruptRecoverHungryAction(const FPalMonsterControllerBaseCampHungryParameter Parameter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InterruptPlayWorkerEventAction(UPalAIActionBase* action, const EAIRequestPriority::Type Priority);
    
};

