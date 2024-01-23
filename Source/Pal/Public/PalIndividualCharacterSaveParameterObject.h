#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalIndividualCharacterSaveParameterObject.generated.h"

UCLASS(Blueprintable)
class UPalIndividualCharacterSaveParameterObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalIndividualCharacterSaveParameter SaveParameter;
    
    UPalIndividualCharacterSaveParameterObject();
};

