#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalBaseCampSaveData_Module_PassiveEffect.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampSaveData_Module_PassiveEffect : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    PAL_API FPalBaseCampSaveData_Module_PassiveEffect();
};

