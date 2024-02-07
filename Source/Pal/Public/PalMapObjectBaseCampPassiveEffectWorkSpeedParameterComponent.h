#pragma once
#include "CoreMinimal.h"
#include "EPalWorkSuitability.h"
#include "PalMapObjectBaseCampPassiveEffectParameterComponentBase.h"
#include "PalMapObjectBaseCampPassiveEffectWorkSpeedParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectBaseCampPassiveEffectWorkSpeedParameterComponent : public UPalMapObjectBaseCampPassiveEffectParameterComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AffectMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWorkSuitability TargetWorkSuitability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorkSpeedAdditionalRate;
    
    UPalMapObjectBaseCampPassiveEffectWorkSpeedParameterComponent(const FObjectInitializer& ObjectInitializer);

};

