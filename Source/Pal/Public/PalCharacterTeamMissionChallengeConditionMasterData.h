#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalBossBattleDifficulty.h"
#include "EPalBossType.h"
#include "PalCharacterTeamMissionChallengeConditionMasterData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalCharacterTeamMissionChallengeConditionMasterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBossType DefeatBossType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBossBattleDifficulty DefeatBossDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefeatHardBossNum;
    
    FPalCharacterTeamMissionChallengeConditionMasterData();
};

