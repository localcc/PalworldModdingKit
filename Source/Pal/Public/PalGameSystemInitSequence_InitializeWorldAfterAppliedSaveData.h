#pragma once
#include "CoreMinimal.h"
#include "PalGameSystemInitSequenceBase.h"
#include "PalGameSystemInitSequence_InitializeWorldAfterAppliedSaveData.generated.h"

UCLASS(Blueprintable)
class UPalGameSystemInitSequence_InitializeWorldAfterAppliedSaveData : public UPalGameSystemInitSequenceBase {
    GENERATED_BODY()
public:
    UPalGameSystemInitSequence_InitializeWorldAfterAppliedSaveData();
};

