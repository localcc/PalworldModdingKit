#include "PalUIMapObjectEnergyStatusIndicatorModel.h"

UPalUIMapObjectEnergyStatusIndicatorModel::UPalUIMapObjectEnergyStatusIndicatorModel() {
}

float UPalUIMapObjectEnergyStatusIndicatorModel::GetStoredEnergyAmount() const {
    return 0.0f;
}

float UPalUIMapObjectEnergyStatusIndicatorModel::GetMaxEnergyStorage() const {
    return 0.0f;
}

EPalEnergyType UPalUIMapObjectEnergyStatusIndicatorModel::GetEnergyType() const {
    return EPalEnergyType::None;
}

UPalMapObjectConcreteModelBase* UPalUIMapObjectEnergyStatusIndicatorModel::GetConcreteModel() const {
    return NULL;
}


