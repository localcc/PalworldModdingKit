#pragma once
#include "CoreMinimal.h"
#include "SkyCreatorPostProcessSettings.generated.h"

USTRUCT(BlueprintType)
struct FSkyCreatorPostProcessSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BloomIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BloomThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float ExposureCompensation;
    
    SKYCREATORPLUGIN_API FSkyCreatorPostProcessSettings();
};

