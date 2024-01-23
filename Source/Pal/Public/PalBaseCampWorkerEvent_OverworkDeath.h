#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampWorkerEventBase.h"
#include "PalBaseCampWorkerEvent_OverworkDeath.generated.h"

UCLASS(Blueprintable)
class UPalBaseCampWorkerEvent_OverworkDeath : public UPalBaseCampWorkerEventBase {
    GENERATED_BODY()
public:
    UPalBaseCampWorkerEvent_OverworkDeath();
};

