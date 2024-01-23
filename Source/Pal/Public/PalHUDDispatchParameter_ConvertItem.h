#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_ConvertItem.generated.h"

class UPalMapObjectConvertItemModel;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_ConvertItem : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalMapObjectConvertItemModel* ConvertItemModel;
    
    UPalHUDDispatchParameter_ConvertItem();
};

