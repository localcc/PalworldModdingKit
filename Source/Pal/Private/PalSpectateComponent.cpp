#include "PalSpectateComponent.h"

UPalSpectateComponent::UPalSpectateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CachedOwner = NULL;
    this->SpectatorPawn = NULL;
    this->InternalState = EPalSpectateInternalState::STATE_None;
    this->bAdminMode = false;
}

void UPalSpectateComponent::SpectateNextPlayer(int32 Direction) {
}

void UPalSpectateComponent::SpectateFreely() {
}

void UPalSpectateComponent::ServerVerifyNextPlayer_Implementation(int32 Direction, bool bCheckCurrentIndex) {
}

void UPalSpectateComponent::ServerSyncSpectatorLocation_Implementation(FVector NewLoc, FRotator NewRot) {
}

void UPalSpectateComponent::ServerForceEndSpectate_Implementation(bool bUpdateEnvironment) {
}

void UPalSpectateComponent::ServerEndSpectate_Implementation() {
}

void UPalSpectateComponent::ServerBeginSpectate_Implementation(bool bInAdminMode) {
}

bool UPalSpectateComponent::IsSpectating() const {
    return false;
}

bool UPalSpectateComponent::IsRunning() const {
    return false;
}

bool UPalSpectateComponent::IsAdminMode() const {
    return false;
}

void UPalSpectateComponent::ForceEndSpectate(bool bUpdateEnvironment) {
}

void UPalSpectateComponent::EventOnPlayerTeleport() {
}

void UPalSpectateComponent::EventOnPlayerSlipDamaged(int32 Damage) {
}

void UPalSpectateComponent::EventOnPlayerExitStage() {
}

void UPalSpectateComponent::EventOnPlayerEnterStage() {
}

void UPalSpectateComponent::EventOnPlayerDead(FPalDeadInfo DeadInfo) {
}

void UPalSpectateComponent::EventOnPlayerDamaged(FPalDamageResult DamageResult) {
}

void UPalSpectateComponent::EndSpectate() {
}

void UPalSpectateComponent::ClientVerifyNextPlayer_Implementation(APalPlayerState* Next, FVector NextLocation) {
}

void UPalSpectateComponent::ClientForceEndSpectate_Implementation(bool bUpdateEnvironment) {
}

void UPalSpectateComponent::ClientChangeInternalState_Implementation(EPalSpectateInternalState NewState) {
}

void UPalSpectateComponent::ChangeSpectateMoveSpeed(int32 Direction) {
}

void UPalSpectateComponent::BeginSpectate(bool bInAdminMode) {
}


