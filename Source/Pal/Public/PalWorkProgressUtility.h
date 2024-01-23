#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalWorkProgressUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class UPalWorkProgressUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalWorkProgressUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float WorkAmountToManMonth(const UObject* WorldContextObject, const float WorkAmount);
    
};

