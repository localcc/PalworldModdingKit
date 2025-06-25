#include "PalNPCInteractionComponent.h"
#include "Net/UnrealNetwork.h"

UPalNPCInteractionComponent::UPalNPCInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableTalk = false;
    this->bDisableTalkWhenCaptured = false;
}

void UPalNPCInteractionComponent::OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void UPalNPCInteractionComponent::OnRep_DisableTalk() {
}

void UPalNPCInteractionComponent::Initialize() {
}

void UPalNPCInteractionComponent::EndTalk(APalPlayerCharacter* TalkPlayer) {
}

void UPalNPCInteractionComponent::BeginPlay() {
}

void UPalNPCInteractionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalNPCInteractionComponent, bDisableTalk);
}


