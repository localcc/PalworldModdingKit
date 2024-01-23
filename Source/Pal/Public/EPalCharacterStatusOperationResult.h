#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterStatusOperationResult.generated.h"

UENUM(BlueprintType)
enum class EPalCharacterStatusOperationResult : uint8 {
    Success,
    FailedNotValidIndividualHandle,
    FailedNotValidIndividualParameter,
    FailedNotValidPlayerState,
    FailedNotValidPlayerRecordData,
    FailedNotValidPlayerInventoryData,
    FailedNotValidOtomoHolder,
    FailedGetPlayerRankMasterData,
    FailedGetCharacterUpgradeMasterData,
    FailedNotFoundOtomo,
    FailedAlreadyMaxRank,
    FailedAlreadyResetStatus,
    FailedCalcRequiredRelicNum,
    FailedLackRelicNum,
    FailedCalcRequiredUpgradeItemNum,
    FailedLackUpgradeItemNum,
    FailedLackMoneyNum,
    FailedItemOperation,
};

