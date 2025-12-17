#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectStaticMeshComponentBase.h"
#include "PalMapObjectWorkPositionVisualizerComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectWorkPositionVisualizerComponent : public UPalMapObjectStaticMeshComponentBase {
    GENERATED_BODY()
public:
    UPalMapObjectWorkPositionVisualizerComponent(const FObjectInitializer& ObjectInitializer);

};

