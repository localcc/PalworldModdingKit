#include "PalTutorialTriggerBase.h"

EPalTutorialTriggerType UPalTutorialTriggerBase::GetType() const {
    return EPalTutorialTriggerType::None;
}

UPalTutorialTriggerBase::UPalTutorialTriggerBase() {
    this->Checked = false;
    this->CanTriggerMultiple = false;
}

