#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalMapObjectMultiplayParameter.generated.h"

class APalMapObject;

UCLASS(Blueprintable)
class UPalMapObjectMultiplayParameter : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalMapObject* MapObject;
    
    UPalMapObjectMultiplayParameter();

};

