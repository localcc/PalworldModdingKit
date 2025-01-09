#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectStatusIndicatorParameterBase.h"
#include "PalUIMapObjectEnergyStatusIndicatorParameterBase.generated.h"

class UPalUIMapObjectEnergyStatusIndicatorModel;

UCLASS(Blueprintable)
class PAL_API UPalUIMapObjectEnergyStatusIndicatorParameterBase : public UPalUIMapObjectStatusIndicatorParameterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalUIMapObjectEnergyStatusIndicatorModel* UIModel;
    
public:
    UPalUIMapObjectEnergyStatusIndicatorParameterBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalUIMapObjectEnergyStatusIndicatorModel* GetUIModel() const;
    
};

