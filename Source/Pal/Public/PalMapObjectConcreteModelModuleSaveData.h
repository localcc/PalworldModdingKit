#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalMapObjectConcreteModelModuleSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectConcreteModelModuleSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    PAL_API FPalMapObjectConcreteModelModuleSaveData();
};

