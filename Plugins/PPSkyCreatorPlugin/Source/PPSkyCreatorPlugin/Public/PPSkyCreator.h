#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/Scene.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SkyAtmosphereComponent.h"
#include "EPPSkyCreatorEditorWeatherType.h"
#include "EPPSkyCreatorMoonPositionType.h"
#include "EPPSkyCreatorStarMapRotationType.h"
#include "EPPSkyCreatorSunPositionType.h"
#include "EPPVolumetricCloudNoiseDetailResolution.h"
#include "EPPVolumetricCloudNoiseShapeResolution.h"
#include "EPPVolumetricCloudRenderTargetMode.h"
#include "OnLightningStrikeDelegate2.h"
#include "PPCelestialPositionData.h"
#include "PPSkyCreatorBackgroundCloudSettings.h"
#include "PPSkyCreatorExponentialHeightFogSettings.h"
#include "PPSkyCreatorLightningParameters.h"
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
#include "PPSkyCreator.generated.h"

class UBillboardComponent;
class UCurveFloat;
class UDirectionalLightComponent;
class UExponentialHeightFogComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UNiagaraComponent;
class UPPSkyCreatorWeatherPreset;
class UPostProcessComponent;
class USceneCaptureComponent2D;
class USceneComponent;
class USkyAtmosphereComponent;
class USkyLightComponent;
class UStaticMeshComponent;
class UTexture;
class UTexture2D;
class UTextureRenderTarget2D;
class UVolumetricCloudComponent;

