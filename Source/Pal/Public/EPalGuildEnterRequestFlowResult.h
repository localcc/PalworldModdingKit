#pragma once
#include "CoreMinimal.h"
#include "EPalGuildEnterRequestFlowResult.generated.h"

UENUM(BlueprintType)
enum class EPalGuildEnterRequestFlowResult : uint8 {
    Undefined,
    ConfirmEnterGuildToApplicant_No,
    ConfirmEnterGuildToApplicant_LoseBaseCamp_No,
    OfferEnterGuildToRespondent_No,
    Success,
};

