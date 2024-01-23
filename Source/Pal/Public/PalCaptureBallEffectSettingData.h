#pragma once
#include "CoreMinimal.h"
#include "PalCaptureBallEffectSettingData.generated.h"

USTRUCT(BlueprintType)
struct FPalCaptureBallEffectSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CaptureAbsorbToBall_ParticleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CaptureAbsorbToBall_Scale;
    
    PAL_API FPalCaptureBallEffectSettingData();
};

