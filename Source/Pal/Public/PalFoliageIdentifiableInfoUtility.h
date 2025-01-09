#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalFoliageIdentifiableInfo.h"
#include "PalFoliageIdentifiableInfoUtility.generated.h"

UCLASS(Blueprintable)
class UPalFoliageIdentifiableInfoUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalFoliageIdentifiableInfoUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const FPalFoliageIdentifiableInfo& IdentifiableInfo);
    
};

