#pragma once
#include "CoreMinimal.h"
#include "PalGameSystemInitSequenceBase.h"
#include "PalGameSystemInitSequence_StartAutoSave_WorldOnly.generated.h"

UCLASS(Blueprintable)
class UPalGameSystemInitSequence_StartAutoSave_WorldOnly : public UPalGameSystemInitSequenceBase {
    GENERATED_BODY()
public:
    UPalGameSystemInitSequence_StartAutoSave_WorldOnly();
};

