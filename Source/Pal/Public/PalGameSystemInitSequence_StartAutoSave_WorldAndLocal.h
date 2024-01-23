#pragma once
#include "CoreMinimal.h"
#include "PalGameSystemInitSequenceBase.h"
#include "PalGameSystemInitSequence_StartAutoSave_WorldAndLocal.generated.h"

UCLASS(Blueprintable)
class UPalGameSystemInitSequence_StartAutoSave_WorldAndLocal : public UPalGameSystemInitSequenceBase {
    GENERATED_BODY()
public:
    UPalGameSystemInitSequence_StartAutoSave_WorldAndLocal();
};

