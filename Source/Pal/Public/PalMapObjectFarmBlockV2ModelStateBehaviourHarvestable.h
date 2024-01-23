#pragma once
#include "CoreMinimal.h"
#include "PalInstanceID.h"
#include "PalMapObjectFarmBlockV2ModelStateBehaviourBase.h"
#include "PalMapObjectFarmBlockV2ModelStateBehaviourHarvestable.generated.h"

class UPalWorkBase;
class UPalWorkProgress;

UCLASS(Blueprintable)
class UPalMapObjectFarmBlockV2ModelStateBehaviourHarvestable : public UPalMapObjectFarmBlockV2ModelStateBehaviourBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateHarvestProgressRateDelegate, float, ProgressRate);
    
    UPalMapObjectFarmBlockV2ModelStateBehaviourHarvestable();
private:
    UFUNCTION(BlueprintCallable)
    void OnWorkStarted(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnProgressWork(UPalWorkProgress* WorkProgress);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishWorkInServer(UPalWorkBase* Work);
    
};

