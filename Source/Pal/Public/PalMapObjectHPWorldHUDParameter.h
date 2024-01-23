#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalMapObjectHPWorldHUDParameter.generated.h"

class APalMapObject;

UCLASS(Blueprintable)
class UPalMapObjectHPWorldHUDParameter : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalMapObject* MapObject;
    
    UPalMapObjectHPWorldHUDParameter();
};

