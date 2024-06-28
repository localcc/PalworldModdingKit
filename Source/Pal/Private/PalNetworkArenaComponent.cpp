#include "PalNetworkArenaComponent.h"

UPalNetworkArenaComponent::UPalNetworkArenaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalNetworkArenaComponent::UpdateParty_ToClient_Implementation(EPalArenaPlayerIndex PlayerIndex, const FPalArenaPlayerParty& ArenaPlayerParty) {
}

void UPalNetworkArenaComponent::SetParty_ToServer_Implementation(const FGuid& ArenaInstanceId, const FPalArenaPlayerParty& ArenaPlayerParty) {
}

void UPalNetworkArenaComponent::RequestStartArena_ToServer_Implementation() {
}

void UPalNetworkArenaComponent::RequestEnterArena_ToServer_Implementation() {
}

void UPalNetworkArenaComponent::RemovePlayerFromArena_ToClient_Implementation(UPalIndividualCharacterParameter* RemovePlayeParameter, bool bIsDisconnect) {
}

void UPalNetworkArenaComponent::NotifyStartArena_ToClient_Implementation(UPalArenaInstanceModel* InstanceModel, const TArray<FPalArenaPlayerInitializeParameter>& Params) {
}

void UPalNetworkArenaComponent::NotifySequenceEnd_ToServer_Implementation(const FGuid& ArenaInstanceId) {
}

void UPalNetworkArenaComponent::NotifyBattleResult_ToClient_Implementation(EPalArenaBattleResult ArenaBattleResult, bool bIsTimeup) {
}

void UPalNetworkArenaComponent::ExitPlayerFromResult_ToServer_Implementation(const FGuid& ArenaInstanceId) {
}

void UPalNetworkArenaComponent::AdvanceSequence_ToClient_Implementation() {
}


