#include "PalNetworkIndividualComponent.h"

UPalNetworkIndividualComponent::UPalNetworkIndividualComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalNetworkIndividualComponent::UpdateCharacterParameter_ToServer_Implementation(const FPalInstanceID& ID, const FPalNetArchive& parameterArchive, FGuid Guid) {
}

void UPalNetworkIndividualComponent::UpdateCharacterParameter_ToAll_Implementation(const FPalInstanceID& ID, const FPalNetArchive& parameterArchive, FGuid Guid) {
}

void UPalNetworkIndividualComponent::UpdateCharacterNickName_ToServer_Implementation(const FPalInstanceID& ID, const FString& newNickName) {
}

void UPalNetworkIndividualComponent::SpawnPhantomActor_ToServer_Implementation(FPalInstanceID ID, FNetworkActorSpawnParameters SpawnParameter, FGuid Guid) {
}

void UPalNetworkIndividualComponent::SpawnPhantomActor_ToALL_Implementation(FPalInstanceID ID, int32 PhantomId, AActor* Actor, FGuid Guid) {
}

void UPalNetworkIndividualComponent::SpawnPhantomActor_SyncCheck(FPalInstanceID ID, int32 PhantomId, FGuid Guid) {
}

void UPalNetworkIndividualComponent::SpawnIndividualActor_ToServer_Implementation(FPalInstanceID ID, FNetworkActorSpawnParameters SpawnParameter, FGuid Guid) {
}

void UPalNetworkIndividualComponent::SpawnIndividualActor_ToALL_Implementation(FPalInstanceID ID, AActor* Actor, FGuid Guid) {
}

void UPalNetworkIndividualComponent::SpawnIndividualActor_SyncCheck(FPalInstanceID ID, FGuid Guid) {
}

void UPalNetworkIndividualComponent::SetWorkerSick_ToServer_Implementation(const FPalInstanceID& ID, EPalBaseCampWorkerSickType SickType) {
}

void UPalNetworkIndividualComponent::ResetStatusPoint_ToServer_Implementation(const FPalInstanceID& ID) {
}

void UPalNetworkIndividualComponent::ReplaceEquipWaza_ToServer_Implementation(const FPalInstanceID& ID, const EPalWazaID OldWaza, const EPalWazaID NewWaza) {
}

void UPalNetworkIndividualComponent::RemoveHighPriorityList_ToServer_Implementation(const FPalInstanceID& ID, APalCharacter* TargetPlayer) {
}

void UPalNetworkIndividualComponent::RemoveEquipWaza_ToServer_Implementation(const FPalInstanceID& ID, const EPalWazaID TargetWaza) {
}

void UPalNetworkIndividualComponent::RaiseToMainActor_ToServer_Implementation(FPalInstanceID ID, int32 PhantomId, FGuid Guid) {
}

void UPalNetworkIndividualComponent::RaiseToMainActor_ToALL_Implementation(FPalInstanceID ID, int32 PhantomId, FGuid Guid) {
}

void UPalNetworkIndividualComponent::EatItem_ToServer_Implementation(const FPalInstanceID& ID, const UPalStaticConsumeItemData* ItemData, const int32 Num) {
}

void UPalNetworkIndividualComponent::DropToPhantomActor_ToServer_Implementation(FPalInstanceID ID, FGuid Guid) {
}

void UPalNetworkIndividualComponent::DropToPhantomActor_ToALL_Implementation(FPalInstanceID ID, int32 PhantomId, FGuid Guid) {
}

void UPalNetworkIndividualComponent::DespawnPhantomActor_ToServer_Implementation(FPalInstanceID ID, int32 PhantomId, FGuid Guid) {
}

void UPalNetworkIndividualComponent::DespawnPhantomActor_ToALL_Implementation(FPalInstanceID ID, int32 PhantomId, FGuid Guid) {
}

void UPalNetworkIndividualComponent::DespawnPhantomActor_SyncCheck(FPalInstanceID ID, int32 PhantomId, FGuid Guid) {
}

void UPalNetworkIndividualComponent::DespawnIndividualActor_ToServer_Implementation(FPalInstanceID ID, FGuid Guid) {
}

void UPalNetworkIndividualComponent::DespawnIndividualActor_ToALL_Implementation(FPalInstanceID ID, FGuid Guid) {
}

void UPalNetworkIndividualComponent::DespawnIndividualActor_SyncCheck(FPalInstanceID ID, FGuid Guid) {
}

void UPalNetworkIndividualComponent::CreateIndividualID_ToServer_Implementation(FPalIndividualCharacterSaveParameter initParameter, FGuid Guid, int32 RequestPlayerId) {
}

void UPalNetworkIndividualComponent::CreateIndividualID_ToALL_Implementation(FPalIndividualCharacterSaveParameter initParameter, FPalInstanceID ID, FGuid Guid) {
}

void UPalNetworkIndividualComponent::CreateIndividualID_SyncCheck(FPalInstanceID ID, FGuid Guid) {
}

void UPalNetworkIndividualComponent::CreateFixedIndividualID_ToServer_Implementation(FPalInstanceID ID, FPalIndividualCharacterSaveParameter initParameter, FGuid Guid, int32 RequestPlayerId) {
}

void UPalNetworkIndividualComponent::BroadcastChangeOwnerCharacter_ToAll_Implementation(FPalInstanceID ID, const FGuid& PlayerUId, FDateTime OwnedTime) {
}

void UPalNetworkIndividualComponent::AddPlayerCharacterStatusPoint_ToServer_Implementation(const FPalInstanceID& ID, const TArray<FPalGotStatusPoint>& AddStatusPointArray) {
}

void UPalNetworkIndividualComponent::AddMasteredWaza_ToServer_Implementation(const FPalInstanceID& ID, EPalWazaID WazaID) {
}

void UPalNetworkIndividualComponent::AddHighPriorityList_ToServer_Implementation(const FPalInstanceID& ID, APalCharacter* TargetPlayer) {
}

void UPalNetworkIndividualComponent::AddEquipWaza_ToServer_Implementation(const FPalInstanceID& ID, const EPalWazaID NewWaza) {
}


