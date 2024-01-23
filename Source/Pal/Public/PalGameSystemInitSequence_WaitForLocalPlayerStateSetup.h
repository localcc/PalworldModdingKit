#pragma once
#include "CoreMinimal.h"
#include "PalGameSystemInitSequenceBase.h"
#include "PalGameSystemInitSequence_WaitForLocalPlayerStateSetup.generated.h"

UCLASS(Blueprintable)
class UPalGameSystemInitSequence_WaitForLocalPlayerStateSetup : public UPalGameSystemInitSequenceBase {
    GENERATED_BODY()
public:
    UPalGameSystemInitSequence_WaitForLocalPlayerStateSetup();
};

