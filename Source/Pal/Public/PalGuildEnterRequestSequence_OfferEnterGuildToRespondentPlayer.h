#pragma once
#include "CoreMinimal.h"
#include "PalGuildRequestFlowSequenceWaitForConfirmPlayer.h"
#include "PalGuildEnterRequestSequence_OfferEnterGuildToRespondentPlayer.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalGuildEnterRequestSequence_OfferEnterGuildToRespondentPlayer : public UPalGuildRequestFlowSequenceWaitForConfirmPlayer {
    GENERATED_BODY()
public:
    UPalGuildEnterRequestSequence_OfferEnterGuildToRespondentPlayer();

};

