#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "PalFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
    UPalFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

