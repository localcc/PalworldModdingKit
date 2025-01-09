#include "ActionDynamicParameter.h"

FActionDynamicParameter::FActionDynamicParameter() {
    this->ActionTarget = NULL;
    this->GeneralPurposeIndex = 0;
    this->bIsAdjustTransform = false;
    this->NetRandSeed = 0;
    this->IsReflectedForClient = false;
}

