#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_WorkSuitabilityPreference.generated.h"

class UPalUIWorkSuitabilitySettingModel;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_WorkSuitabilityPreference : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalUIWorkSuitabilitySettingModel* Model;
    
    UPalHUDDispatchParameter_WorkSuitabilityPreference();

};

