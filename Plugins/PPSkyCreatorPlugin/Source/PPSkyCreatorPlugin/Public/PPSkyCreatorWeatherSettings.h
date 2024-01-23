#pragma once
#include "CoreMinimal.h"
#include "PPSkyCreatorBackgroundCloudSettings.h"
#include "PPSkyCreatorExponentialHeightFogSettings.h"
#include "PPSkyCreatorMoonLightSettings.h"
#include "PPSkyCreatorPostProcessSettings.h"
#include "PPSkyCreatorSkyAtmosphereSettings.h"
#include "PPSkyCreatorSkyLightSettings.h"
#include "PPSkyCreatorStarMapSettings.h"
#include "PPSkyCreatorSunLightSettings.h"
#include "PPSkyCreatorVolumetricCloudSettings.h"
#include "PPSkyCreatorWeatherFXSettings.h"
#include "PPSkyCreatorWeatherMaterialFXSettings.h"
#include "PPSkyCreatorWindSettings.h"
#include "PPSkyCreatorWeatherSettings.generated.h"

USTRUCT(BlueprintType)
struct FPPSkyCreatorWeatherSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorSkyAtmosphereSettings SkyAtmosphereSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorVolumetricCloudSettings VolumetricCloudSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorBackgroundCloudSettings BackgroundCloudSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorSkyLightSettings SkyLightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorSunLightSettings SunLightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorMoonLightSettings MoonLightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorExponentialHeightFogSettings ExponentialHeightFogSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorStarMapSettings StarMapSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorWeatherFXSettings WeatherFXSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorWeatherMaterialFXSettings WeatherMaterialFXSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorWindSettings WindSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorPostProcessSettings PostProcessSettings;
    
    PPSKYCREATORPLUGIN_API FPPSkyCreatorWeatherSettings();
};

