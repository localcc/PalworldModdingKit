#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PPCelestialPositionData.h"
#include "PPSkyCreatorFunctionLibrary.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UObject;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class PPSKYCREATORPLUGIN_API UPPSkyCreatorFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPPSkyCreatorFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float KilometersToCentimeters(const float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsApplicationForegroundNow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPPCelestialPositionData GetRealSunPosition(const float Latitude, const float Longitude, const float TimeZone, const bool bIsDaylightSavingTime, const FDateTime DateTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPPCelestialPositionData GetRealMoonPosition(const float Latitude, const float Longitude, const float TimeZone, const bool bIsDaylightSavingTime, const FDateTime DateTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetCloudDensityAtPosition(UObject* WorldContextObject, FVector Position, UMaterialParameterCollection* ParameterCollection, UMaterialInterface* Material, UTextureRenderTarget2D* RenderTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool FindLightningPosition(UObject* WorldContextObject, bool bSampleCloudDensity, int32 Samples, UMaterialParameterCollection* ParameterCollection, UMaterialInterface* Material, UTextureRenderTarget2D* RenderTarget, FVector Position, float InnerRadius, float OuterRadius, float minHeight, float maxHeight, float DensityThreshold, FVector& OutPosition);
    
private:
    UFUNCTION()
    static double ElevationRefraction(double F);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* DynamicConvertRenderTargetToTexture2D(UTextureRenderTarget2D* RenderTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void CreateAndAssignMID(UObject* WorldContextObject, UMaterialInterface* InMaterial, UMaterialInstanceDynamic*& InMID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertRenderTargetToTexture2D(UTextureRenderTarget2D* RenderTarget, UTexture2D*& Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CheckCloudDensityAtPosition(UObject* WorldContextObject, FVector Position, UMaterialParameterCollection* ParameterCollection, UMaterialInterface* Material, UTextureRenderTarget2D* RenderTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CentimetersToKilometers(const float Value);
    
};

