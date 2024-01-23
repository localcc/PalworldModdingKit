#pragma once
#include "CoreMinimal.h"
#include "SkyCreatorBackgroundCloudSettings.h"
#include "SkyCreatorExponentialHeightFogSettings.h"
#include "SkyCreatorMoonLightSettings.h"
#include "SkyCreatorPostProcessSettings.h"
#include "SkyCreatorSkyAtmosphereSettings.h"
#include "SkyCreatorSkyLightSettings.h"
#include "SkyCreatorStarMapSettings.h"
#include "SkyCreatorSunLightSettings.h"
#include "SkyCreatorVolumetricCloudSettings.h"
#include "SkyCreatorWeatherFXSettings.h"
#include "SkyCreatorWeatherMaterialFXSettings.h"
#include "SkyCreatorWindSettings.h"
#include "SkyCreatorWeatherSettings.generated.h"

USTRUCT(BlueprintType)
struct FSkyCreatorWeatherSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSkyCreatorSkyAtmosphereSettings SkyAtmosphereSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSkyCreatorVolumetricCloudSettings VolumetricCloudSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSkyCreatorBackgroundCloudSettings BackgroundCloudSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSkyCreatorSkyLightSettings SkyLightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSkyCreatorSunLightSettings SunLightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSkyCreatorMoonLightSettings MoonLightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSkyCreatorExponentialHeightFogSettings ExponentialHeightFogSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSkyCreatorStarMapSettings StarMapSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSkyCreatorWeatherFXSettings WeatherFXSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSkyCreatorWeatherMaterialFXSettings WeatherMaterialFXSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSkyCreatorWindSettings WindSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSkyCreatorPostProcessSettings PostProcessSettings;
    
    SKYCREATORPLUGIN_API FSkyCreatorWeatherSettings();
};

