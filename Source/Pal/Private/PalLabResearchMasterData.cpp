#include "PalLabResearchMasterData.h"

FPalLabResearchMasterData::FPalLabResearchMasterData() {
    this->LabCategoryWorkSuitability = EPalWorkSuitability::None;
    this->LabCategorySubType = EPalLabCategorySubType::None;
    this->RequiredWorkAmount = 0;
    this->Material1_Count = 0;
    this->Material2_Count = 0;
    this->Material3_Count = 0;
    this->Material4_Count = 0;
    this->EffectType = EPalPassiveSkillEffectType::no;
    this->EffectValue = 0.00f;
    this->EffectOptionWorkSuitability = EPalWorkSuitability::None;
    this->EffectOptionItemType = EPalPassiveSkillEffectTargetItemType::None;
    this->bIsEssential = false;
}

