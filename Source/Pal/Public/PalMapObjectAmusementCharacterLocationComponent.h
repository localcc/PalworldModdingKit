#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "PalMapObjectAmusementCharacterLocationComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectAmusementCharacterLocationComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UPalMapObjectAmusementCharacterLocationComponent(const FObjectInitializer& ObjectInitializer);

};

