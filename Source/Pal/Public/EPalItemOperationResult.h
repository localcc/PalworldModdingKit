#pragma once
#include "CoreMinimal.h"
#include "EPalItemOperationResult.generated.h"

UENUM(BlueprintType)
enum class EPalItemOperationResult : uint8 {
    Success,
    SuccessNoOperation,
    FailedTerminatedManager,
    FailedNotExistsInventoryData,
    FailedContainerOverflowSlotNum,
    FailedContainerItemInfoOverSlotNum,
    FailedContainerOverflowItemsInSlot,
    FailedContainerNotFoundContainer,
    FailedContainerNotFoundSlot,
    FailedContainerIsLocalOnly,
    FailedContainerNotEqualsId,
    FailedCreateDynamicItemData,
    FailedNoDynamicItemIds,
    FailedNotFoundContainer,
    FailedNotFoundSlot,
    FailedNotFoundStaticItemData,
    FailedNotEnoughSlotSpace,
    FailedSameSlotUseProduceAndConsume,
    FailedNotEnoughConsumes,
    FailedInValidItemInSlot,
    FailedNotEnoughNumInSlot,
    FailedNotEqualRequiredItemInSlot,
    FailedGetLocalSlotInServer,
    FailedEmptyConsumeItemInfo,
    FailedSlotCountIsZero,
    FailedCannotAggregateSlotItem,
    FailedInvalidPermission,
    FailedNotAllowedByFilter,
    FailedNotControllable,
    FailedRestrictedOperation,
    FailedRecievedItemNotEqual,
    FailedTransactionLockedOperation,
    FailedNotFoundRowNameOrHash,
    FailedUnknown,
    FailedUnknownLogOutput,
};

