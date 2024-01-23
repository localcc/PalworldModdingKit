#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_MapObject.generated.h"

class UPalMapObjectConcreteModelBase;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_MapObject : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalMapObjectConcreteModelBase* MapObjectConcreteModel;
    
    UPalHUDDispatchParameter_MapObject();
};

