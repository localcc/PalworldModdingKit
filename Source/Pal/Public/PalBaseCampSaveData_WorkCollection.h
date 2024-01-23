#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalBaseCampSaveData_WorkCollection.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampSaveData_WorkCollection : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    PAL_API FPalBaseCampSaveData_WorkCollection();
};

