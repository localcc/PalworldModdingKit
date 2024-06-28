#include "PalWildSpawnerDatabaseRow.h"

FPalWildSpawnerDatabaseRow::FPalWildSpawnerDatabaseRow() {
    this->SpawnerType = EPalSpawnedCharacterType::Common;
    this->Weight = 0.00f;
    this->OnlyTime = EPalOneDayTimeType::Undefined;
    this->OnlyWeather = EPalWeatherConditionType::Undefined;
    this->LvMin_1 = 0;
    this->LvMax_1 = 0;
    this->NumMin_1 = 0;
    this->NumMax_1 = 0;
    this->LvMin_2 = 0;
    this->LvMax_2 = 0;
    this->NumMin_2 = 0;
    this->NumMax_2 = 0;
    this->LvMin_3 = 0;
    this->LvMax_3 = 0;
    this->NumMin_3 = 0;
    this->NumMax_3 = 0;
    this->bIsAllowRandomizer = false;
}

