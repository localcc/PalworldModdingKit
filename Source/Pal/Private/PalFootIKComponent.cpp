#include "PalFootIKComponent.h"

void UPalFootIKComponent::SetFootIKDisable(FName flagName, bool bIsDisable) {
}

bool UPalFootIKComponent::IsEnableFootIK() const {
    return false;
}

UPalFootIKComponent::UPalFootIKComponent() {
    this->bIsEnableFootIK = false;
    this->MinMeshOffset = -50.00f;
    this->FootIKInterpTime = 10.00f;
    this->FootIKMeshOffset = 0.00f;
}

