#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraShakeBase.h"
#include "PalCameraShakePattern.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalCameraShakePattern : public UCameraShakePattern {
    GENERATED_BODY()
public:
    UPalCameraShakePattern(const FObjectInitializer& ObjectInitializer);
};

