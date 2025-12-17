#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectStatusIndicatorParameterBase.h"
#include "PalUIMapObjectStatusIndicatorParameter_RaidBossArea.generated.h"

class UPalUIMapObjectRaidBossAreaStatusModel;

UCLASS(Blueprintable)
class UPalUIMapObjectStatusIndicatorParameter_RaidBossArea : public UPalUIMapObjectStatusIndicatorParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalUIMapObjectRaidBossAreaStatusModel* UIModel;
    
    UPalUIMapObjectStatusIndicatorParameter_RaidBossArea();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalUIMapObjectRaidBossAreaStatusModel* GetUIModel() const;
    
};

