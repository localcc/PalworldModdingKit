#pragma once
#include "CoreMinimal.h"
#include "PalGameSystemInitSequenceBase.h"
#include "PalGameSystemInitSequence_InitializeWorld.generated.h"

UCLASS(Blueprintable)
class UPalGameSystemInitSequence_InitializeWorld : public UPalGameSystemInitSequenceBase {
    GENERATED_BODY()
public:
    UPalGameSystemInitSequence_InitializeWorld();
};

