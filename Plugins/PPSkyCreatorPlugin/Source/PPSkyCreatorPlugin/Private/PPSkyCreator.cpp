#include "PPSkyCreator.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Components/PostProcessComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"
#include "Components/SkyAtmosphereComponent.h"
#include "Components/SkyLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/VolumetricCloudComponent.h"
#include "NiagaraComponent.h"
#include "Net/UnrealNetwork.h"

APPSkyCreator::APPSkyCreator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->Root = (USceneComponent*)RootComponent;
    this->Billboard = NULL;
    this->Compass = NULL;
    this->SkyAtmosphere = CreateDefaultSubobject<USkyAtmosphereComponent>(TEXT("Sky Atmosphere Component"));
    this->VolumetricCloud = CreateDefaultSubobject<UVolumetricCloudComponent>(TEXT("Volumetric Cloud Component"));
    this->SkyLight = CreateDefaultSubobject<USkyLightComponent>(TEXT("Sky Light Component"));
    this->SunLight = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("Sun Light Component"));
    this->MoonLight = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("Moon Light Component"));
    this->ExponentialHeightFog = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("Exponential Height Fog Component"));
    this->PostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("Post Process Component"));
    this->StarMap = NULL;
    this->SunSphere = NULL;
    this->MoonSphere = NULL;
    this->OcclusionCapture = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Occlusion Capture Component"));
    this->WeatherFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Weather FX Component"));
    this->SkySphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sky Sphere Component"));
    this->SkySphereMID = NULL;
    this->bUseEditorTimeOfDay = true;
    this->EditorTimeOfDay = 12.00f;
    this->bUseEditorWeatherSettings = true;
    this->EditorWeatherType = EditorWeather_WeatherPreset;
    this->bIsUsedWithSequencer = false;
    this->bIsEditorTickEnabled = true;
    this->TimeOfDay = 0.00f;
    this->SkySphereRadius = 1000.00f;
    this->bShowDebugVariables = false;
    this->SunPositionType = SunPositionType_Simple;
    this->MoonPositionType = MoonPositionType_Simple;
    this->SunriseTime = 6.50f;
    this->SunsetTime = 19.50f;
    this->SunDawnOffsetTime = 1.50f;
    this->SunDuskOffsetTime = 1.50f;
    this->SunDawnTime = 0.00f;
    this->SunDuskTime = 0.00f;
    this->SunElevation = 55.00f;
    this->SunAzimuth = 270.00f;
    this->SunMinAngleAtDawnDusk = 8.00f;
    this->SunFadeInOutTime = 0.10f;
    this->MoonriseTime = 18.00f;
    this->MoonsetTime = 8.00f;
    this->MoonElevation = 45.00f;
    this->MoonAzimuth = 270.00f;
    this->MoonFadeInOutTime = 0.10f;
    this->Latitude = 51.51f;
    this->Longitude = -0.12f;
    this->TimeZone = 0.00f;
    this->bDaylightSavingTime = false;
    this->Year = 2022;
    this->Month = 5;
    this->Day = 10;
    this->bLightTransition = true;
    this->SunSurfaceBrightness = 1.00f;
    this->MoonSurfaceBrightness = 1.00f;
    this->SunCurrentElevation = 0.00f;
    this->TransitionStartSunAngle = -6.00f;
    this->TransitionMiddleSunAngle = 0.00f;
    this->TransitionEndSunAngle = 6.00f;
    this->NightIntensityTransitionStartSunAngle = 3.00f;
    this->NightIntensityTransitionEndSunAngle = 9.00f;
    this->SkyAtmosphereMobility = EComponentMobility::Movable;
    this->TransformMode = ESkyAtmosphereTransformMode::PlanetTopAtComponentTransform;
    this->PlanetRadius = 6360.00f;
    this->AtmosphereHeight = 60.00f;
    this->AerialPespectiveViewDistanceScale = 1.00f;
    this->TraceSampleCountScale = 4.00f;
    this->GodRaysResolution = 32.00f;
    this->LayerBottomAltitude = 2.00f;
    this->LayerHeight = 8.00f;
    this->TracingStartMaxDistance = 350.00f;
    this->TracingMaxDistance = 50.00f;
    this->bPerSampleAtmosphericLightTransmittance = true;
    this->VolumetricCloudMID = NULL;
    this->VolumetricCloudDensitySampleMID = NULL;
    this->VolumetricCloudDensitySampleRT = NULL;
    this->bCinematicQuality = false;
    this->RenderMode = VolumetricCloudRenderTargetMode_Default;
    this->bHighQualityAerialPerspective = false;
    this->MultiScatteringApproximationOctaveCount = 1;
    this->bGroundContribution = false;
    this->bRayMarchVolumeShadow = true;
    this->ViewSampleCountScale = 1.50f;
    this->ReflectionSampleCountScale = 0.50f;
    this->ShadowViewSampleCountScale = 0.50f;
    this->ShadowReflectionSampleCountScale = 0.25f;
    this->ShadowTracingDistance = 5.00f;
    this->CloudMapScale = 50.00f;
    this->CoverageVariationMapScale = 50.00f;
    this->NoiseShapeResolution = VolumetricCloudNoiseShapeResolution_64;
    this->NoiseDetailResolution = VolumetricCloudNoiseDetailResolution_32;
    this->NoiseShapeScale = 6.00f;
    this->NoiseDetailScale = 0.75f;
    this->TurbulenceScale = 4.00f;
    this->BackgroundCloudsContrast = 3.00f;
    this->BackgroundCloudsReflectionScale = 0.50f;
    this->SkyLightMobility = EComponentMobility::Movable;
    this->bRealTimeCapture = true;
    this->bSkyLightCaptureTimeSlice = true;
    this->bLowerHemisphereIsSolidColor = true;
    this->bCloudAmbientOcclusion = true;
    this->CloudAmbientOcclusionExtent = 50.00f;
    this->CloudAmbientOcclusionMapResolutionScale = 1.00f;
    this->CloudAmbientOcclusionApertureScale = 0.05f;
    this->SunLightMobility = EComponentMobility::Movable;
    this->bControlSunDirection = true;
    this->bSunConstantIntensity = true;
    this->SunIntensity = 10.00f;
    this->SunCurrentIntensity = 0.00f;
    this->bSunUseTemperature = false;
    this->SunDiskSize = 2.00f;
    this->bSunConstantAtmosphereDiskColorScale = false;
    this->bSunPerPixelAtmosphereTransmittance = false;
    this->SunCloudShadowExtent = 35.00f;
    this->SunCloudShadowMapResolutionScale = 1.00f;
    this->SunCloudShadowRaySampleCountScale = 1.00f;
    this->MoonLightMobility = EComponentMobility::Movable;
    this->bControlMoonDirection = true;
    this->bMoonConstantIntensity = true;
    this->MoonIntensity = 0.04f;
    this->MoonCurrentIntensity = 0.00f;
    this->bMoonUseTemperature = false;
    this->MoonDiskSize = 2.00f;
    this->MoonRotation = 0.00f;
    this->MoonPhase = 0.00f;
    this->bMoonPhaseLightIntensityScale = false;
    this->MoonPhaseLightIntensityMinScale = 0.50f;
    this->MoonPhaseLightIntensityMaxScale = 1.00f;
    this->bMoonConstantAtmosphereDiskColorScale = false;
    this->bMoonPerPixelAtmosphereTransmittance = false;
    this->MoonCloudShadowExtent = 35.00f;
    this->MoonCloudShadowMapResolutionScale = 1.00f;
    this->MoonCloudShadowRaySampleCountScale = 1.00f;
    this->ExponentialHeightFogMobility = EComponentMobility::Movable;
    this->bEnableExponentialHeightFog = true;
    this->bVolumetricFog = false;
    this->FogHeightOffset = 0.00f;
    this->SecondFogHeightOffset = 0.00f;
    this->StarMapRotationType = StarMapRotationType_FollowMoon;
    this->bEnableOcclusionCapture = true;
    this->OcclusionCaptureWidth = 10000.00f;
    this->OcclusionCaptureHeight = 10000.00f;
    this->bOcclusionCaptureRealtimeUpdate = false;
    this->OcclusionCaptureStepDistance = 500.00f;
    this->OcclusionCaptureStepSize = 10.00f;
    this->OcclusionBias = 5.00f;
    this->OcclusionBlurSamples = 32;
    this->OcclusionBlurDistance = 20.00f;
    this->OcclusionMaskFadeHardness = 0.90f;
    this->WeatherFXCutoffWorldHeight = -100.00f;
    this->WeatherFXCutoffSoftness = 100.00f;
    this->PrecipitationSpawnRadius = 600.00f;
    this->bEnableGPUPrecipitation = true;
    this->PrecipitationSpawnRadiusGPU = 2000.00f;
    this->PrecipitationMaxViewDistance = 4000.00f;
    this->PrecipitationVerticalCheckDistance = 10000.00f;
    this->PrecipitationCollisionChannel = ECC_WorldStatic;
    this->PrecipitationDepthFadeDistance = 100.00f;
    this->PrecipitationCameraFadeDistance = 100.00f;
    this->PrecipitationCameraFadeOffset = 50.00f;
    this->RainSpawnRateMaxCPU = 4000.00f;
    this->RainSpawnRateMaxGPU = 100000.00f;
    this->RainDistanceScaleFactor = 2.00f;
    this->RainCameraMotionAlignmentScale = 0.60f;
    this->RainVelocityElongationScale = 2.00f;
    this->RainMaskHardness = 0.50f;
    this->RainSplashSpawnRateMax = 2000.00f;
    this->RainSplashSpawnRateMaxGPU = 100000.00f;
    this->SnowSpawnRateMaxCPU = 1000.00f;
    this->SnowSpawnRateMaxGPU = 100000.00f;
    this->SnowDistanceScaleFactor = 2.00f;
    this->SnowCameraMotionAlignmentScale = 0.40f;
    this->SnowVelocityElongationScale = 1.25f;
    this->SnowMaskHardness = 0.50f;
    this->LightningParameters.AddDefaulted(4);
    this->CurrentLightningInterval = 0.00f;
    this->LightningCurrentIndex = 0;
    this->bSampleCloudDensity = true;
    this->LightningMaxSamples = 4;
    this->LightningSpawnInnerRadius = 10.00f;
    this->LightningSpawnOuterRadius = 25.00f;
    this->LightningRandomDegreeInConeMax = 45.00f;
    this->LightningBoltEmissiveScale = 10.00f;
    this->LightningFlashFadeUpdateRate = 60.00f;
    this->LightningFlashFadeDelta = 0.00f;
    this->LightningFlashEmissiveScale = 100.00f;
    this->LightningFlashEmissiveReflectionScale = 0.10f;
    this->LightningFlashRadiusScale = 1.00f;
    this->LightningFlashFadeSpeed = 0.50f;
    this->RainbowDistance = 20000.00f;
    this->RainbowDepthFadeDistance = 50000.00f;
    this->MaterialFXCutoffWorldHeight = -100.00f;
    this->MaterialFXCutoffSoftness = 100.00f;
    this->WetnessSlopeAngle = 0.00f;
    this->WetnessSlopeSmoothness = 0.50f;
    this->PuddlesMaskScale = 2000.00f;
    this->PuddlesRoughness = 0.02f;
    this->PuddlesSlopeAngle = 0.75f;
    this->PuddlesSlopeSmoothness = 0.50f;
    this->bEnableRainRipplesSolver = true;
    this->bPauseRainRipplesSolver = false;
    this->RainRipplesUpdateRate = 60.00f;
    this->RainRipplesScale = 200.00f;
    this->RainRipplesMaxDensity = 6.00f;
    this->WindRipplesScale = 100.00f;
    this->RainRipplesSolverDelta = 0.00f;
    this->RainRipplesSolverHeightState = 0;
    this->RainRipplesPropagationMID = NULL;
    this->RainRipplesNormalMID = NULL;
    this->RainRipplesPropagationFrame0 = NULL;
    this->RainRipplesPropagationFrame1 = NULL;
    this->RainRipplesPropagationFrame2 = NULL;
    this->SnowMaskScale = 500.00f;
    this->SnowScale = 500.00f;
    this->SnowRoughness = 0.40f;
    this->SnowSparklesScale = 25.00f;
    this->SnowSparklesRoughness = 0.25f;
    this->SnowSlopeAngle = 0.50f;
    this->SnowSlopeSmoothness = 0.00f;
    this->bEnableWind = true;
    this->bIndependentWindControl = true;
    this->CloudWindSkewAmount = 0.25f;
    this->CloudWindSkewForce = 0.00f;
    this->bUseExposureSettings = true;
    this->bExtendDefaultLuminanceRange = false;
    this->PostProcessPriority = 0.00f;
    this->ExposureMethod = AEM_Histogram;
    this->ExposureBiasCurve = NULL;
    this->ExposureMeterMask = NULL;
    this->ExposureMinBrightness = 0.02f;
    this->ExposureMaxBrightness = 20.00f;
    this->ExposureMinEV100 = -6.00f;
    this->ExposureMaxEV100 = 20.00f;
    this->ExposureSpeedUp = 4.00f;
    this->ExposureSpeedDown = 4.00f;
    this->ExposureLowPercent = 70.00f;
    this->ExposureHighPercent = 90.00f;
    this->ExposureHistogramLogMin = -16.00f;
    this->ExposureHistogramLogMax = 4.00f;
    this->ExposureHistogramMinEV100 = -12.00f;
    this->ExposureHistogramMaxEV100 = 20.00f;
    this->SkyAtmosphere->SetupAttachment(RootComponent);
    this->VolumetricCloud->SetupAttachment(RootComponent);
    this->SkyLight->SetupAttachment(RootComponent);
    this->SunLight->SetupAttachment(RootComponent);
    this->MoonLight->SetupAttachment(RootComponent);
    this->ExponentialHeightFog->SetupAttachment(RootComponent);
    this->PostProcess->SetupAttachment(RootComponent);
    this->OcclusionCapture->SetupAttachment(RootComponent);
    this->WeatherFX->SetupAttachment(RootComponent);
    this->SkySphere->SetupAttachment(RootComponent);
}

