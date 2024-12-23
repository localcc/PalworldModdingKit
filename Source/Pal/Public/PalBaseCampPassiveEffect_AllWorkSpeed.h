#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampModulePassiveEffectWorkSpeedApplierInterface.h"
#include "PalBaseCampPassiveEffectBase.h"
#include "PalBaseCampPassiveEffect_AllWorkSpeed.generated.h"

UCLASS(Blueprintable)
class UPalBaseCampPassiveEffect_AllWorkSpeed : public UPalBaseCampPassiveEffectBase, public IPalBaseCampModulePassiveEffectWorkSpeedApplierInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WorkSpeedAdditionalRate;
    
public:
    UPalBaseCampPassiveEffect_AllWorkSpeed();


    // Fix for true pure virtual functions not being implemented
};

