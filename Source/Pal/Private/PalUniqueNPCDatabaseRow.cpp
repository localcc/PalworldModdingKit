#include "PalUniqueNPCDatabaseRow.h"

FPalUniqueNPCDatabaseRow::FPalUniqueNPCDatabaseRow() {
    this->IsTransientTalkCount = false;
    this->Gender = EPalGenderType::None;
    this->SkinColor = EPalNPCSkinColor::None;
    this->Face = EPalNPCFaceType::None;
    this->HairStyle = EPalNPCHairStyleType::None;
    this->HairColor = EPalNPCHairColorType::None;
    this->Clothes = EPalNPCClothesType::None;
    this->Scale = EPalNPCScaleType::None;
    this->Level = 0;
}

