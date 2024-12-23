#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectEnergyStatusIndicatorModel.h"
#include "PalUIMapObjectEnergyStatusIndicatorModel_GenerateEnergy.generated.h"

class UPalMapObjectGenerateEnergyModel;

UCLASS(Blueprintable)
class PAL_API UPalUIMapObjectEnergyStatusIndicatorModel_GenerateEnergy : public UPalUIMapObjectEnergyStatusIndicatorModel {
    GENERATED_BODY()
public:
    UPalUIMapObjectEnergyStatusIndicatorModel_GenerateEnergy();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateStoredEnergyAmount(UPalMapObjectGenerateEnergyModel* GenerateEnergyModel);
    
};

