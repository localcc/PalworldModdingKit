#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameDateTime.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalCharacterStoredParameterInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterStoredParameterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalIndividualCharacterSaveParameter SaveParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameDateTime StoredAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid LostPlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInstanceID InstanceId;
    
    PAL_API FPalCharacterStoredParameterInfo();
};

