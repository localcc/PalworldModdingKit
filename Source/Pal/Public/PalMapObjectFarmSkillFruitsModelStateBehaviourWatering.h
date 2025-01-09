#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectFarmSkillFruitsModelStateBehaviourBase.h"
#include "PalMapObjectFarmSkillFruitsModelStateBehaviourWatering.generated.h"

class UPalWorkBase;
class UPalWorkProgress;

UCLASS(Blueprintable)
class UPalMapObjectFarmSkillFruitsModelStateBehaviourWatering : public UPalMapObjectFarmSkillFruitsModelStateBehaviourBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateWaterStackRateDelegate, float, WaterStackRate);
    
    UPalMapObjectFarmSkillFruitsModelStateBehaviourWatering();

private:
    UFUNCTION(BlueprintCallable)
    void OnProgressWorkInServer(UPalWorkProgress* WorkProgress);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishWorkInServer(UPalWorkBase* Work);
    
};

