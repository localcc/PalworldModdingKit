#include "PalSpawnerPlacementDatabaseRow.h"

FPalSpawnerPlacementDatabaseRow::FPalSpawnerPlacementDatabaseRow() {
    this->SpawnerType = EPalSpawnedCharacterType::Common;
    this->PlacementType = EPalSpawnerPlacementType::Field;
    this->RadiusType = EPalSpawnRadiusType::S;
    this->StaticRadius = 0.00f;
    this->RespawnCoolTime = 0.00f;
}

