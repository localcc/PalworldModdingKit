#include "PalWorkAssignDefineData.h"

FPalWorkAssignDefineData::FPalWorkAssignDefineData() {
    this->WorkSuitability = EPalWorkSuitability::None;
    this->WorkSuitabilityRank = 0;
    this->bPlayerWorkable = false;
    this->WorkType = EPalWorkType::None;
    this->ActionType = EPalActionType::None;
    this->WorkerMaxNum = 0;
    this->AffectSanityValue = 0.00f;
}