UCLASS(Blueprintable)
class PPSKYCREATORPLUGIN_API APPSkyCreator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Billboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Compass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkyAtmosphereComponent* SkyAtmosphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVolumetricCloudComponent* VolumetricCloud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkyLightComponent* SkyLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* SunLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* MoonLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExponentialHeightFogComponent* ExponentialHeightFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StarMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SunSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MoonSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* OcclusionCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* WeatherFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SkySphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SkySphereMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* SkySphereMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseEditorTimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float EditorTimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseEditorWeatherSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPPSkyCreatorEditorWeatherType> EditorWeatherType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UPPSkyCreatorWeatherPreset* EditorWeatherPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorWeatherSettings EditorWeatherSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsUsedWithSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEditorTickEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdateTime, meta=(AllowPrivateAccess=true))
    float TimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdateWeather, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorWeatherSettings WeatherSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* CommonMPC;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkySphereRadius;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugVariables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPPSkyCreatorSunPositionType> SunPositionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPPCelestialPositionData SunPositionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPPSkyCreatorMoonPositionType> MoonPositionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPPCelestialPositionData MoonPositionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SunriseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SunsetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SunDawnOffsetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SunDuskOffsetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunDawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunDuskTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SunElevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SunAzimuth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SunMinAngleAtDawnDusk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunFadeInOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MoonriseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MoonsetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MoonElevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MoonAzimuth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoonFadeInOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Latitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Longitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float TimeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bDaylightSavingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 Year;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 Month;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 Day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Date;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLightTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunSurfaceBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoonSurfaceBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunCurrentElevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionStartSunAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionMiddleSunAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionEndSunAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NightIntensityTransitionStartSunAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NightIntensityTransitionEndSunAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EComponentMobility::Type> SkyAtmosphereMobility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkyAtmosphereTransformMode TransformMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlanetRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AtmosphereHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialPespectiveViewDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlanetTopPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceSampleCountScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GodRaysResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float LayerBottomAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float LayerHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TracingStartMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TracingMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPerSampleAtmosphericLightTransmittance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* VolumetricCloudsMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LayerBottomAltitudePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LayerTopAltitudePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CurrentVolumetricCloudMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* VolumetricCloudMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* VolumetricCloudDensitySampleMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* VolumetricCloudDensitySampleMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* VolumetricCloudDensitySampleRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCinematicQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPPVolumetricCloudRenderTargetMode> RenderMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHighQualityAerialPerspective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MultiScatteringApproximationOctaveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGroundContribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRayMarchVolumeShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewSampleCountScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReflectionSampleCountScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowViewSampleCountScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowReflectionSampleCountScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowTracingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudMapScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D CloudMapOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoverageVariationMapScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPPVolumetricCloudNoiseShapeResolution> NoiseShapeResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPPVolumetricCloudNoiseDetailResolution> NoiseDetailResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoiseShapeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoiseDetailScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurbulenceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackgroundCloudsContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackgroundCloudsReflectionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EComponentMobility::Type> SkyLightMobility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRealTimeCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkyLightCaptureTimeSlice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLowerHemisphereIsSolidColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCloudAmbientOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudAmbientOcclusionExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudAmbientOcclusionMapResolutionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudAmbientOcclusionApertureScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EComponentMobility::Type> SunLightMobility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControlSunDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSunConstantIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SunIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunCurrentIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSunUseTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SunDiskSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSunConstantAtmosphereDiskColorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor SunAtmosphereDiskColorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSunPerPixelAtmosphereTransmittance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunCloudShadowExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunCloudShadowMapResolutionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SunCloudShadowRaySampleCountScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EComponentMobility::Type> MoonLightMobility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControlMoonDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoonConstantIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MoonIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoonCurrentIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoonUseTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MoonDiskSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MoonRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MoonPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoonPhaseLightIntensityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoonPhaseLightIntensityMinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoonPhaseLightIntensityMaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoonConstantAtmosphereDiskColorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor MoonAtmosphereDiskColorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoonPerPixelAtmosphereTransmittance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoonCloudShadowExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoonCloudShadowMapResolutionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoonCloudShadowRaySampleCountScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EComponentMobility::Type> ExponentialHeightFogMobility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableExponentialHeightFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVolumetricFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FogHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondFogHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* StarMapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPPSkyCreatorStarMapRotationType> StarMapRotationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector StarMapAdditionalRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOcclusionCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* OcclusionRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionCaptureWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionCaptureHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOcclusionCaptureRealtimeUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionCaptureStepDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionCaptureStepSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OcclusionBlurSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionBlurDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionMaskFadeHardness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraLocationSnapped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector OcclusionCurrentLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeatherFXCutoffWorldHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeatherFXCutoffSoftness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrecipitationSpawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableGPUPrecipitation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrecipitationSpawnRadiusGPU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrecipitationMaxViewDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrecipitationVerticalCheckDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> PrecipitationCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrecipitationDepthFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrecipitationCameraFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrecipitationCameraFadeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainSpawnRateMaxCPU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainSpawnRateMaxGPU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainDistanceScaleFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainCameraMotionAlignmentScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainVelocityElongationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainMaskHardness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainSplashSpawnRateMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainSplashSpawnRateMaxGPU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowSpawnRateMaxCPU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowSpawnRateMaxGPU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowDistanceScaleFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowCameraMotionAlignmentScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowVelocityElongationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowMaskHardness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* LightningsParametersRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPPSkyCreatorLightningParameters> LightningParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentLightningInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastLightningPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> LightningAvailablePositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightningCurrentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSampleCloudDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightningMaxSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningSpawnInnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningSpawnOuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningRandomDegreeInConeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningBoltEmissiveScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningFlashFadeUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningFlashFadeDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningFlashEmissiveScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningFlashEmissiveReflectionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningFlashRadiusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningFlashFadeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainbowDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainbowDepthFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaterialFXCutoffWorldHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaterialFXCutoffSoftness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WetnessSlopeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WetnessSlopeSmoothness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PuddlesMaskScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PuddlesRoughness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PuddlesSlopeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PuddlesSlopeSmoothness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRainRipplesSolver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPauseRainRipplesSolver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainRipplesUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainRipplesScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainRipplesMaxDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindRipplesScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainRipplesSolverDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RainRipplesSolverHeightState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* RainRipplesPropagation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* RainRipplesPropagationMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* RainRipplesForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* RainRipplesNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* RainRipplesNormalMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RainRipplesPropagationFrame0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RainRipplesPropagationFrame1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RainRipplesPropagationFrame2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RainRipplesNormalRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowMaskScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowRoughness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowSparklesScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowSparklesRoughness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowSlopeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowSlopeSmoothness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableWind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIndependentWindControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPPSkyCreatorWindSettings EditorIndependentWindSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CloudWindSkewAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CloudWindOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CloudWindSkewDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CloudWindSkewForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CloudNoiseShapeWindOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CloudNoiseDetailWindOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseExposureSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExtendDefaultLuminanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostProcessPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAutoExposureMethod> ExposureMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ExposureBiasCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* ExposureMeterMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureMinBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureMaxBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureMinEV100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureMaxEV100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureSpeedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureSpeedDown;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureLowPercent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureHighPercent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureHistogramLogMin;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureHistogramLogMax;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureHistogramMinEV100;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureHistogramMaxEV100;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLightningStrike OnLightningStrike;
    
    APPSkyCreator(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateSettingsSequencer();
    
    UFUNCTION(BlueprintCallable)
    void SpawnLightningStrike(FVector LightningPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetYear(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetWindSettings(FPPSkyCreatorWindSettings InWindSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetWindIndependentSettings(FPPSkyCreatorWindSettings InWindSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetWeatherSettings(FPPSkyCreatorWeatherSettings InWeatherSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetWeatherMaterialFXSettings(FPPSkyCreatorWeatherMaterialFXSettings InWeatherMaterialFXSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetWeatherFXSettings(FPPSkyCreatorWeatherFXSettings InWeatherFXSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumetricCloudSettings(FPPSkyCreatorVolumetricCloudSettings InVolumetricCloudSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeZone(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTime(float InTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSunSimplePositionSettings(const float InSunriseTime, const float InSunsetTime, const float InSunElevation, const float InSunAzimuth);
    
    UFUNCTION(BlueprintCallable)
    void SetSunsetTime(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSunriseTime(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSunMinAngleAtDawnDusk(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSunLightSettings(FPPSkyCreatorSunLightSettings InSunLightSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetSunIntensity(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSunElevation(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSunDuskOffsetTime(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSunDiskSize(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSunDawnOffsetTime(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSunAzimuth(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSunAtmosphereDiskColorScale(FLinearColor NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStarMapSettings(FPPSkyCreatorStarMapSettings InStarMapSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetStarMapAdditionalRotation(FVector NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSkyLightSettings(FPPSkyCreatorSkyLightSettings InSkyLightSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetSkyAtmosphereSettings(FPPSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetRealPositionSettings(const float InLatitude, const float InLongitude, const float InTimeZone, const bool InbDaylightSavingTime, const int32 InYear, const int32 InMonth, const int32 InDay);
    
    UFUNCTION(BlueprintCallable)
    void SetPostProcessSettings(FPPSkyCreatorPostProcessSettings InPostProcessSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonSimplePositionSettings(const float InMoonriseTime, const float InMoonsetTime, const float InMoonElevation, const float InMoonAzimuth);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonsetTime(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonRotation(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonriseTime(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonPhase(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonLightSettings(FPPSkyCreatorMoonLightSettings InMoonLightSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonIntensity(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonElevation(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonDiskSize(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonAzimuth(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonAtmosphereDiskColorScale(FLinearColor NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMonth(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLongitude(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLayerHeight(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLayerBottomAltitude(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLatitude(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetExponentialHeightFogSettings(FPPSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetEditorWeatherSettings(FPPSkyCreatorWeatherSettings NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEditorWeatherPreset(UPPSkyCreatorWeatherPreset* NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEditorTimeOfDay(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDay(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCloudMapOffset(FVector2D NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetbDaylightSavingTime(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundCloudSettings(FPPSkyCreatorBackgroundCloudSettings InBackgroundCloudSettings);
    
    UFUNCTION(BlueprintCallable)
    void RealtimeTimeOfDay(float DeltaSeconds, float DayCycleDuration);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdateWeather();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdateTime();
    
public:
    UFUNCTION(BlueprintCallable)
    void LerpWindSettings(FPPSkyCreatorWindSettings InWindSettingsA, FPPSkyCreatorWindSettings InWindSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpWindIndependentSettings(FPPSkyCreatorWindSettings InWindSettingsA, FPPSkyCreatorWindSettings InWindSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpWetnessAmount(float WetnessAmountA, float WetnessAmountB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpWeatherSettings(FPPSkyCreatorWeatherSettings InWeatherSettingsA, FPPSkyCreatorWeatherSettings InWeatherSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpWeatherMaterialFXSettings(FPPSkyCreatorWeatherMaterialFXSettings InWeatherMaterialFXSettingsA, FPPSkyCreatorWeatherMaterialFXSettings InWeatherMaterialFXSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpWeatherFXSettings(FPPSkyCreatorWeatherFXSettings InWeatherFXSettingsA, FPPSkyCreatorWeatherFXSettings InWeatherFXSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpVolumetricCloudSettings(FPPSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsA, FPPSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpSunLightSettings(FPPSkyCreatorSunLightSettings InSunLightSettingsA, FPPSkyCreatorSunLightSettings InSunLightSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpStarMapSettings(FPPSkyCreatorStarMapSettings InStarMapSettingsA, FPPSkyCreatorStarMapSettings InStarMapSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpSnowAmount(float SnowAmountA, float SnowAmountB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpSkyLightSettings(FPPSkyCreatorSkyLightSettings InSkyLightSettingsA, FPPSkyCreatorSkyLightSettings InSkyLightSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpSkyAtmosphereSettings(FPPSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsA, FPPSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpPuddlesAmount(float PuddlesAmountA, float PuddlesAmountB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpPostProcessSettings(FPPSkyCreatorPostProcessSettings InPostProcessSettingsA, FPPSkyCreatorPostProcessSettings InPostProcessSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpMoonLightSettings(FPPSkyCreatorMoonLightSettings InMoonLightSettingsA, FPPSkyCreatorMoonLightSettings InMoonLightSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpExponentialHeightFogSettings(FPPSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsA, FPPSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpBackgroundCloudSettings(FPPSkyCreatorBackgroundCloudSettings InBackgroundCloudSettingsA, FPPSkyCreatorBackgroundCloudSettings InBackgroundCloudSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPPSkyCreatorWindSettings GetWindSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPPSkyCreatorWeatherSettings GetWeatherSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPPSkyCreatorWeatherMaterialFXSettings GetWeatherMaterialFXSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPPSkyCreatorWeatherFXSettings GetWeatherFXSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPPSkyCreatorVolumetricCloudSettings GetVolumetricCloudSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTime() const;
    
    UFUNCTION(BlueprintCallable)
    FRotator GetSunPosition(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPPSkyCreatorSunLightSettings GetSunLightSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPPSkyCreatorStarMapSettings GetStarMapSettings() const;
    
    UFUNCTION(BlueprintCallable)
    FRotator GetStarMapRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPPSkyCreatorSkyLightSettings GetSkyLightSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPPSkyCreatorSkyAtmosphereSettings GetSkyAtmosphereSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPPSkyCreatorPostProcessSettings GetPostProcessSettings() const;
    
    UFUNCTION(BlueprintCallable)
    FRotator GetMoonPosition(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoonPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPPSkyCreatorMoonLightSettings GetMoonLightSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastLightningPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPPSkyCreatorExponentialHeightFogSettings GetExponentialHeightFogSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCloudDensityAtPosition(FVector Position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPPSkyCreatorBackgroundCloudSettings GetBackgroundCloudSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindLightningPosition(FVector Position, FVector& OutPosition);
    
};

