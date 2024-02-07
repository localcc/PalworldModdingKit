#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "PalMapObjectSpawnerMultiItemLocationComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectSpawnerMultiItemLocationComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPalMapObjectSpawnerMultiItemLocationComponent(const FObjectInitializer& ObjectInitializer);

};

