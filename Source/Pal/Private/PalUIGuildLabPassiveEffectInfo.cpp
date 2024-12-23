#include "PalUIGuildLabPassiveEffectInfo.h"

FPalUIGuildLabPassiveEffectInfo::FPalUIGuildLabPassiveEffectInfo() {
    this->EffectType = EPalPassiveSkillEffectType::no;
    this->EffectValueSum = 0.00f;
    this->CategoryWorkSuitability = EPalWorkSuitability::None;
    this->CategorySubType = EPalLabCategorySubType::None;
}

