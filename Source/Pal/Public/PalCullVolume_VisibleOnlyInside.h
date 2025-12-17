#pragma once
#include "CoreMinimal.h"
#include "PalCullVolumeBase.h"
#include "PalCullVolume_VisibleOnlyInside.generated.h"

UCLASS(Blueprintable)
class PAL_API APalCullVolume_VisibleOnlyInside : public APalCullVolumeBase {
    GENERATED_BODY()
public:
    APalCullVolume_VisibleOnlyInside(const FObjectInitializer& ObjectInitializer);

};

