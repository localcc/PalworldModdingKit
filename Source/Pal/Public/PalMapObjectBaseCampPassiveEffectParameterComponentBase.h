#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalMapObjectBaseCampPassiveEffectParameterComponentBase.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectBaseCampPassiveEffectParameterComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPalMapObjectBaseCampPassiveEffectParameterComponentBase(const FObjectInitializer& ObjectInitializer);

};

