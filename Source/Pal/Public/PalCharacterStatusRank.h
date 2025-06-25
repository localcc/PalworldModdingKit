#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterStatusOperationName.h"
#include "PalCharacterStatusRank.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterStatusRank {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalCharacterStatusOperationName OperationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    PAL_API FPalCharacterStatusRank();
};

