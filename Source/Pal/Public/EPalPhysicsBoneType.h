#pragma once
#include "CoreMinimal.h"
#include "EPalPhysicsBoneType.generated.h"

UENUM(BlueprintType)
enum class EPalPhysicsBoneType : uint8 {
    None,
    AttachRope,
    AttachRopeTrapLeg,
};

