#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalIndividualCharacterSaveParameterSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalIndividualCharacterSaveParameterSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    PAL_API FPalIndividualCharacterSaveParameterSaveData();
};

