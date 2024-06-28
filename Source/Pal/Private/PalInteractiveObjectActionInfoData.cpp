#include "PalInteractiveObjectActionInfoData.h"

FPalInteractiveObjectActionInfoData::FPalInteractiveObjectActionInfoData() {
    this->IndicatorType = EPalInteractiveObjectIndicatorType::None;
    this->buttonType = EPalInteractiveObjectButtonType::OnePush;
    this->longPushTime = 0.00f;
    this->ActionType = EPalActionType::None;
    this->bValid = false;
    this->bLockRiding = false;
    this->isInputComsume = false;
    this->bCanToggle = false;
}

