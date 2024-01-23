#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalIndividualCharacterSaveParameterUtility.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPalIndividualCharacterSaveParameterUtility : public UObject {
    GENERATED_BODY()
public:
    UPalIndividualCharacterSaveParameterUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
};

