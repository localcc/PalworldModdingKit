#include "SkyCreatorFunctionLibrary.h"

float USkyCreatorFunctionLibrary::KilometersToCentimeters(const float Value) {
    return 0.0f;
}

bool USkyCreatorFunctionLibrary::IsApplicationForegroundNow() {
    return false;
}

FCelestialPositionData USkyCreatorFunctionLibrary::GetRealSunPosition(const float Latitude, const float Longitude, const float TimeZone, const bool bIsDaylightSavingTime, const FDateTime DateTime) {
    return FCelestialPositionData{};
}

FCelestialPositionData USkyCreatorFunctionLibrary::GetRealMoonPosition(const float Latitude, const float Longitude, const float TimeZone, const bool bIsDaylightSavingTime, const FDateTime DateTime) {
    return FCelestialPositionData{};
}

float USkyCreatorFunctionLibrary::GetCloudDensityAtPosition(UObject* WorldContextObject, FVector Position, UMaterialParameterCollection* ParameterCollection, UMaterialInterface* Material, UTextureRenderTarget2D* RenderTarget) {
    return 0.0f;
}

bool USkyCreatorFunctionLibrary::FindLightningPosition(UObject* WorldContextObject, bool bSampleCloudDensity, int32 Samples, UMaterialParameterCollection* ParameterCollection, UMaterialInterface* Material, UTextureRenderTarget2D* RenderTarget, FVector Position, float InnerRadius, float OuterRadius, float MinHeight, float MaxHeight, float DensityThreshold, FVector& OutPosition) {
    return false;
}

double USkyCreatorFunctionLibrary::ElevationRefraction(double F) {
    return 0.0;
}

UTexture2D* USkyCreatorFunctionLibrary::DynamicConvertRenderTargetToTexture2D(UTextureRenderTarget2D* RenderTarget) {
    return NULL;
}

void USkyCreatorFunctionLibrary::CreateAndAssignMID(UObject* WorldContextObject, UMaterialInterface* InMaterial, UMaterialInstanceDynamic*& InMID) {
}

void USkyCreatorFunctionLibrary::ConvertRenderTargetToTexture2D(UTextureRenderTarget2D* RenderTarget, UTexture2D*& Texture) {
}

bool USkyCreatorFunctionLibrary::CheckCloudDensityAtPosition(UObject* WorldContextObject, FVector Position, UMaterialParameterCollection* ParameterCollection, UMaterialInterface* Material, UTextureRenderTarget2D* RenderTarget) {
    return false;
}

float USkyCreatorFunctionLibrary::CentimetersToKilometers(const float Value) {
    return 0.0f;
}

USkyCreatorFunctionLibrary::USkyCreatorFunctionLibrary() {
}

