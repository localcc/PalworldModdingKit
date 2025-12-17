#include "PalObjectCollector.h"

UPalObjectCollector::UPalObjectCollector() {
    this->bShouldCreate = true;
    this->bIsUpdateBaseCamp = false;
    this->bShouldRecalculateNearSpawn_RegisteredSpawnerInsideBaseCamp = false;
    this->NearStartDistanceForSpawnerBase = 24000.00f;
    this->NearEndDistanceForSpawnerBase = 25000.00f;
    this->NearDistanceForSpawnerBaseFromBaseCamp = 5000.00f;
}

void UPalObjectCollector::OnRemoveBaseCampModel_ServerInternal(const FGuid BaseCampId) {
}

void UPalObjectCollector::OnCreateBaseCampModel_ServerInternal(const FGuid BaseCampId) {
}


