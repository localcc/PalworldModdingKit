#include "PalUIMapObjectTreasureBoxSalvageGameModel.h"

UPalUIMapObjectTreasureBoxSalvageGameModel::UPalUIMapObjectTreasureBoxSalvageGameModel() {
    this->GaugeStart = 0.00f;
    this->GaugeEnd = 1.00f;
    this->GaugeRange = 1.00f;
    this->CursorSpeed = 1.00f;
    this->GaugeSize = 1.00f;
}

void UPalUIMapObjectTreasureBoxSalvageGameModel::SetGaugeSize(const float Size) {
}

void UPalUIMapObjectTreasureBoxSalvageGameModel::SendResult(const bool bSuccess) {
}

void UPalUIMapObjectTreasureBoxSalvageGameModel::RequestCancelSalvageAction() {
}

float UPalUIMapObjectTreasureBoxSalvageGameModel::GetCursorSpeed() const {
    return 0.0f;
}

void UPalUIMapObjectTreasureBoxSalvageGameModel::CalcGaugeRandomRange(float& Start, float& End) {
}


