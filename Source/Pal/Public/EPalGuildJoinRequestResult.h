#pragma once
#include "CoreMinimal.h"
#include "EPalGuildJoinRequestResult.generated.h"

UENUM(BlueprintType)
enum class EPalGuildJoinRequestResult : uint8 {
    Failed_RefuseByRespondent,
    Failed_CancelByApplicant,
    Failed_OverBaseCampNum_Applicant,
    Failed_OverBaseCampNum_Respondent,
    Continuation_CheckLoseAuthority,
    Succcess_MergePalBox_Applicant,
    Succcess_MergePalBox_Respondent,
    Succcess_NoMerge_Applicant,
    Succcess_NoMerge_Respondent,
};

