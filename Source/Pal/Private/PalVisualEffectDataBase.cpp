#include "PalVisualEffectDataBase.h"

FName UPalVisualEffectDataBase::GetMosaicKeyName() {
    return NAME_None;
}

UPalVisualEffectDataBase::UPalVisualEffectDataBase() {
    this->MosaicMaterialParameterCollection = NULL;
}

