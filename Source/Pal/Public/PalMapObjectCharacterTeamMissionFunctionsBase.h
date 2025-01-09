#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalMapObjectCharacterTeamMissionFunctionsBase.generated.h"

class UPalIndividualCharacterParameter;

UCLASS(Abstract, Blueprintable)
class PAL_API UPalMapObjectCharacterTeamMissionFunctionsBase : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalMapObjectCharacterTeamMissionFunctionsBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float CalculateRewardRateByTeamStrength(const int32 TeamStrengthSum, const int32 RecommendStrength) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float CalculateRequiredSecondsRateByTeamStrength(const int32 TeamStrengthSum, const int32 RecommendStrength) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 CalculateCharacterStrength(const UPalIndividualCharacterParameter* IndividualCharacterParameter) const;
    
};

