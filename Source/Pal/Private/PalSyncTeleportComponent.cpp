#include "PalSyncTeleportComponent.h"

UPalSyncTeleportComponent::UPalSyncTeleportComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStartSE = NULL;
    this->FadeParameter = NULL;
}

void UPalSyncTeleportComponent::SyncTeleport_ToClient_Implementation(const FPalSyncTeleportRequestParameter& Parameter) {
}

void UPalSyncTeleportComponent::SyncTeleport(const FPalSyncTeleportRequestParameter& Parameter) {
}

void UPalSyncTeleportComponent::RequestSyncTeleportStart_ToServer_Implementation(const FPalSyncTeleportRequestParameter& Parameter) {
}

void UPalSyncTeleportComponent::RequestSyncTeleportMove_ToServer_Implementation() {
}

void UPalSyncTeleportComponent::RequestSyncTeleportEnd_ToServer_Implementation() {
}

void UPalSyncTeleportComponent::ReceiveSyncTeleportStartResult_ToClient_Implementation(bool bIsSuccess) {
}

void UPalSyncTeleportComponent::ReceiveSyncTeleportMoveResult_ToClient_Implementation(bool bIsSuccess) {
}

void UPalSyncTeleportComponent::ReceiveSyncTeleportEnd_ToClient_Implementation(bool bIsSuccess) {
}

void UPalSyncTeleportComponent::OnEndSyncTeleportFadeOut() {
}

void UPalSyncTeleportComponent::OnEndSyncTeleportFadeIn() {
}

bool UPalSyncTeleportComponent::IsTeleporting() const {
    return false;
}

FQuat UPalSyncTeleportComponent::GetTeleportRotation() const {
    return FQuat{};
}

FVector UPalSyncTeleportComponent::GetTeleportLocation() const {
    return FVector{};
}


