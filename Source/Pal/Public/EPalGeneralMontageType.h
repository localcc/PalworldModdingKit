#pragma once
#include "CoreMinimal.h"
#include "EPalGeneralMontageType.generated.h"

UENUM(BlueprintType)
enum class EPalGeneralMontageType : uint8 {
    None,
    GeneralAttackReady_Near,
    GeneralAttackReadyLoop_Near,
    GeneralAttackProcess_Near,
    GeneralAttackProcessLoop_Near,
    GeneralAttackAfter_Near,
    GeneralAttackReady_Far,
    GeneralAttackReadyLoop_Far,
    GeneralAttackProcess_Far,
    GeneralAttackProcessLoop_Far,
    GeneralAttackAfter_Far,
    Rolling,
    Step_Forward,
    Step_Back,
    Step_Right,
    Step_Left,
    JumpPreliminary,
    JumpStart,
    SleepStart,
    SleepLoop,
    SleepEnd,
    BeLiftupStart,
    BeLiftupLoop,
    DamageAdditive,
    HumanPetting_Standby_S,
    HumanPetting_Standby_L,
    HumanPetting_DoStroke_S,
    HumanPetting_DoStroke_SM,
    HumanPetting_DoStroke_M,
    HumanPetting_DoStroke_L,
    Climbing_ClimbUpAtTop,
    Grappling,
    EatUpper,
    Defense_Wait,
    Ragdoll,
};

