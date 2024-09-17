#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampModuleType.generated.h"

UENUM(BlueprintType)
enum class EPalBaseCampModuleType : uint8 {
    None,
    Energy,
    Medical,
    TransportItemDirector,
    ResourceCollector,
    ItemStorages,
    FacilityReservation,
    ObjectMaintenance,
    PassiveEffect,
    ItemStackInfo,
};

