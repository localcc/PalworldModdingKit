#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalBaseCampSaveData_WorkerDirector.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampSaveData_WorkerDirector : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    PAL_API FPalBaseCampSaveData_WorkerDirector();
};

