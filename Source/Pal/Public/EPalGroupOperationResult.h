#pragma once
#include "CoreMinimal.h"
#include "EPalGroupOperationResult.generated.h"

UENUM(BlueprintType)
enum class EPalGroupOperationResult : uint8 {
    Success,
    FailedNotFoundNetworkTransmitter,
    FailedCreateNewGroup,
    FailedNotFoundGroup,
    FailedNotFoundGuild,
    FailedNotFoundOrganization,
    FailedNotFoundCharacterHandle,
    FailedNotFoundCharacterIndividualID,
    FailedNotFoundCharacterParameter,
    FailedNotFoundPlayerCharacterHandle,
    FailedAlreadyBelongToGroup,
    FailedNotImplementExitNoPlayerCharacter,
    FailedAlreadyExist,
    FailedPlayerAlreadyBelongingToGuild,
    FailedBaseCampAlreadyBelongingToGuild,
    FailedPlayerNotBelongingToGuild,
    FailedGuildMaxPlayerNum,
    FailedBelongingToIndependentGuildOtherPlayer,
    FailedPermissionDeniedByNotAdmin,
    FailedAdminCannotExitGuild,
    FailedDisposeStaticOrganization,
    FailedOverBaseCamp,
    FailedBaseCampNotBelongingToGuild,
    FailedNotFoundBaseCamp,
    FailedBaseCampOperation,
    FailedNotImplement,
};

