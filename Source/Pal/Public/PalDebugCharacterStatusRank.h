#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterStatusOperationName.h"
#include "PalDebugCharacterStatusRank.generated.h"

USTRUCT(BlueprintType)
struct FPalDebugCharacterStatusRank {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalCharacterStatusOperationName OperationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    PAL_API FPalDebugCharacterStatusRank();
};

