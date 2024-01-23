#pragma once
#include "CoreMinimal.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalPlayerInitializeParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerInitializeParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalIndividualCharacterSaveParameter InitParam;
    
    PAL_API FPalPlayerInitializeParameter();
};

