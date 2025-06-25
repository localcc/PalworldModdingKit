#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectStatusIndicatorParameterBase.h"
#include "PalUIMapObjectStatusIndicatorParameter_FishPond.generated.h"

class UPalUIMapObjectFishPondStatusIndicatorModel;

UCLASS(Blueprintable)
class UPalUIMapObjectStatusIndicatorParameter_FishPond : public UPalUIMapObjectStatusIndicatorParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalUIMapObjectFishPondStatusIndicatorModel* UIModel;
    
    UPalUIMapObjectStatusIndicatorParameter_FishPond();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalUIMapObjectFishPondStatusIndicatorModel* GetUIModel() const;
    
};