void APPSkyCreator::UpdateSettingsSequencer() {
}

void APPSkyCreator::SpawnLightningStrike(FVector LightningPosition) {
}

void APPSkyCreator::SetYear(int32 NewValue) {
}

void APPSkyCreator::SetWindSettings(FPPSkyCreatorWindSettings InWindSettings) {
}

void APPSkyCreator::SetWindIndependentSettings(FPPSkyCreatorWindSettings InWindSettings) {
}

void APPSkyCreator::SetWeatherSettings(FPPSkyCreatorWeatherSettings InWeatherSettings) {
}

void APPSkyCreator::SetWeatherMaterialFXSettings(FPPSkyCreatorWeatherMaterialFXSettings InWeatherMaterialFXSettings) {
}

void APPSkyCreator::SetWeatherFXSettings(FPPSkyCreatorWeatherFXSettings InWeatherFXSettings) {
}

void APPSkyCreator::SetVolumetricCloudSettings(FPPSkyCreatorVolumetricCloudSettings InVolumetricCloudSettings) {
}

void APPSkyCreator::SetTimeZone(float NewValue) {
}

void APPSkyCreator::SetTime(float InTime) {
}

void APPSkyCreator::SetSunSimplePositionSettings(const float InSunriseTime, const float InSunsetTime, const float InSunElevation, const float InSunAzimuth) {
}

