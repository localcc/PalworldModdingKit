#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalBaseCampSaveData_Module.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampSaveData_Module : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    PAL_API FPalBaseCampSaveData_Module();
};

