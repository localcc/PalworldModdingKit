#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalCaptureReactionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalCaptureReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalCaptureReactionComponent(const FObjectInitializer& ObjectInitializer);

};

