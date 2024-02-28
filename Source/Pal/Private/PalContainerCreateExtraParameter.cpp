#include "PalContainerCreateExtraParameter.h"

FPalContainerCreateExtraParameter::FPalContainerCreateExtraParameter() {
    this->bIsWatchAllPlayer = false;
    this->bIsSyncEnable = false;
    this->bIgnoreOnSave = false;
    this->OperationRestrictType = EPalContainerOperationRestrictType::None;
}

