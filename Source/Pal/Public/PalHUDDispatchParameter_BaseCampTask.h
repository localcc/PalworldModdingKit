#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_BaseCampTask.generated.h"

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_BaseCampTask : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TargetBaseCampID;
    
    UPalHUDDispatchParameter_BaseCampTask();

};