void APPSkyCreator::SetSunsetTime(float NewValue) {
}

void APPSkyCreator::SetSunriseTime(float NewValue) {
}

void APPSkyCreator::SetSunMinAngleAtDawnDusk(float NewValue) {
}

void APPSkyCreator::SetSunLightSettings(FPPSkyCreatorSunLightSettings InSunLightSettings) {
}

void APPSkyCreator::SetSunIntensity(float NewValue) {
}

void APPSkyCreator::SetSunElevation(float NewValue) {
}

void APPSkyCreator::SetSunDuskOffsetTime(float NewValue) {
}

void APPSkyCreator::SetSunDiskSize(float NewValue) {
}

void APPSkyCreator::SetSunDawnOffsetTime(float NewValue) {
}

void APPSkyCreator::SetSunAzimuth(float NewValue) {
}

void APPSkyCreator::SetSunAtmosphereDiskColorScale(FLinearColor NewValue) {
}

void APPSkyCreator::SetStarMapSettings(FPPSkyCreatorStarMapSettings InStarMapSettings) {
}

void APPSkyCreator::SetStarMapAdditionalRotation(FVector NewValue) {
}

void APPSkyCreator::SetSkyLightSettings(FPPSkyCreatorSkyLightSettings InSkyLightSettings) {
}

