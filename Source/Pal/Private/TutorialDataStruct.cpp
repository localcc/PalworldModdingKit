#include "TutorialDataStruct.h"

FTutorialDataStruct::FTutorialDataStruct() {
    this->Type = EPalTutorialTriggerType::None;
    this->MultiTrigger = false;
    this->ConditionType = EPalTutorialTriggerConditionType::None;
    this->ConditionValue = 0.00f;
}

