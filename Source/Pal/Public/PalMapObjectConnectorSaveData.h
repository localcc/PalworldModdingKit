#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalMapObjectConnectorSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectConnectorSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    PAL_API FPalMapObjectConnectorSaveData();
};

