#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalGuildLabSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalGuildLabSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    PAL_API FPalGuildLabSaveData();
};

