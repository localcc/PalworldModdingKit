#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalUIMapObjectStatusIndicatorParameterBase.generated.h"

class UPalMapObjectConcreteModelBase;

UCLASS(Blueprintable)
class UPalUIMapObjectStatusIndicatorParameterBase : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPalUIMapObjectStatusIndicatorParameterBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalMapObjectConcreteModelBase* GetConcreteModel() const;
    
};

