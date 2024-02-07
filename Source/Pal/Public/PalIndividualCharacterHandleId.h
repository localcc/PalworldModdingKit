#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalInstanceID.h"
#include "PalIndividualCharacterHandleId.generated.h"

USTRUCT(BlueprintType)
struct FPalIndividualCharacterHandleId : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalInstanceID HandleId;
    
    PAL_API FPalIndividualCharacterHandleId();
};

