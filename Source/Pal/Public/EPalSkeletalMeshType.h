#pragma once
#include "CoreMinimal.h"
#include "EPalSkeletalMeshType.generated.h"

UENUM(BlueprintType)
enum class EPalSkeletalMeshType : uint8 {
    Normal,
    Head,
    Hair,
    Body,
    HairAttachAccessory,
};