void APPSkyCreator::SetSkyAtmosphereSettings(FPPSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettings) {
}

void APPSkyCreator::SetRealPositionSettings(const float InLatitude, const float InLongitude, const float InTimeZone, const bool InbDaylightSavingTime, const int32 InYear, const int32 InMonth, const int32 InDay) {
}

void APPSkyCreator::SetPostProcessSettings(FPPSkyCreatorPostProcessSettings InPostProcessSettings) {
}

void APPSkyCreator::SetMoonSimplePositionSettings(const float InMoonriseTime, const float InMoonsetTime, const float InMoonElevation, const float InMoonAzimuth) {
}

void APPSkyCreator::SetMoonsetTime(float NewValue) {
}

void APPSkyCreator::SetMoonRotation(float NewValue) {
}

void APPSkyCreator::SetMoonriseTime(float NewValue) {
}

void APPSkyCreator::SetMoonPhase(float NewValue) {
}

void APPSkyCreator::SetMoonLightSettings(FPPSkyCreatorMoonLightSettings InMoonLightSettings) {
}

void APPSkyCreator::SetMoonIntensity(float NewValue) {
}

void APPSkyCreator::SetMoonElevation(float NewValue) {
}

void APPSkyCreator::SetMoonDiskSize(float NewValue) {
}

