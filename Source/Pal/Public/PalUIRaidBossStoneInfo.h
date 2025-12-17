#pragma once
#include "CoreMinimal.h"
#include "PalUIRaidBossStoneInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalUIRaidBossStoneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StoneItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PossessCount;
    
    PAL_API FPalUIRaidBossStoneInfo();
};

