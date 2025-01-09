#include "PalSkinDataBase.h"

UPalSkinDataBase::UPalSkinDataBase() {
    this->SkinType = EPalSkinType::None;
    this->bIsHairAccessory = false;
    this->bAutoGetItem = false;
    this->PlatformItemID_Steam = -1;
}

FName UPalSkinDataBase::GetTargetPalName(const UObject* WorldContextObject) const {
    return NAME_None;
}

FText UPalSkinDataBase::GetLocalizedSkinName(const UObject* WorldContextObject) const {
    return FText::GetEmpty();
}


