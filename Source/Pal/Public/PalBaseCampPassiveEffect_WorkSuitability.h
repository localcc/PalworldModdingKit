#pragma once
#include "CoreMinimal.h"
#include "EPalWorkSuitability.h"
#include "PalBaseCampModulePassiveEffectWorkSpeedApplierInterface.h"
#include "PalBaseCampPassiveEffectBase.h"
#include "PalBaseCampPassiveEffect_WorkSuitability.generated.h"

UCLASS(Blueprintable)
class UPalBaseCampPassiveEffect_WorkSuitability : public UPalBaseCampPassiveEffectBase, public IPalBaseCampModulePassiveEffectWorkSpeedApplierInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalWorkSuitability, float> WorkSpeedAdditionalRateMap;
    
public:
    UPalBaseCampPassiveEffect_WorkSuitability();


    // Fix for true pure virtual functions not being implemented
};

