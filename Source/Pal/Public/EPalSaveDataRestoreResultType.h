#pragma once
#include "CoreMinimal.h"
#include "EPalSaveDataRestoreResultType.generated.h"

UENUM(BlueprintType)
enum class EPalSaveDataRestoreResultType : uint8 {
    Success_AllSave,
    Succcess_NotExistLocalSaveBackup,
    Failed_NotExistWorldSaveBackup,
    Failed_NotExistAllSave,
    Failed_Unknown,
};

