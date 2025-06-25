#include "PalUIMapObjectFishPondStatusIndicatorModel.h"

UPalUIMapObjectFishPondStatusIndicatorModel::UPalUIMapObjectFishPondStatusIndicatorModel() {
}

void UPalUIMapObjectFishPondStatusIndicatorModel::OnUpdateTarget(UPalMapObjectFishPondModel* InOwnerConcreteModel) {
}

void UPalUIMapObjectFishPondStatusIndicatorModel::OnUpdateProductNumInfo(UPalMapObjectFishPondModel* InOwnerConcreteModel) {
}

UPalWorkProgress* UPalUIMapObjectFishPondStatusIndicatorModel::GetWorkProgress() const {
    return NULL;
}

FName UPalUIMapObjectFishPondStatusIndicatorModel::GetTargetLotteryName() const {
    return NAME_None;
}

void UPalUIMapObjectFishPondStatusIndicatorModel::GetProductNumInfo(int32& OutRemainProductNum, int32& OutRequestedProductNum) const {
}


