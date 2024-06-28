#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBaseCampWorkDirectorBattleDefenseModelStashInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampWorkDirectorBattleDefenseModelStashInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime StashAtTime;
    
    PAL_API FPalBaseCampWorkDirectorBattleDefenseModelStashInfo();
};

