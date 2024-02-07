#include "PalUIRadialMenuWidgetBase.h"

UPalUIRadialMenuWidgetBase::UPalUIRadialMenuWidgetBase() {
    this->IgnoreMouseLength = 100.00f;
    this->menuNum = 1;
    this->shiftDegree = 0;
    this->detectPadAxisBorder = 0.60f;
    this->nowArrowRadian = 0.00f;
    this->nowSelectedIndex = -1;
}

void UPalUIRadialMenuWidgetBase::UpdateSelectedIndex_ForPad() {
}

void UPalUIRadialMenuWidgetBase::UpdateSelectedIndex_ForMouse(const FVector2D& MousePosition, const FVector2D& CenterPosition) {
}

void UPalUIRadialMenuWidgetBase::UpdateSelectedIndex_ForceAxis(const FVector2D& Axis) {
}

void UPalUIRadialMenuWidgetBase::SetSelectedIndexForce(int32 Index) {
}

float UPalUIRadialMenuWidgetBase::RecalculateRadian(float inRadian) {
    return 0.0f;
}

void UPalUIRadialMenuWidgetBase::ClearSelectedIndex() {
}

void UPalUIRadialMenuWidgetBase::CalculateRadialMenuArea(float parentDegreeAngle) {
}



