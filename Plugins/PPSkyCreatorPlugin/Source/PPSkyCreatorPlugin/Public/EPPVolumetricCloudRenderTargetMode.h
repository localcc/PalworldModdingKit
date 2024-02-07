#pragma once
#include "CoreMinimal.h"
#include "EPPVolumetricCloudRenderTargetMode.generated.h"

UENUM(BlueprintType)
enum EPPVolumetricCloudRenderTargetMode {
    VolumetricCloudRenderTargetMode_Default,
    VolumetricCloudRenderTargetMode_Quality,
    VolumetricCloudRenderTargetMode_Performance,
};

