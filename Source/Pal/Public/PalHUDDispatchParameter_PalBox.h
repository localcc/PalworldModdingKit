#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_PalBox.generated.h"

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_PalBox : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid BaseCampId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid OwnerMapObjectInstanceId;
    
    UPalHUDDispatchParameter_PalBox();
};

