#include "PalMapObjectAssignData.h"

FPalMapObjectAssignData::FPalMapObjectAssignData() {
    this->GenusCategory = EPalGenusCategoryType::None;
    this->ElementType = EPalElementType::None;
    this->WorkSuitability = EPalWorkSuitability::None;
    this->WorkSuitabilityRank = 0;
    this->bPlayerWorkable = false;
    this->WorkType = EPalWorkType::None;
    this->WorkActionType = EPalActionType::None;
    this->WorkerMaxNum = 0;
    this->AffectSanityValue = 0.00f;
}

