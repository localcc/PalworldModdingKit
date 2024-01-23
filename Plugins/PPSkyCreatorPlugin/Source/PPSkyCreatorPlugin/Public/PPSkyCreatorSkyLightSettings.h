#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PPSkyCreatorSkyLightSettings.generated.h"

USTRUCT(BlueprintType)
struct FPPSkyCreatorSkyLightSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float NightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor LightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor LowerHemisphereColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CloudAmbientOcclusionStrength;
    
    PPSKYCREATORPLUGIN_API FPPSkyCreatorSkyLightSettings();
};

