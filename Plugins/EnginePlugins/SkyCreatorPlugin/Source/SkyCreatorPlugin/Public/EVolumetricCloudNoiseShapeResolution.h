#pragma once
#include "CoreMinimal.h"
#include "EVolumetricCloudNoiseShapeResolution.generated.h"

UENUM(BlueprintType)
enum EVolumetricCloudNoiseShapeResolution {
    VolumetricCloudNoiseShapeResolution_64,
    VolumetricCloudNoiseShapeResolution_128,
    VolumetricCloudNoiseShapeResolution_256,
    VolumetricCloudNoiseShapeResolution_MAX UMETA(Hidden),
};

