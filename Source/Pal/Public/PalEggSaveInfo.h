#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalEggSaveInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalEggSaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid WorkId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalIndividualCharacterSaveParameter HatchedCharacterSaveParameter;
    
    PAL_API FPalEggSaveInfo();
};

