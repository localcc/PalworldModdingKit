#include "PalBuildObjectData.h"

FPalBuildObjectData::FPalBuildObjectData() {
    this->TypeA = EPalBuildObjectTypeA::Product;
    this->RedialIndex = 0;
    this->TypeB = EPalBuildObjectTypeB::Prod_Craft;
    this->Rank = 0;
    this->BuildCapacity = 0;
    this->RequiredBuildWorkAmount = 0.00f;
    this->AssetValue = 0;
    this->RequiredEnergyType = EPalEnergyType::None;
    this->ConsumeEnergySpeed = 0.00f;
    this->Material1_Count = 0;
    this->Material2_Count = 0;
    this->Material3_Count = 0;
    this->Material4_Count = 0;
    this->bInstallAtReticle = false;
    this->InstallNeighborThreshold = 0.00f;
    this->bIsInstallOnlyOnBase = false;
    this->bIsInstallOnlyInDoor = false;
    this->bIsInstallOnlyHubAround = false;
    this->InstallMaxNumInBaseCamp = 0;
    this->bInstallableNoObstacleFromCamera = false;
}

