#include "PalNetworkArenaComponent.h"

UPalNetworkArenaComponent::UPalNetworkArenaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalNetworkArenaComponent::UpdateParty_ToClient_Implementation(EPalArenaPlayerIndex PlayerIndex, const FPalArenaPlayerParty& ArenaPlayerParty) {
}

void UPalNetworkArenaComponent::SyncBattleEndTimeToClient_Implementation(FDateTime BattleEndTime) {
}

void UPalNetworkArenaComponent::SetParty_ToServer_Implementation(const FGuid& ArenaInstanceId, const FPalArenaPlayerParty& ArenaPlayerParty) {
}

void UPalNetworkArenaComponent::RequestStartArenaSpectateToServer_Implementation(const FGuid& ArenaRoomId) {
}

void UPalNetworkArenaComponent::RequestStartArenaSolo_ToServer_Implementation(EPalArenaRank ArenaRank) {
}

void UPalNetworkArenaComponent::RequestStartArena_ToServer_Implementation() {
}

void UPalNetworkArenaComponent::RequestMyWorldArenaRank_Implementation() {
}

void UPalNetworkArenaComponent::RequestExitArenaSpectateToServer_Implementation() {
}

void UPalNetworkArenaComponent::RequestEnterArena_ToServer_Implementation(const FGuid& ArenaRoomId) {
}

void UPalNetworkArenaComponent::RequestCreateRoomArena_ToServer_Implementation(const FPalArenaRule& ArenaRule) {
}

void UPalNetworkArenaComponent::RequestArenaRule_PreEnter_ToServer_Implementation(const FGuid& ArenaRoomId) {
}

void UPalNetworkArenaComponent::RemovePlayerFromArena_ToClient_Implementation(UPalIndividualCharacterParameter* RemovePlayeParameter, bool bIsComplete) {
}

void UPalNetworkArenaComponent::ReceiveMyWorldArenaRank_Implementation(FPalArenaWorldRankingRecord RankInfo) {
}

void UPalNetworkArenaComponent::ReceiveExitArenaSpectate_ToClient_Implementation(bool bIsSuccess) {
}

void UPalNetworkArenaComponent::ReceiveEnterArenaSpectateResult_ToClinet_Implementation(EPalArenaEntryRequestResult Result) {
}

void UPalNetworkArenaComponent::ReceiveEnterArenaResult_ToClinet_Implementation(EPalArenaEntryRequestResult Result) {
}

void UPalNetworkArenaComponent::NotifyStartArenaSpectate_ToClient_Implementation(const FPalArenaSequencerInitializeParameter& InitializeParameter) {
}

void UPalNetworkArenaComponent::NotifyStartArena_ToClient_Implementation(const FPalArenaSequencerInitializeParameter& InitializeParameter) {
}

void UPalNetworkArenaComponent::NotifySequenceEnd_ToServer_Implementation(const FGuid& ArenaInstanceId) {
}

void UPalNetworkArenaComponent::NotifyEndArenaSpectate_ToClient_Implementation() {
}

void UPalNetworkArenaComponent::NotifyBattleResultInfo_ToClient_Implementation(const FPalArenaBattleResultInfo& ArenaBattleResultInfo) {
}

void UPalNetworkArenaComponent::NotifyArenaRoomRule_ToClient_Implementation(bool bIsSuccess, const FPalArenaRule& Rule, const FGuid& ArenaRoomId, const FPalArenaMatchingPlayerInfo& MatchingPlayerInfo) {
}

void UPalNetworkArenaComponent::ExitPlayerSoloMode_ToServer_Implementation(const FGuid& ArenaInstanceId) {
}

void UPalNetworkArenaComponent::ExitPlayerFromResult_ToServer_Implementation(const FGuid& ArenaInstanceId) {
}

void UPalNetworkArenaComponent::AdvanceSequence_ToClient_Implementation() {
}


