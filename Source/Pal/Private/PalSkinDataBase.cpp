#include "PalSkinDataBase.h"

UPalSkinDataBase::UPalSkinDataBase() {
    this->SkinType = EPalSkinType::None;
    this->bIsHairAccessory = false;
    this->bAutoGetItem = false;
    this->PlatformItemID_Steam = -1;
}

FText UPalSkinDataBase::GetLocalizedSkinName(const UObject* WorldContextObject) const {
    return FText::GetEmpty();
}


