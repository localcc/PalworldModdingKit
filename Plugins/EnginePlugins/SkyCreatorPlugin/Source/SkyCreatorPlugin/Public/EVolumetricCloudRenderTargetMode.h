#pragma once
#include "CoreMinimal.h"
#include "EVolumetricCloudRenderTargetMode.generated.h"

UENUM(BlueprintType)
enum EVolumetricCloudRenderTargetMode {
    VolumetricCloudRenderTargetMode_Default,
    VolumetricCloudRenderTargetMode_Quality,
    VolumetricCloudRenderTargetMode_Performance,
    VolumetricCloudRenderTargetMode_MAX UMETA(Hidden),
};

