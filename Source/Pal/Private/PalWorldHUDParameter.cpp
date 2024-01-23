#include "PalWorldHUDParameter.h"

FPalWorldHUDParameter::FPalWorldHUDParameter() {
    this->WorldHUDClass = NULL;
    this->WorldHUDType = EPalWorldHUDWidgetBlueprintType::Undefined;
    this->HUDParameter = NULL;
    this->DisplayRange = 0.00f;
    this->bEnableShow = false;
}

