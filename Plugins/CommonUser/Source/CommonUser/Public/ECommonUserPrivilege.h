#pragma once
#include "CoreMinimal.h"
#include "ECommonUserPrivilege.generated.h"

UENUM(BlueprintType)
enum class ECommonUserPrivilege : uint8 {
    CanPlay,
    CanPlayOnline,
    CanCommunicateViaTextOnline,
    CanCommunicateViaVoiceOnline,
    CanUseUserGeneratedContent,
    CanUseCrossPlay,
    Invalid_Count,
};

