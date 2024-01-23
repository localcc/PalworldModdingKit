#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampWorkerEventBase.h"
#include "PalBaseCampWorkerEvent_DestroyBuilding.generated.h"

UCLASS(Blueprintable)
class UPalBaseCampWorkerEvent_DestroyBuilding : public UPalBaseCampWorkerEventBase {
    GENERATED_BODY()
public:
    UPalBaseCampWorkerEvent_DestroyBuilding();
};

