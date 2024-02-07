#include "PalTutorialTriggerBase.h"

UPalTutorialTriggerBase::UPalTutorialTriggerBase() {
    this->Checked = false;
    this->CanTriggerMultiple = false;
}

EPalTutorialTriggerType UPalTutorialTriggerBase::GetType() const {
    return EPalTutorialTriggerType::None;
}


