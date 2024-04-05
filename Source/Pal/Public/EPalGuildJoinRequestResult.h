#pragma once
#include "CoreMinimal.h"
#include "EPalGuildJoinRequestResult.generated.h"

UENUM(BlueprintType)
enum class EPalGuildJoinRequestResult : uint8 {
    Failed_NotValidGroupManager,
    Failed_Terminated,
    Failed_NotValidApplicantPlayerCharacter,
    Failed_NotValidApplicantPlayerState,
    Failed_NotValidApplicantPlayerGuild,
    Failed_NotValidRespondentPlayerCharacter,
    Failed_NotValidRespondentPlayerController,
    Failed_NotFoundApplicantPlayerGuild,
    Failed_NotExistsApplicantPlayerInTargetGuild,
    Failed_NotExistsTargetPlayerInTargetGuild,
    Failed_CannotExitGuildByAlonePlayer,
    Failed_CannotExitGuildAdminPlayer,
    Failed_NotAdminApplicantPlayer,
    Failed_CannotJoinOtherGuildApplicant,
    Failed_RequestAlreadyInProgressOtherProcess,
    Failed_TooFarPlayers,
    Failed_TooManyRequest,
    Failed_RefuseByRespondent,
    Failed_CancelByApplicant,
    Failed_OverBaseCampNum_Applicant,
    Failed_OverBaseCampNum_Respondent,
    Failed_NotEnoughSpaceStoreBackBaseCampWorkers_Applicant,
    Failed_NotEnoughSpaceStoreBackBaseCampWorkers_Respondent,
    Separator_Success_Failed,
    Succcess_MergePalBox_Applicant,
    Succcess_MergePalBox_Respondent,
    Succcess_NoMerge_Applicant,
    Succcess_NoMerge_Respondent,
};

