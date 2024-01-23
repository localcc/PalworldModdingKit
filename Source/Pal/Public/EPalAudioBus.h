#pragma once
#include "CoreMinimal.h"
#include "EPalAudioBus.generated.h"

UENUM(BlueprintType)
enum class EPalAudioBus : uint8 {
    None,
    Master,
    BGM,
    JINGLE,
    SE,
    Ambient,
    PalVoice,
    HumanVoice,
    UI,
    MAX,
};

