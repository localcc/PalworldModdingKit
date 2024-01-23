#include "PalInvaderDatabaseRow.h"

FPalInvaderDatabaseRow::FPalInvaderDatabaseRow() {
    this->BiomeID = EPalBiomeType::Undefined;
    this->InvadeGradeMin = 0;
    this->InvadeGradeMax = 0;
    this->Weight = 0.00f;
    this->LevelMin_A = 0;
    this->LevelMax_A = 0;
    this->Number_A = 0;
    this->LevelMin_B = 0;
    this->LevelMax_B = 0;
    this->Number_B = 0;
    this->LevelMin_C = 0;
    this->LevelMax_C = 0;
    this->Number_C = 0;
    this->LevelMin_D = 0;
    this->LevelMax_D = 0;
    this->Number_D = 0;
}

