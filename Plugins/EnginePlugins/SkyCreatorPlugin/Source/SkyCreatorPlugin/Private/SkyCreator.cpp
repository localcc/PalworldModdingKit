#include "SkyCreator.h"
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

void ASkyCreator::UpdateSettingsSequencer() {
}

void ASkyCreator::SpawnLightningStrike(FVector LightningPosition) {
}

void ASkyCreator::SetYear(int32 NewValue) {
}

void ASkyCreator::SetWindSettings(FSkyCreatorWindSettings InWindSettings) {
}

void ASkyCreator::SetWindIndependentSettings(FSkyCreatorWindSettings InWindSettings) {
}

void ASkyCreator::SetWeatherSettings(FSkyCreatorWeatherSettings InWeatherSettings) {
}

void ASkyCreator::SetWeatherMaterialFXSettings(FSkyCreatorWeatherMaterialFXSettings InWeatherMaterialFXSettings) {
}

void ASkyCreator::SetWeatherFXSettings(FSkyCreatorWeatherFXSettings InWeatherFXSettings) {
}

void ASkyCreator::SetVolumetricCloudSettings(FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettings) {
}

void ASkyCreator::SetTimeZone(float NewValue) {
}

void ASkyCreator::SetTime(float InTime) {
}

void ASkyCreator::SetSunSimplePositionSettings(const float InSunriseTime, const float InSunsetTime, const float InSunElevation, const float InSunAzimuth) {
}

void ASkyCreator::SetSunsetTime(float NewValue) {
}

void ASkyCreator::SetSunriseTime(float NewValue) {
}

void ASkyCreator::SetSunMinAngleAtDawnDusk(float NewValue) {
}

void ASkyCreator::SetSunLightSettings(FSkyCreatorSunLightSettings InSunLightSettings) {
}

void ASkyCreator::SetSunIntensity(float NewValue) {
}

void ASkyCreator::SetSunElevation(float NewValue) {
}

void ASkyCreator::SetSunDuskOffsetTime(float NewValue) {
}

void ASkyCreator::SetSunDiskSize(float NewValue) {
}

void ASkyCreator::SetSunDawnOffsetTime(float NewValue) {
}

void ASkyCreator::SetSunAzimuth(float NewValue) {
}

void ASkyCreator::SetSunAtmosphereDiskColorScale(FLinearColor NewValue) {
}

void ASkyCreator::SetStarMapSettings(FSkyCreatorStarMapSettings InStarMapSettings) {
}

void ASkyCreator::SetStarMapAdditionalRotation(FVector NewValue) {
}

void ASkyCreator::SetSkyLightSettings(FSkyCreatorSkyLightSettings InSkyLightSettings) {
}

void ASkyCreator::SetSkyAtmosphereSettings(FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettings) {
}

void ASkyCreator::SetRealPositionSettings(const float InLatitude, const float InLongitude, const float InTimeZone, const bool InbDaylightSavingTime, const int32 InYear, const int32 InMonth, const int32 InDay) {
}

void ASkyCreator::SetPostProcessSettings(FSkyCreatorPostProcessSettings InPostProcessSettings) {
}

void ASkyCreator::SetMoonSimplePositionSettings(const float InMoonriseTime, const float InMoonsetTime, const float InMoonElevation, const float InMoonAzimuth) {
}

void ASkyCreator::SetMoonsetTime(float NewValue) {
}

void ASkyCreator::SetMoonRotation(float NewValue) {
}

void ASkyCreator::SetMoonriseTime(float NewValue) {
}

void ASkyCreator::SetMoonPhase(float NewValue) {
}

void ASkyCreator::SetMoonLightSettings(FSkyCreatorMoonLightSettings InMoonLightSettings) {
}

void ASkyCreator::SetMoonIntensity(float NewValue) {
}

void ASkyCreator::SetMoonElevation(float NewValue) {
}

