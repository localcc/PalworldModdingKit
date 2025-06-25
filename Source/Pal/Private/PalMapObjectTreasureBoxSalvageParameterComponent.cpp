#include "PalMapObjectTreasureBoxSalvageParameterComponent.h"

UPalMapObjectTreasureBoxSalvageParameterComponent::UPalMapObjectTreasureBoxSalvageParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GaugeStartPercent = 0.00f;
    this->GaugeEndPercent = 0.00f;
    this->GaugeRangePercent = 0.00f;
    this->CursorPercentSpeed = 0.00f;
    this->SalvageGameUIClass = NULL;
}


