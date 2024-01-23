#pragma once
#include "CoreMinimal.h"
#include "EPalTutorialTriggerConditionType.generated.h"

UENUM(BlueprintType)
enum class EPalTutorialTriggerConditionType : uint8 {
    None,
    GetItem,
    MeetBuildRequirement,
    NewPal,
    SamePal,
    PalCount,
    HighLevel,
    RarePal,
    CaptureFail,
    OverWeight,
    Night,
    PalDeath,
    BuildAppointment,
    SummonCampPal,
    LearnSkill,
    AttackNoWeapon,
    ObtainNote,
    LevelUp,
    Hunger,
    PalHunger,
    SAN,
    Sick,
    SkipWork,
};

