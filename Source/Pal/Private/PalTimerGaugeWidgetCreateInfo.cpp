#include "PalTimerGaugeWidgetCreateInfo.h"

FPalTimerGaugeWidgetCreateInfo::FPalTimerGaugeWidgetCreateInfo() {
    this->TargetActor = NULL;
    this->timerGaugeWidgetClass = NULL;
    this->DisplayRange = 0.00f;
    this->Time = 0.00f;
    this->bLooping = false;
    this->InitialStartDelay = 0.00f;
    this->InitialStartDelayVariance = 0.00f;
    this->IsHide = false;
}

