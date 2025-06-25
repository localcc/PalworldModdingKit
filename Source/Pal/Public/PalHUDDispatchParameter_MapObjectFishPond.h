#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_MapObjectFishPond.generated.h"

class UPalUIMapObjectFishPondModel;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_MapObjectFishPond : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalUIMapObjectFishPondModel* Model;
    
    UPalHUDDispatchParameter_MapObjectFishPond();

};

