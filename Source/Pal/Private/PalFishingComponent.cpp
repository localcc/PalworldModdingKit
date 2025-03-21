#include "PalFishingComponent.h"

UPalFishingComponent::UPalFishingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FishingRodModule = NULL;
}

void UPalFishingComponent::OnSuccessFight() {
}

void UPalFishingComponent::OnSuccessCatchBattle() {
}

void UPalFishingComponent::OnStartQTE(int32 Min, int32 Max) {
}

void UPalFishingComponent::OnReleasedFishingButton() {
}

void UPalFishingComponent::OnPressedFishingCancelButton() {
}

void UPalFishingComponent::OnPressedFishingButton() {
}

void UPalFishingComponent::OnFailedFight() {
}

void UPalFishingComponent::OnFailedCatchBattle() {
}

void UPalFishingComponent::OnEndQTE(bool IsSuccess) {
}

bool UPalFishingComponent::IsFishingButtonPressed() const {
    return false;
}

bool UPalFishingComponent::IsFishing() const {
    return false;
}

bool UPalFishingComponent::IsCatchBattle() const {
    return false;
}

int32 UPalFishingComponent::GetPlayerInputFishingDirection() const {
    return 0;
}

UPalFishingRodModule* UPalFishingComponent::GetFishingRodModule() const {
    return NULL;
}


