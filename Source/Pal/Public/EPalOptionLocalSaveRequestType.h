#pragma once
#include "CoreMinimal.h"
#include "EPalOptionLocalSaveRequestType.generated.h"

UENUM(BlueprintType)
enum class EPalOptionLocalSaveRequestType : uint8 {
    None,
    LocalSaveDataOnly,
    AllLocalSave,
};

