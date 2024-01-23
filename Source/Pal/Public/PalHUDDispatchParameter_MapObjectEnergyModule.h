#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_MapObjectEnergyModule.generated.h"

class UPalMapObjectEnergyModule;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_MapObjectEnergyModule : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalMapObjectEnergyModule* EnergyModule;
    
    UPalHUDDispatchParameter_MapObjectEnergyModule();
};

