#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalMapObjectEffectSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectEffectSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    PAL_API FPalMapObjectEffectSaveData();
};

