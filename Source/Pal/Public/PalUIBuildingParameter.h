#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalUIBuildingParameter.generated.h"

UCLASS(Blueprintable)
class UPalUIBuildingParameter : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BuildObjectId;
    
    UPalUIBuildingParameter();
};

