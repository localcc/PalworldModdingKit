#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalGuildExpeditionSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalGuildExpeditionSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    PAL_API FPalGuildExpeditionSaveData();
};

