#pragma once
#include "CoreMinimal.h"
#include "Components/PointLightComponent.h"
#include "PalFirePointLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalFirePointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UPalFirePointLightComponent(const FObjectInitializer& ObjectInitializer);

};

