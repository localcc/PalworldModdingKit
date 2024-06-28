#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterStatusOperationName.h"
#include "PalStatusAndRank.generated.h"

USTRUCT(BlueprintType)
struct FPalStatusAndRank {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalCharacterStatusOperationName StatusName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    PAL_API FPalStatusAndRank();
};

