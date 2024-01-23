#include "PalMapObjectDamagedScarecrowModel.h"

void UPalMapObjectDamagedScarecrowModel::OnDamage_ServerInternal(UPalMapObjectModel* Model, const FPalDamageInfo& DamageInfo, const int32 LastHp) {
}

UPalMapObjectDamagedScarecrowModel::UPalMapObjectDamagedScarecrowModel() {
    this->ProgressTimeStartAtDamaged = 0.00f;
}

