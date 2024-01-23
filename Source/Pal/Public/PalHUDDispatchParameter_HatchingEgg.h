#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_HatchingEgg.generated.h"

class UPalMapObjectHatchingEggModel;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_HatchingEgg : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalMapObjectHatchingEggModel* HatchingEggModel;
    
    UPalHUDDispatchParameter_HatchingEgg();
};

