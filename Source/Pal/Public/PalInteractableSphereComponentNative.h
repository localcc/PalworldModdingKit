#pragma once
#include "CoreMinimal.h"
#include "PalInteractiveObjectSphereComponent.h"
#include "PalInteractableSphereComponentNative.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalInteractableSphereComponentNative : public UPalInteractiveObjectSphereComponent {
    GENERATED_BODY()
public:
    UPalInteractableSphereComponentNative(const FObjectInitializer& ObjectInitializer);

};

