#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "PalBuildObjectSimulatingVisualMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalBuildObjectSimulatingVisualMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPalBuildObjectSimulatingVisualMeshComponent(const FObjectInitializer& ObjectInitializer);

};

