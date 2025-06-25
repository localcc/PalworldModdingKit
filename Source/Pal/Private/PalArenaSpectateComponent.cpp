#include "PalArenaSpectateComponent.h"

UPalArenaSpectateComponent::UPalArenaSpectateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CachedOwner = NULL;
    this->SpectatorPawn = NULL;
    this->State = EPalArenaSpectateState::STATE_None;
    this->SpectatedPlayer = NULL;
}

void UPalArenaSpectateComponent::SpectateTopDown(const FVector& FromLocation) {
}

APalCharacter* UPalArenaSpectateComponent::SpectateNextPlayer(EPalArenaPlayerIndex& PlayerIndex) {
    return NULL;
}

void UPalArenaSpectateComponent::SpectateFreely() {
}

void UPalArenaSpectateComponent::ServerSetViewTarget_Implementation(APawn* Pawn) {
}

bool UPalArenaSpectateComponent::IsSpectating() const {
    return false;
}

bool UPalArenaSpectateComponent::IsRunning() const {
    return false;
}

void UPalArenaSpectateComponent::EventOnSpectatedPlayerRide(AActor* RideActor) {
}

void UPalArenaSpectateComponent::EventOnSpectatedPlayerGetOff(AActor* RideActor) {
}

void UPalArenaSpectateComponent::EndSpectate() {
}

void UPalArenaSpectateComponent::BeginSpectate() {
}


