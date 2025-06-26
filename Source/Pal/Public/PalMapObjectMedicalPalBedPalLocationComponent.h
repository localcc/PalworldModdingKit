#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PalMapObjectMedicalPalBedPalLocationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectMedicalPalBedPalLocationComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPalMapObjectMedicalPalBedPalLocationComponent(const FObjectInitializer& ObjectInitializer);

};

