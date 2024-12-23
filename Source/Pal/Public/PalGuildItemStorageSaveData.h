#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalGuildItemStorageSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalGuildItemStorageSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    PAL_API FPalGuildItemStorageSaveData();
};