void APPSkyCreator::SetMoonAzimuth(float NewValue) {
}

void APPSkyCreator::SetMoonAtmosphereDiskColorScale(FLinearColor NewValue) {
}

void APPSkyCreator::SetMonth(int32 NewValue) {
}

void APPSkyCreator::SetLongitude(float NewValue) {
}

void APPSkyCreator::SetLayerHeight(float NewValue) {
}

void APPSkyCreator::SetLayerBottomAltitude(float NewValue) {
}

void APPSkyCreator::SetLatitude(float NewValue) {
}

void APPSkyCreator::SetExponentialHeightFogSettings(FPPSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettings) {
}

void APPSkyCreator::SetEditorWeatherSettings(FPPSkyCreatorWeatherSettings NewValue) {
}

void APPSkyCreator::SetEditorWeatherPreset(UPPSkyCreatorWeatherPreset* NewValue) {
}

void APPSkyCreator::SetEditorTimeOfDay(float NewValue) {
}

void APPSkyCreator::SetDay(int32 NewValue) {
}

void APPSkyCreator::SetCloudMapOffset(FVector2D NewValue) {
}

void APPSkyCreator::SetbDaylightSavingTime(bool NewValue) {
}

void APPSkyCreator::SetBackgroundCloudSettings(FPPSkyCreatorBackgroundCloudSettings InBackgroundCloudSettings) {
}

void APPSkyCreator::RealtimeTimeOfDay(float DeltaSeconds, float DayCycleDuration) {
}

void APPSkyCreator::OnRep_UpdateWeather() {
}

void APPSkyCreator::OnRep_UpdateTime() {
}

void APPSkyCreator::LerpWindSettings(FPPSkyCreatorWindSettings InWindSettingsA, FPPSkyCreatorWindSettings InWindSettingsB, float Alpha) {
}

void APPSkyCreator::LerpWindIndependentSettings(FPPSkyCreatorWindSettings InWindSettingsA, FPPSkyCreatorWindSettings InWindSettingsB, float Alpha) {
}

void APPSkyCreator::LerpWetnessAmount(float WetnessAmountA, float WetnessAmountB, float Alpha) {
}

void APPSkyCreator::LerpWeatherSettings(FPPSkyCreatorWeatherSettings InWeatherSettingsA, FPPSkyCreatorWeatherSettings InWeatherSettingsB, float Alpha) {
}

void APPSkyCreator::LerpWeatherMaterialFXSettings(FPPSkyCreatorWeatherMaterialFXSettings InWeatherMaterialFXSettingsA, FPPSkyCreatorWeatherMaterialFXSettings InWeatherMaterialFXSettingsB, float Alpha) {
}

void APPSkyCreator::LerpWeatherFXSettings(FPPSkyCreatorWeatherFXSettings InWeatherFXSettingsA, FPPSkyCreatorWeatherFXSettings InWeatherFXSettingsB, float Alpha) {
}

void APPSkyCreator::LerpVolumetricCloudSettings(FPPSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsA, FPPSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsB, float Alpha) {
}

void APPSkyCreator::LerpSunLightSettings(FPPSkyCreatorSunLightSettings InSunLightSettingsA, FPPSkyCreatorSunLightSettings InSunLightSettingsB, float Alpha) {
}

void APPSkyCreator::LerpStarMapSettings(FPPSkyCreatorStarMapSettings InStarMapSettingsA, FPPSkyCreatorStarMapSettings InStarMapSettingsB, float Alpha) {
}

void APPSkyCreator::LerpSnowAmount(float SnowAmountA, float SnowAmountB, float Alpha) {
}

