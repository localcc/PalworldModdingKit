#include "PalNPCTalkComponent.h"

void UPalNPCTalkComponent::TriggerStartTalk(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void UPalNPCTalkComponent::TriggerEndTalk(AActor* Other) {
}


bool UPalNPCTalkComponent::HasTalkData_Implementation(APalCharacter* TalkCharacter) const {
    return false;
}

bool UPalNPCTalkComponent::GetIsTalking() {
    return false;
}

UPalNPCTalkComponent::UPalNPCTalkComponent() {
    this->IsTalking = false;
}

