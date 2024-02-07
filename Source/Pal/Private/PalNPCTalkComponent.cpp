#include "PalNPCTalkComponent.h"

UPalNPCTalkComponent::UPalNPCTalkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsTalking = false;
}

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


