#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalGaugeInterpolationCalculator.h"
#include "PalGaugeInterpolationCalculatorUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class UPalGaugeInterpolationCalculatorUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalGaugeInterpolationCalculatorUtility();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TickGaugeInterpolation(const UObject* WorldContextObject, UPARAM(Ref) FPalGaugeInterpolationCalculator& Target, const float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetGaugeInterpolationTargetValue(UPARAM(Ref) FPalGaugeInterpolationCalculator& Target, const float TargetValue);
    
};

