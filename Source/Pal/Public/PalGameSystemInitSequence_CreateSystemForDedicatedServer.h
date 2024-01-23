#pragma once
#include "CoreMinimal.h"
#include "PalGameSystemInitSequenceBase.h"
#include "PalGameSystemInitSequence_CreateSystemForDedicatedServer.generated.h"

UCLASS(Blueprintable)
class UPalGameSystemInitSequence_CreateSystemForDedicatedServer : public UPalGameSystemInitSequenceBase {
    GENERATED_BODY()
public:
    UPalGameSystemInitSequence_CreateSystemForDedicatedServer();
};

