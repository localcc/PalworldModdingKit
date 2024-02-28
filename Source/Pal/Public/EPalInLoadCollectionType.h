#pragma once
#include "CoreMinimal.h"
#include "EPalInLoadCollectionType.generated.h"

UENUM()
enum class EPalInLoadCollectionType : int32 {
    None,
    InstanceID,
    ContainerID,
    DynamicItemID,
    MAX,
};

