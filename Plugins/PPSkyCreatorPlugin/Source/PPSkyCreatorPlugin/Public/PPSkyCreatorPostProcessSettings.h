#pragma once
#include "CoreMinimal.h"
#include "PPSkyCreatorPostProcessSettings.generated.h"

USTRUCT(BlueprintType)
struct FPPSkyCreatorPostProcessSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BloomIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BloomThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float ExposureCompensation;
    
    PPSKYCREATORPLUGIN_API FPPSkyCreatorPostProcessSettings();
};

