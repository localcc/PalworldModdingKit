#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalArenaEntryPair.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaEntryPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PlayerUId1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PlayerUId2;
    
    PAL_API FPalArenaEntryPair();
};

