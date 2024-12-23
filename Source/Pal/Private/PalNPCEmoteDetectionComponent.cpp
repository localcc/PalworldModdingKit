#include "PalNPCEmoteDetectionComponent.h"

UPalNPCEmoteDetectionComponent::UPalNPCEmoteDetectionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOneShot = false;
    this->EmoteIndex = -1;
    this->RequestEmoteType = ERequestEmoteType::Identical;
    this->RequestEmoteIndex = -1;
    this->DetectionRadius = 0.00f;
    this->LoopEmote = false;
}

void UPalNPCEmoteDetectionComponent::OnLocalPlayerEmoteAct_Implementation() {
}

bool UPalNPCEmoteDetectionComponent::GetLocalPlayerRewardAble() {
    return false;
}



