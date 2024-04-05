#pragma once
#include "CoreMinimal.h"
#include "EPalGuildRequestResult.generated.h"

UENUM(BlueprintType)
enum class EPalGuildRequestResult : uint8 {
    FailedNotValidGroupManager,
    FailedNotValidApplicantPlayerCharacter,
    FailedNotValidRespondentPlayerCharacter,
    FailedNotValidRespondentPlayerController,
    FailedCannotJoinOtherGuildApplicant,
    FailedRequestAlreadyInProgressOtherProcess,
    Failed_RefuseByRespondent,
    Failed_CancelByApplicant,
    Failed_OverBaseCampNum_Applicant,
    Failed_OverBaseCampNum_Respondent,
    Failed_NotEnoughSpaceStoreBackBaseCampWorkers_Applicant,
    Failed_NotEnoughSpaceStoreBackBaseCampWorkers_Respondent,
    Succcess_MergePalBox_Applicant,
    Succcess_MergePalBox_Respondent,
    Succcess_NoMerge_Applicant,
    Succcess_NoMerge_Respondent,
    Success,
};

