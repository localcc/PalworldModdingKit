#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
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
#include "PPSkyCreatorWeatherSettings.h"
#include "PPSkyCreatorWindSettings.h"
#include "PPSkyCreatorWeatherPreset.generated.h"

UCLASS(Blueprintable)
class PPSKYCREATORPLUGIN_API UPPSkyCreatorWeatherPreset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorSkyAtmosphereSettings SkyAtmosphereSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorVolumetricCloudSettings VolumetricCloudSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorBackgroundCloudSettings BackgroundCloudSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorSkyLightSettings SkyLightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorSunLightSettings SunLightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorMoonLightSettings MoonLightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorExponentialHeightFogSettings ExponentialHeightFogSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorStarMapSettings StarMapSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorWeatherFXSettings WeatherFXSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorWeatherMaterialFXSettings WeatherMaterialFXSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorWindSettings WindSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorPostProcessSettings PostProcessSettings;
    
    UPPSkyCreatorWeatherPreset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPPSkyCreatorWeatherSettings GetWeatherPresetSettings();
    
};

