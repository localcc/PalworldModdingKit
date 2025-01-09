#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectBaseCampPassiveEffectParameterComponentBase.h"
#include "PalMapObjectBaseCampPassiveEffectSanityParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectBaseCampPassiveEffectSanityParameterComponent : public UPalMapObjectBaseCampPassiveEffectParameterComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SanityDecreaseSuppressRate;
    
    UPalMapObjectBaseCampPassiveEffectSanityParameterComponent(const FObjectInitializer& ObjectInitializer);

};