void ASkyCreator::SetMoonDiskSize(float NewValue) {
}

void ASkyCreator::SetMoonAzimuth(float NewValue) {
}

void ASkyCreator::SetMoonAtmosphereDiskColorScale(FLinearColor NewValue) {
}

void ASkyCreator::SetMonth(int32 NewValue) {
}

void ASkyCreator::SetLongitude(float NewValue) {
}

void ASkyCreator::SetLayerHeight(float NewValue) {
}

void ASkyCreator::SetLayerBottomAltitude(float NewValue) {
}

void ASkyCreator::SetLatitude(float NewValue) {
}

void ASkyCreator::SetExponentialHeightFogSettings(FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettings) {
}

void ASkyCreator::SetEditorWeatherSettings(FSkyCreatorWeatherSettings NewValue) {
}

void ASkyCreator::SetEditorWeatherPreset(USkyCreatorWeatherPreset* NewValue) {
}

void ASkyCreator::SetEditorTimeOfDay(float NewValue) {
}

void ASkyCreator::SetDay(int32 NewValue) {
}

void ASkyCreator::SetCloudMapOffset(FVector2D NewValue) {
}

void ASkyCreator::SetbDaylightSavingTime(bool NewValue) {
}

void ASkyCreator::SetBackgroundCloudSettings(FSkyCreatorBackgroundCloudSettings InBackgroundCloudSettings) {
}

void ASkyCreator::RealtimeTimeOfDay(float DeltaSeconds, float DayCycleDuration) {
}

void ASkyCreator::OnRep_UpdateWeather() {
}

void ASkyCreator::OnRep_UpdateTime() {
}

void ASkyCreator::LerpWindSettings(FSkyCreatorWindSettings InWindSettingsA, FSkyCreatorWindSettings InWindSettingsB, float Alpha) {
}

void ASkyCreator::LerpWindIndependentSettings(FSkyCreatorWindSettings InWindSettingsA, FSkyCreatorWindSettings InWindSettingsB, float Alpha) {
}

void ASkyCreator::LerpWetnessAmount(float WetnessAmountA, float WetnessAmountB, float Alpha) {
}

void ASkyCreator::LerpWeatherSettings(FSkyCreatorWeatherSettings InWeatherSettingsA, FSkyCreatorWeatherSettings InWeatherSettingsB, float Alpha) {
}

void ASkyCreator::LerpWeatherMaterialFXSettings(FSkyCreatorWeatherMaterialFXSettings InWeatherMaterialFXSettingsA, FSkyCreatorWeatherMaterialFXSettings InWeatherMaterialFXSettingsB, float Alpha) {
}

void ASkyCreator::LerpWeatherFXSettings(FSkyCreatorWeatherFXSettings InWeatherFXSettingsA, FSkyCreatorWeatherFXSettings InWeatherFXSettingsB, float Alpha) {
}

void ASkyCreator::LerpVolumetricCloudSettings(FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsA, FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsB, float Alpha) {
}

void ASkyCreator::LerpSunLightSettings(FSkyCreatorSunLightSettings InSunLightSettingsA, FSkyCreatorSunLightSettings InSunLightSettingsB, float Alpha) {
}

void ASkyCreator::LerpStarMapSettings(FSkyCreatorStarMapSettings InStarMapSettingsA, FSkyCreatorStarMapSettings InStarMapSettingsB, float Alpha) {
}

void ASkyCreator::LerpSnowAmount(float SnowAmountA, float SnowAmountB, float Alpha) {
}

void ASkyCreator::LerpSkyLightSettings(FSkyCreatorSkyLightSettings InSkyLightSettingsA, FSkyCreatorSkyLightSettings InSkyLightSettingsB, float Alpha) {
}

void ASkyCreator::LerpSkyAtmosphereSettings(FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsA, FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsB, float Alpha) {
}

void ASkyCreator::LerpPuddlesAmount(float PuddlesAmountA, float PuddlesAmountB, float Alpha) {
}

