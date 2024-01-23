#pragma once
#include "CoreMinimal.h"
#include "EHumanBone.generated.h"

UENUM(BlueprintType)
enum class EHumanBone : uint8 {
    Pelvis,
    Spine1,
    Spine2,
    Spine3,
    Neck,
    Head,
    LeftThigh,
    LeftCalf,
    LeftFoot,
    RightThigh,
    RightCalf,
    RightFoot,
    LeftClavicle,
    LeftUpperArm,
    LeftLowerArm,
    LeftHand,
    RightClavicle,
    RightUpperArm,
    RightLowerArm,
    RightHand,
    EnumCount,
};

