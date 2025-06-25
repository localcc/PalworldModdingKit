#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "PalMapObjectSpawnerForwardDirectionComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectSpawnerForwardDirectionComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UPalMapObjectSpawnerForwardDirectionComponent(const FObjectInitializer& ObjectInitializer);

};

