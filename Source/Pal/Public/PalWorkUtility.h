#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalWorkUtility.generated.h"

class UPalWorkBase;

UCLASS(Blueprintable)
class UPalWorkUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalWorkUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BP_TryGetWorkLocation(const UPalWorkBase* Target, FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector BP_GetWorkLocation(const UPalWorkBase* Target);
    
};

