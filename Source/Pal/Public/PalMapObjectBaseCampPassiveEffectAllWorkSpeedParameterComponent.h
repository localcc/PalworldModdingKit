#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectBaseCampPassiveEffectParameterComponentBase.h"
#include "PalMapObjectBaseCampPassiveEffectAllWorkSpeedParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectBaseCampPassiveEffectAllWorkSpeedParameterComponent : public UPalMapObjectBaseCampPassiveEffectParameterComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorkSpeedAdditionalRate;
    
    UPalMapObjectBaseCampPassiveEffectAllWorkSpeedParameterComponent(const FObjectInitializer& ObjectInitializer);

};

