#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalMapObjectPaintSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectPaintSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    PAL_API FPalMapObjectPaintSaveData();
};

