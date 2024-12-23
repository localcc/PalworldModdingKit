#pragma once
#include "CoreMinimal.h"
#include "PalGuildCharacterTeamMissionInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalGuildCharacterTeamMissionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName MissionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableChallenge;
    
    PAL_API FPalGuildCharacterTeamMissionInfo();
};

