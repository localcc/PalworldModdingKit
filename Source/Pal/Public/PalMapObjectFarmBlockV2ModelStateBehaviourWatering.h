#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectFarmBlockV2ModelStateBehaviourBase.h"
#include "PalMapObjectFarmBlockV2ModelStateBehaviourWatering.generated.h"

class UPalWorkBase;
class UPalWorkProgress;

UCLASS(Blueprintable)
class UPalMapObjectFarmBlockV2ModelStateBehaviourWatering : public UPalMapObjectFarmBlockV2ModelStateBehaviourBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateWaterStackRateDelegate, float, WaterStackRate);
    
    UPalMapObjectFarmBlockV2ModelStateBehaviourWatering();
private:
    UFUNCTION(BlueprintCallable)
    void OnProgressWorkInServer(UPalWorkProgress* WorkProgress);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishWorkInServer(UPalWorkBase* Work);
    
};

