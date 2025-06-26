#pragma once
#include "CoreMinimal.h"
#include "EPalArenaBattleResult.h"
#include "PalArenaRankPointChangeResult.h"
#include "PalArenaBattleResultInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaBattleResultInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalArenaBattleResult BattleResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTimeup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalArenaRankPointChangeResult> RankPointChangeResults;
    
    PAL_API FPalArenaBattleResultInfo();
};

