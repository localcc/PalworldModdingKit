#include "PalHeadUpDisplayComponent.h"

UPalHeadUpDisplayComponent::UPalHeadUpDisplayComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HeadUpOffset = 0.00f;
}

void UPalHeadUpDisplayComponent::UpdateInvaderHUD() {
}

void UPalHeadUpDisplayComponent::ShowInvaderHUD() {
}

void UPalHeadUpDisplayComponent::OnUpdatePossessItem(UPalCharacterParameterComponent* Parameter) {
}

void UPalHeadUpDisplayComponent::OnUpdateOwnerCharacterGroupId(const FGuid& GroupId) {
}

void UPalHeadUpDisplayComponent::OnInitializedCharacter(APalCharacter* OwnerCharacter) {
}


