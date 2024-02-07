#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UDLSSMode.h"
#include "UDLSSSupport.h"
#include "DLSSLibrary.generated.h"

class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UDLSSLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDLSSLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetDLSSSharpness(float Sharpness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDLSSMode(UObject* WorldContextObject, UDLSSMode DLSSMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDLSSSupport QueryDLSSSupport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDLSSSupport QueryDLSSRRSupport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLSSSupported();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLSSRRSupported();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLSSRREnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLSSModeSupported(UDLSSMode DLSSMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLSSEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLAAEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UDLSSMode> GetSupportedDLSSModes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDLSSSharpness();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDLSSRRMinimumDriverVersion(int32& MinDriverVersionMajor, int32& MinDriverVersionMinor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDLSSModeInformation(UDLSSMode DLSSMode, FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDLSSMode GetDLSSMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDLSSMinimumDriverVersion(int32& MinDriverVersionMajor, int32& MinDriverVersionMinor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDLSSMode GetDefaultDLSSMode();
    
    UFUNCTION(BlueprintCallable)
    static void EnableDLSSRR(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void EnableDLSS(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void EnableDLAA(bool bEnabled);
    
};

