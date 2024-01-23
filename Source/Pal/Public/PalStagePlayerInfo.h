#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalStagePlayerState.h"
#include "PalStagePlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalStagePlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid PlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalStagePlayerState PlayerState;
    
    PAL_API FPalStagePlayerInfo();
};

