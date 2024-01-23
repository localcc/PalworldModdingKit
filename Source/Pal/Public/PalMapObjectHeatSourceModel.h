#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectHeatSourceModel.generated.h"

class UPalMapObjectEnergyModule;
class UPalWorkBase;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectHeatSourceModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    UPalMapObjectHeatSourceModel();
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateEnergyModuleState_ServerInternal(UPalMapObjectEnergyModule* EnergyModule);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateAssignedCharacter_ServerInternal(UPalWorkBase* Work);
    
};

