#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalInstanceID.h"
#include "PalBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UPalBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalBlueprintLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_PalInstanceIDPalInstanceID(FPalInstanceID A, FPalInstanceID B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_PalInstanceIDPalInstanceID(FPalInstanceID A, FPalInstanceID B);
    
};

