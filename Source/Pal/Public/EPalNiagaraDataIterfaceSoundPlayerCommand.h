#pragma once
#include "CoreMinimal.h"
#include "EPalNiagaraDataIterfaceSoundPlayerCommand.generated.h"

UENUM(BlueprintType)
enum class EPalNiagaraDataIterfaceSoundPlayerCommand : uint8 {
    None,
    PlaySoundOneShot,
};

