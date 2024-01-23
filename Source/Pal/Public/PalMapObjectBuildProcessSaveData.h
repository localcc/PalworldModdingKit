#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalMapObjectBuildProcessSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectBuildProcessSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    PAL_API FPalMapObjectBuildProcessSaveData();
};

