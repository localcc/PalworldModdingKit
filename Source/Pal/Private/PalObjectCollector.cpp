#include "PalObjectCollector.h"

UPalObjectCollector::UPalObjectCollector() {
    this->bShouldCreate = true;
    this->bIsUpdateBaseCamp = false;
    this->NearStartDistanceForSpawnerBase = 24000.00f;
    this->NearEndDistanceForSpawnerBase = 25000.00f;
    this->NearDistanceForSpawnerBaseFromBaseCamp = 5000.00f;
}


