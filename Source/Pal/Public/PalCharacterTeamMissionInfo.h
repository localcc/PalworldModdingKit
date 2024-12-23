#pragma once
#include "CoreMinimal.h"
#include "PalCharacterTeamMissionMasterData.h"
#include "PalCharacterTeamMissionInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterTeamMissionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MissionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalCharacterTeamMissionMasterData MasterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RewardStaticItemIds;
    
    PAL_API FPalCharacterTeamMissionInfo();
};

