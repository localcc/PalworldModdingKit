#include "PalMapObjectMasterData.h"

FPalMapObjectMasterData::FPalMapObjectMasterData() {
    this->MaterialType = EPalMapObjectMaterialType::None;
    this->MaterialSubType = EPalMapObjectMaterialSubType::None;
    this->bCollectionObject = false;
    this->Hp = 0;
    this->Defense = 0;
    this->bBelongToBaseCamp = false;
    this->DistributeExpAroundPlayer = 0;
    this->DeteriorationDamage = 0.00f;
    this->ExtinguishBurnWorkAmount = 0.00f;
    this->bShowHPGauge = false;
    this->bInDevelop = false;
    this->Editor_RowNameHash = 0;
}

