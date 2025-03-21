#pragma once
#include "CoreMinimal.h"
#include "EPalGlobalStorageImportResult.generated.h"

UENUM(BlueprintType)
enum class EPalGlobalStorageImportResult : uint8 {
    Success,
    Failed_NotFoundAnyManager,
    Failed_InvalidSaveParameter,
    Failed_NotFoundPalStorageData,
    Failed_NotFoundImportCharacterHandle,
    Failed_InvalidSlotIndex,
    Failed_NotFoundSlot,
    Failed_FullPalStorage,
    Failed_OwnedOtherPlayer,
    Failed_NotEmptyTargetSlot,
    Failed_InvalidOriginalCharacterParameter,
    Failed_NowFoundOptionSubsystem,
    Failed_NowAllowImport,
    Failed_NotAllowOverwrite,
};

