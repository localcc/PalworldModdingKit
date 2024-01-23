#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectLampModel.generated.h"

class UPalMapObjectEnergyModule;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectLampModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    UPalMapObjectLampModel();
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateEnergyModuleState(UPalMapObjectEnergyModule* EnergyModule);
    
};

