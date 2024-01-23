#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPalLandingType.h"
#include "PalLandingTypeUtility.generated.h"

UCLASS(Blueprintable)
class UPalLandingTypeUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalLandingTypeUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRollStep(EPalLandingType T);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsJumpLanding(EPalLandingType T);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFootStep(EPalLandingType T);
    
};

