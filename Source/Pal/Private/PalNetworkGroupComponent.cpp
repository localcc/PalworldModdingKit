#include "PalNetworkGroupComponent.h"

UPalNetworkGroupComponent::UPalNetworkGroupComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalNetworkGroupComponent::RequestJoinGuildRequestForPlayer_ToServer_Implementation(const FGuid& RequestPlayerUId, const FGuid& TargetPlayerUId) {
}

void UPalNetworkGroupComponent::RequestJoinGuildForPlayer_ToServer_Implementation(const FGuid& RequestPlayerUId, const FGuid& TargetPlayerUId) {
}

void UPalNetworkGroupComponent::RequestExitGuild_ToServer_Implementation(const FGuid& TargetPlayerUId) {
}

void UPalNetworkGroupComponent::RequestChangeGuildName_ToServer_Implementation(const FGuid& GroupID, const FString& NewGuildName) {
}

void UPalNetworkGroupComponent::RequestChangeGuildAdmin_ToServer_Implementation(const FGuid& RequestPlayerUId, const FGuid& TargetPlayerUId) {
}

void UPalNetworkGroupComponent::NotifyJoinGuildRequestResult_ToServer_Implementation(const FGuid& RequestPlayerUId, const FGuid& NotifyTargetPlayerUId, EPalGuildJoinRequestResult ResultType) {
}


