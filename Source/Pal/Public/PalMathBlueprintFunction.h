#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalMathBlueprintFunction.generated.h"

UCLASS(Blueprintable)
class UPalMathBlueprintFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalMathBlueprintFunction();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ClampVectorElement(const FVector& InValue, const FVector& Min, const FVector& Max);
    
};

