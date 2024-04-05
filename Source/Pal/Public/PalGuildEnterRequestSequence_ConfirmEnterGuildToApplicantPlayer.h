#pragma once
#include "CoreMinimal.h"
#include "PalGuildRequestFlowSequenceWaitForConfirmPlayer.h"
#include "PalGuildEnterRequestSequence_ConfirmEnterGuildToApplicantPlayer.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalGuildEnterRequestSequence_ConfirmEnterGuildToApplicantPlayer : public UPalGuildRequestFlowSequenceWaitForConfirmPlayer {
    GENERATED_BODY()
public:
    UPalGuildEnterRequestSequence_ConfirmEnterGuildToApplicantPlayer();

};

