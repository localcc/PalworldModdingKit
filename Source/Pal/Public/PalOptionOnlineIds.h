#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalOptionOnlineIds.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionOnlineIds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CachePlayerName;
    
    PAL_API FPalOptionOnlineIds();
};