void ASkyCreator::LerpPostProcessSettings(FSkyCreatorPostProcessSettings InPostProcessSettingsA, FSkyCreatorPostProcessSettings InPostProcessSettingsB, float Alpha) {
}

void ASkyCreator::LerpMoonLightSettings(FSkyCreatorMoonLightSettings InMoonLightSettingsA, FSkyCreatorMoonLightSettings InMoonLightSettingsB, float Alpha) {
}

void ASkyCreator::LerpExponentialHeightFogSettings(FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsA, FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsB, float Alpha) {
}

void ASkyCreator::LerpBackgroundCloudSettings(FSkyCreatorBackgroundCloudSettings InBackgroundCloudSettingsA, FSkyCreatorBackgroundCloudSettings InBackgroundCloudSettingsB, float Alpha) {
}

FSkyCreatorWindSettings ASkyCreator::GetWindSettings() const {
    return FSkyCreatorWindSettings{};
}

FSkyCreatorWeatherSettings ASkyCreator::GetWeatherSettings() const {
    return FSkyCreatorWeatherSettings{};
}

FSkyCreatorWeatherMaterialFXSettings ASkyCreator::GetWeatherMaterialFXSettings() const {
    return FSkyCreatorWeatherMaterialFXSettings{};
}

FSkyCreatorWeatherFXSettings ASkyCreator::GetWeatherFXSettings() const {
    return FSkyCreatorWeatherFXSettings{};
}

FSkyCreatorVolumetricCloudSettings ASkyCreator::GetVolumetricCloudSettings() const {
    return FSkyCreatorVolumetricCloudSettings{};
}

float ASkyCreator::GetTime() const {
    return 0.0f;
}

FRotator ASkyCreator::GetSunPosition(float Time) {
    return FRotator{};
}

FSkyCreatorSunLightSettings ASkyCreator::GetSunLightSettings() const {
    return FSkyCreatorSunLightSettings{};
}

FSkyCreatorStarMapSettings ASkyCreator::GetStarMapSettings() const {
    return FSkyCreatorStarMapSettings{};
}

FRotator ASkyCreator::GetStarMapRotation() const {
    return FRotator{};
}

FSkyCreatorSkyLightSettings ASkyCreator::GetSkyLightSettings() const {
    return FSkyCreatorSkyLightSettings{};
}

FSkyCreatorSkyAtmosphereSettings ASkyCreator::GetSkyAtmosphereSettings() const {
    return FSkyCreatorSkyAtmosphereSettings{};
}

FSkyCreatorPostProcessSettings ASkyCreator::GetPostProcessSettings() const {
    return FSkyCreatorPostProcessSettings{};
}

FRotator ASkyCreator::GetMoonPosition(float Time) {
    return FRotator{};
}

float ASkyCreator::GetMoonPhase() const {
    return 0.0f;
}

FSkyCreatorMoonLightSettings ASkyCreator::GetMoonLightSettings() const {
    return FSkyCreatorMoonLightSettings{};
}

FVector ASkyCreator::GetLastLightningPosition() {
    return FVector{};
}

FSkyCreatorExponentialHeightFogSettings ASkyCreator::GetExponentialHeightFogSettings() const {
    return FSkyCreatorExponentialHeightFogSettings{};
}

float ASkyCreator::GetCloudDensityAtPosition(FVector Position) {
    return 0.0f;
}

FSkyCreatorBackgroundCloudSettings ASkyCreator::GetBackgroundCloudSettings() const {
    return FSkyCreatorBackgroundCloudSettings{};
}

bool ASkyCreator::FindLightningPosition(FVector Position, FVector& OutPosition) {
    return false;
}

void ASkyCreator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASkyCreator, TimeOfDay);
    DOREPLIFETIME(ASkyCreator, WeatherSettings);
}

ASkyCreator::ASkyCreator() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
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
}

