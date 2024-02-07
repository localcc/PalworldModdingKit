#include "PalVisualEffectDataBase.h"

UPalVisualEffectDataBase::UPalVisualEffectDataBase() {
    this->MosaicMaterialParameterCollection = NULL;
}

FName UPalVisualEffectDataBase::GetMosaicKeyName() {
    return NAME_None;
}


