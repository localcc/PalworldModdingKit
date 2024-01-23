#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalWorkAssignSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkAssignSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    PAL_API FPalWorkAssignSaveData();
};

