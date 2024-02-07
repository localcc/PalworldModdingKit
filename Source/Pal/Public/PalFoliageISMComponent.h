#pragma once
#include "CoreMinimal.h"
#include "FoliageInstancedStaticMeshComponent.h"
#include "PalFoliageISMComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalFoliageISMComponent : public UFoliageInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UPalFoliageISMComponent(const FObjectInitializer& ObjectInitializer);

};

