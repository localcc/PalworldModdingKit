#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectBaseCampPassiveEffectParameterComponentBase.h"
#include "PalMapObjectBaseCampPassiveEffectWorkHardParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectBaseCampPassiveEffectWorkHardParameterComponent : public UPalMapObjectBaseCampPassiveEffectParameterComponentBase {
    GENERATED_BODY()
public:
    UPalMapObjectBaseCampPassiveEffectWorkHardParameterComponent(const FObjectInitializer& ObjectInitializer);

};

