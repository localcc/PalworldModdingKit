#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalAIActionBaseCampChildBase.h"
#include "PalAIActionWorkerInterruptInterface.h"
#include "PalMonsterControllerBaseCampHungryParameter.h"
#include "PalAIActionBaseCampRecoverHungryChildBase.generated.h"

class UPalAIActionBaseCampRecoverHungry;
class UPalMapObjectConcreteModelBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class PAL_API UPalAIActionBaseCampRecoverHungryChildBase : public UPalAIActionBaseCampChildBase, public IPalAIActionWorkerInterruptInterface {
    GENERATED_BODY()
public:
    UPalAIActionBaseCampRecoverHungryChildBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetTargetMapObjectConcreteModel(UPalMapObjectConcreteModelBase*& OutTargetModel);
    
    UFUNCTION(BlueprintCallable)
    void ToggleShowWantFoodHUD(const bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistEnoughFoodInTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailableDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTargetLocation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalAIActionBaseCampRecoverHungry* GetParentRecoverHungryAction();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHungryParameter(FPalMonsterControllerBaseCampHungryParameter& HungeryParameter);
    

    // Fix for true pure virtual functions not being implemented
};

