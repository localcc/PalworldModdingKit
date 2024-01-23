#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPalWorkSuitability.h"
#include "PalIndividualCharacterParameterUtility.generated.h"

class UPalIndividualCharacterParameter;

UCLASS(Blueprintable)
class UPalIndividualCharacterParameterUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalIndividualCharacterParameterUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CraftSpeedWorkSuitability(const EPalWorkSuitability WorkSuitability, UPalIndividualCharacterParameter* Parameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CraftSpeed(UPalIndividualCharacterParameter* Parameter);
    
};

