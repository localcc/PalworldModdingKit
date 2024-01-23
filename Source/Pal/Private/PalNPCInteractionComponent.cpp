#include "PalNPCInteractionComponent.h"

void UPalNPCInteractionComponent::OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void UPalNPCInteractionComponent::Initialize() {
}

void UPalNPCInteractionComponent::EndTalk(APalPlayerCharacter* TalkPlayer) {
}

void UPalNPCInteractionComponent::DebugInteractConditionString(const FString& testText) {
}

void UPalNPCInteractionComponent::BeginPlay() {
}

UPalNPCInteractionComponent::UPalNPCInteractionComponent() {
    this->NPCInteractionDataTable = NULL;
    this->NPCInteractConditionConstValDataTable = NULL;
    this->ConditionFunctionClass = NULL;
    this->ConditionFunctions = NULL;
}

