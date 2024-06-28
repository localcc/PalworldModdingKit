#include "PalNetworkIndividualComponent.h"

UPalNetworkIndividualComponent::UPalNetworkIndividualComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalNetworkIndividualComponent::UseItemInSlotToCharacter_ToServer_Implementation(const FPalInstanceID& ID, const FPalItemSlotIdAndNum SlotAndNum) {
}

void UPalNetworkIndividualComponent::UpdateCharacterParameter_ServerInternal(const FPalInstanceID& ID, const FPalNetArchive& parameterArchive, FGuid Guid) {
}

void UPalNetworkIndividualComponent::SpawnPhantomActor_SyncCheck(FPalInstanceID ID, int32 PhantomId, FGuid Guid) {
}

void UPalNetworkIndividualComponent::SpawnPhantomActor_ServerInternal(FPalInstanceID ID, FNetworkActorSpawnParameters SpawnParameter, FGuid Guid) {
}

void UPalNetworkIndividualComponent::SpawnIndividualActor_SyncCheck(FPalInstanceID ID, FGuid Guid) {
}

void UPalNetworkIndividualComponent::SpawnIndividualActor_ServerInternal(FPalInstanceID ID, FNetworkActorSpawnParameters SpawnParameter, FGuid Guid) {
}

void UPalNetworkIndividualComponent::RemoveHighPriorityList_ToServer_Implementation(const FPalInstanceID& ID, APalCharacter* TargetPlayer) {
}

void UPalNetworkIndividualComponent::RaiseToMainActor_ToServer_Implementation(FPalInstanceID ID, int32 PhantomId, FGuid Guid) {
}

void UPalNetworkIndividualComponent::RaiseToMainActor_ToALL_Implementation(FPalInstanceID ID, int32 PhantomId, FGuid Guid) {
}

void UPalNetworkIndividualComponent::OnUpdateCharacterParameter_ServerInternal(const FPalInstanceID& ID, const FPalNetArchive& parameterArchive, FGuid Guid) {
}

void UPalNetworkIndividualComponent::OnSpawnPhantomActor_ServerInternal(FPalInstanceID ID, int32 PhantomId, AActor* Actor, FGuid Guid) {
}

void UPalNetworkIndividualComponent::OnSpawnIndividualActor_ServerInternal(FPalInstanceID ID, AActor* Actor, FGuid Guid) {
}

void UPalNetworkIndividualComponent::OnDespawnPhantomActor_ServerInternal(FPalInstanceID ID, int32 PhantomId, FGuid Guid) {
}

void UPalNetworkIndividualComponent::OnDespawnIndividualActor_ServerInternal(FPalInstanceID ID, FGuid Guid) {
}

void UPalNetworkIndividualComponent::OmCreateIndividualID_ServerInternal(FPalIndividualCharacterSaveParameter initParameter, FPalInstanceID ID, FGuid Guid) {
}

void UPalNetworkIndividualComponent::NotifyAddedMasteredWaza_ToAll_Implementation(const FPalInstanceID& ID, EPalWazaID WazaID) {
}

void UPalNetworkIndividualComponent::DropToPhantomActor_ToALL_Implementation(FPalInstanceID ID, int32 PhantomId, FGuid Guid) {
}

void UPalNetworkIndividualComponent::DropToPhantomActor_ServerInternal(FPalInstanceID ID, FGuid Guid) {
}

void UPalNetworkIndividualComponent::DespawnPhantomActor_SyncCheck(FPalInstanceID ID, int32 PhantomId, FGuid Guid) {
}

void UPalNetworkIndividualComponent::DespawnPhantomActor_ServerInternal(FPalInstanceID ID, int32 PhantomId, FGuid Guid) {
}

void UPalNetworkIndividualComponent::DespawnIndividualActor_SyncCheck(FPalInstanceID ID, FGuid Guid) {
}

void UPalNetworkIndividualComponent::DespawnIndividualActor_ServerInternal(FPalInstanceID ID, FGuid Guid) {
}

void UPalNetworkIndividualComponent::CreateIndividualID_SyncCheck(FPalInstanceID ID, FGuid Guid) {
}

void UPalNetworkIndividualComponent::CreateIndividualID_ServerInternal(FPalIndividualCharacterSaveParameter initParameter, FGuid Guid, int32 RequestPlayerId) {
}

void UPalNetworkIndividualComponent::CreateFixedIndividualID_ServerInternal(FPalInstanceID ID, FPalIndividualCharacterSaveParameter initParameter, FGuid Guid, int32 RequestPlayerId) {
}

void UPalNetworkIndividualComponent::BroadcastChangeOwnerCharacter_ToAll_Implementation(FPalInstanceID ID, const FGuid& PlayerUId, FDateTime OwnedTime) {
}

void UPalNetworkIndividualComponent::AddHighPriorityList_ToServer_Implementation(const FPalInstanceID& ID, APalCharacter* TargetPlayer) {
}


