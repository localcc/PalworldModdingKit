#include "PalStaticConsumeItemData.h"

UPalStaticConsumeItemData::UPalStaticConsumeItemData() {
    this->RestoreHP = 0;
    this->RestoreSP = 0;
    this->RestoreSatiety = 0;
    this->RestoreSanity = 0;
    this->WazaID = EPalWazaID::None;
}

EPalWazaID UPalStaticConsumeItemData::GetWazaID() const {
    return EPalWazaID::None;
}

int32 UPalStaticConsumeItemData::GetRestoreSP() const {
    return 0;
}

int32 UPalStaticConsumeItemData::GetRestoreSatiety() const {
    return 0;
}

int32 UPalStaticConsumeItemData::GetRestoreSanity() const {
    return 0;
}

int32 UPalStaticConsumeItemData::GetRestoreHP() const {
    return 0;
}


