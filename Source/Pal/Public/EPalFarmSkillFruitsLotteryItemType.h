#pragma once
#include "CoreMinimal.h"
#include "EPalFarmSkillFruitsLotteryItemType.generated.h"

UENUM(BlueprintType)
enum class EPalFarmSkillFruitsLotteryItemType : uint8 {
    None,
    SkillFruits_Same,
    SkillFruits_Same_ElementType_Rarity1,
    SkillFruits_Same_ElementType_Rarity2,
    SkillFruits_Same_ElementType_Rarity3,
    OtherItem,
    Empty,
};

