#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraShakeBase.h"
#include "LegacyCameraShake.h"
#include "LegacyCameraShake.h"
#include "LegacyCameraShake.h"
#include "PalCameraShakeBase.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalCameraShakeBase : public UCameraShakeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CurveAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OscillationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OscillationBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OscillationBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FROscillator RotOscillation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVOscillator LocOscillation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFOscillator FOVOscillation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OscillatorTimeRemaining;
    
    UPalCameraShakeBase(const FObjectInitializer& ObjectInitializer);

};

