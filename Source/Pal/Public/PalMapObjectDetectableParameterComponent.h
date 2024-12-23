#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalMapObjectDetectableParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectDetectableParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalMapObjectDetectableParameterComponent(const FObjectInitializer& ObjectInitializer);

};

