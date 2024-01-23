#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectStatusIndicatorParameterBase.h"
#include "PalUIRecoverPalStatusIndicatorParameter.generated.h"

class UPalMapObjectRecoverOtomoModel;

UCLASS(Blueprintable)
class UPalUIRecoverPalStatusIndicatorParameter : public UPalUIMapObjectStatusIndicatorParameterBase {
    GENERATED_BODY()
public:
    UPalUIRecoverPalStatusIndicatorParameter();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetConcreteModel(UPalMapObjectRecoverOtomoModel*& ConcreteModel) const;
    
};