void APPSkyCreator::LerpSkyLightSettings(FPPSkyCreatorSkyLightSettings InSkyLightSettingsA, FPPSkyCreatorSkyLightSettings InSkyLightSettingsB, float Alpha) {
}

void APPSkyCreator::LerpSkyAtmosphereSettings(FPPSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsA, FPPSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsB, float Alpha) {
}

void APPSkyCreator::LerpPuddlesAmount(float PuddlesAmountA, float PuddlesAmountB, float Alpha) {
}

void APPSkyCreator::LerpPostProcessSettings(FPPSkyCreatorPostProcessSettings InPostProcessSettingsA, FPPSkyCreatorPostProcessSettings InPostProcessSettingsB, float Alpha) {
}

void APPSkyCreator::LerpMoonLightSettings(FPPSkyCreatorMoonLightSettings InMoonLightSettingsA, FPPSkyCreatorMoonLightSettings InMoonLightSettingsB, float Alpha) {
}

void APPSkyCreator::LerpExponentialHeightFogSettings(FPPSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsA, FPPSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsB, float Alpha) {
}

void APPSkyCreator::LerpBackgroundCloudSettings(FPPSkyCreatorBackgroundCloudSettings InBackgroundCloudSettingsA, FPPSkyCreatorBackgroundCloudSettings InBackgroundCloudSettingsB, float Alpha) {
}

FPPSkyCreatorWindSettings APPSkyCreator::GetWindSettings() const {
    return FPPSkyCreatorWindSettings{};
}

FPPSkyCreatorWeatherSettings APPSkyCreator::GetWeatherSettings() const {
    return FPPSkyCreatorWeatherSettings{};
}

FPPSkyCreatorWeatherMaterialFXSettings APPSkyCreator::GetWeatherMaterialFXSettings() const {
    return FPPSkyCreatorWeatherMaterialFXSettings{};
}

FPPSkyCreatorWeatherFXSettings APPSkyCreator::GetWeatherFXSettings() const {
    return FPPSkyCreatorWeatherFXSettings{};
}

FPPSkyCreatorVolumetricCloudSettings APPSkyCreator::GetVolumetricCloudSettings() const {
    return FPPSkyCreatorVolumetricCloudSettings{};
}

float APPSkyCreator::GetTime() const {
    return 0.0f;
}

FRotator APPSkyCreator::GetSunPosition(float Time) {
    return FRotator{};
}

FPPSkyCreatorSunLightSettings APPSkyCreator::GetSunLightSettings() const {
    return FPPSkyCreatorSunLightSettings{};
}

FPPSkyCreatorStarMapSettings APPSkyCreator::GetStarMapSettings() const {
    return FPPSkyCreatorStarMapSettings{};
}

FRotator APPSkyCreator::GetStarMapRotation() const {
    return FRotator{};
}

FPPSkyCreatorSkyLightSettings APPSkyCreator::GetSkyLightSettings() const {
    return FPPSkyCreatorSkyLightSettings{};
}

FPPSkyCreatorSkyAtmosphereSettings APPSkyCreator::GetSkyAtmosphereSettings() const {
    return FPPSkyCreatorSkyAtmosphereSettings{};
}

FPPSkyCreatorPostProcessSettings APPSkyCreator::GetPostProcessSettings() const {
    return FPPSkyCreatorPostProcessSettings{};
}

FRotator APPSkyCreator::GetMoonPosition(float Time) {
    return FRotator{};
}

float APPSkyCreator::GetMoonPhase() const {
    return 0.0f;
}

FPPSkyCreatorMoonLightSettings APPSkyCreator::GetMoonLightSettings() const {
    return FPPSkyCreatorMoonLightSettings{};
}

FVector APPSkyCreator::GetLastLightningPosition() {
    return FVector{};
}

FPPSkyCreatorExponentialHeightFogSettings APPSkyCreator::GetExponentialHeightFogSettings() const {
    return FPPSkyCreatorExponentialHeightFogSettings{};
}

float APPSkyCreator::GetCloudDensityAtPosition(FVector Position) {
    return 0.0f;
}

FPPSkyCreatorBackgroundCloudSettings APPSkyCreator::GetBackgroundCloudSettings() const {
    return FPPSkyCreatorBackgroundCloudSettings{};
}

bool APPSkyCreator::FindLightningPosition(FVector Position, FVector& OutPosition) {
    return false;
}

void APPSkyCreator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APPSkyCreator, TimeOfDay);
    DOREPLIFETIME(APPSkyCreator, WeatherSettings);
}


