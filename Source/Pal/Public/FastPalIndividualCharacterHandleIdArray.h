#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalIndividualCharacterHandleId.h"
#include "FastPalIndividualCharacterHandleIdArray.generated.h"

USTRUCT(BlueprintType)
struct FFastPalIndividualCharacterHandleIdArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalIndividualCharacterHandleId> Items;
    
    PAL_API FFastPalIndividualCharacterHandleIdArray();
};

