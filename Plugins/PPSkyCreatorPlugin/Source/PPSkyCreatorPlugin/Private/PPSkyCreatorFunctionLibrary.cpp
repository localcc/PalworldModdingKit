#include "PPSkyCreatorFunctionLibrary.h"

UPPSkyCreatorFunctionLibrary::UPPSkyCreatorFunctionLibrary() {
}

float UPPSkyCreatorFunctionLibrary::KilometersToCentimeters(const float Value) {
    return 0.0f;
}

bool UPPSkyCreatorFunctionLibrary::IsApplicationForegroundNow() {
    return false;
}

FPPCelestialPositionData UPPSkyCreatorFunctionLibrary::GetRealSunPosition(const float Latitude, const float Longitude, const float TimeZone, const bool bIsDaylightSavingTime, const FDateTime DateTime) {
    return FPPCelestialPositionData{};
}

FPPCelestialPositionData UPPSkyCreatorFunctionLibrary::GetRealMoonPosition(const float Latitude, const float Longitude, const float TimeZone, const bool bIsDaylightSavingTime, const FDateTime DateTime) {
    return FPPCelestialPositionData{};
}

float UPPSkyCreatorFunctionLibrary::GetCloudDensityAtPosition(UObject* WorldContextObject, FVector Position, UMaterialParameterCollection* ParameterCollection, UMaterialInterface* Material, UTextureRenderTarget2D* RenderTarget) {
    return 0.0f;
}

bool UPPSkyCreatorFunctionLibrary::FindLightningPosition(UObject* WorldContextObject, bool bSampleCloudDensity, int32 Samples, UMaterialParameterCollection* ParameterCollection, UMaterialInterface* Material, UTextureRenderTarget2D* RenderTarget, FVector Position, float InnerRadius, float OuterRadius, float minHeight, float maxHeight, float DensityThreshold, FVector& OutPosition) {
    return false;
}

double UPPSkyCreatorFunctionLibrary::ElevationRefraction(double F) {
    return 0.0;
}

UTexture2D* UPPSkyCreatorFunctionLibrary::DynamicConvertRenderTargetToTexture2D(UTextureRenderTarget2D* RenderTarget) {
    return NULL;
}

void UPPSkyCreatorFunctionLibrary::CreateAndAssignMID(UObject* WorldContextObject, UMaterialInterface* InMaterial, UMaterialInstanceDynamic*& InMID) {
}

void UPPSkyCreatorFunctionLibrary::ConvertRenderTargetToTexture2D(UTextureRenderTarget2D* RenderTarget, UTexture2D*& Texture) {
}

bool UPPSkyCreatorFunctionLibrary::CheckCloudDensityAtPosition(UObject* WorldContextObject, FVector Position, UMaterialParameterCollection* ParameterCollection, UMaterialInterface* Material, UTextureRenderTarget2D* RenderTarget) {
    return false;
}

float UPPSkyCreatorFunctionLibrary::CentimetersToKilometers(const float Value) {
    return 0.0f;
}


