#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectEnergyStatusIndicatorModel.h"
#include "PalUIMapObjectEnergyStatusIndicatorModel_EnergyStorage.generated.h"

class UPalMapObjectEnergyStorageModel;

UCLASS(Blueprintable)
class PAL_API UPalUIMapObjectEnergyStatusIndicatorModel_EnergyStorage : public UPalUIMapObjectEnergyStatusIndicatorModel {
    GENERATED_BODY()
public:
    UPalUIMapObjectEnergyStatusIndicatorModel_EnergyStorage();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateStoredEnergyAmount(UPalMapObjectEnergyStorageModel* EnergyStorageModel);
    
};

