#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalInstanceID.h"
#include "CharacterParameterRepInfo.generated.h"

class UPalIndividualCharacterParameter;

USTRUCT(BlueprintType)
struct FCharacterParameterRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid RequestGUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInstanceID ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterParameter* Parameter;
    
    PAL_API FCharacterParameterRepInfo();
};

