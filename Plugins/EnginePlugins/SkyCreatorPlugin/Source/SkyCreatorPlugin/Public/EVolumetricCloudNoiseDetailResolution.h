#pragma once
#include "CoreMinimal.h"
#include "EVolumetricCloudNoiseDetailResolution.generated.h"

UENUM(BlueprintType)
enum EVolumetricCloudNoiseDetailResolution {
    VolumetricCloudNoiseDetailResolution_32,
    VolumetricCloudNoiseDetailResolution_64,
    VolumetricCloudNoiseDetailResolution_MAX UMETA(Hidden),
};

