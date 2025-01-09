#include "PalItemRecipe.h"

FPalItemRecipe::FPalItemRecipe() {
    this->Product_Count = 0;
    this->WorkAmount = 0.00f;
    this->WorkableAttribute = 0;
    this->Material1_Count = 0;
    this->Material2_Count = 0;
    this->Material3_Count = 0;
    this->Material4_Count = 0;
    this->Material5_Count = 0;
    this->EnergyType = EPalEnergyType::None;
    this->EnergyAmount = 0;
    this->CraftExpRate = 0.00f;
    this->Editor_RowNameHash = 0;
}

