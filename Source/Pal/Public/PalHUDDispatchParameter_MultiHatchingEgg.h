#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_MultiHatchingEgg.generated.h"

class UPalMapObjectMultiHatchingEggModel;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_MultiHatchingEgg : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalMapObjectMultiHatchingEggModel* HatchingEggModel;
    
    UPalHUDDispatchParameter_MultiHatchingEgg();

};

