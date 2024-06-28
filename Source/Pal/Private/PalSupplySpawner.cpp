#include "PalSupplySpawner.h"

APalSupplySpawner::APalSupplySpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IncidentPalClass = NULL;
    this->IncidentNPCClass = NULL;
    this->SpawnHeight = 100000.00f;
    this->MeteorPieceHeight = 20.00f;
    this->MeteorPieceRandomMinRange = 300.00f;
    this->MeteorPieceRandomMaxRange = 600.00f;
    this->SafeAreaRadius = 300.00f;
    this->ForceSupplyType = EPalSupplyType::None;
    this->bDebugDrawSupplyLimitArea = false;
}


