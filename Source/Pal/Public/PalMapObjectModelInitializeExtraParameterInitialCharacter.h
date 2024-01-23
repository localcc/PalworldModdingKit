#pragma once
#include "CoreMinimal.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterInitialCharacter.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectModelInitializeExtraParameterInitialCharacter : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalIndividualCharacterSaveParameter CharacterSaveParameter;
    
    UPalMapObjectModelInitializeExtraParameterInitialCharacter();
};

