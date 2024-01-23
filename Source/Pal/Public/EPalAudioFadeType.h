#pragma once
#include "CoreMinimal.h"
#include "EPalAudioFadeType.generated.h"

UENUM(BlueprintType)
enum class EPalAudioFadeType : uint8 {
    None,
    FadeIn,
    FadeOut,
};

