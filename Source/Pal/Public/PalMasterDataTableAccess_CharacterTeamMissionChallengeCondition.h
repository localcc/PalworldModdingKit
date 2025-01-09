#pragma once
#include "CoreMinimal.h"
#include "PalCharacterTeamMissionChallengeConditionMasterData.h"
#include "PalMasterDataTableAccessBase.h"
#include "PalMasterDataTableAccess_CharacterTeamMissionChallengeCondition.generated.h"

UCLASS(Blueprintable)
class UPalMasterDataTableAccess_CharacterTeamMissionChallengeCondition : public UPalMasterDataTableAccessBase {
    GENERATED_BODY()
public:
    UPalMasterDataTableAccess_CharacterTeamMissionChallengeCondition();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalCharacterTeamMissionChallengeConditionMasterData BP_FindRow(FName RowName, bool& bResult) const;
    
};

