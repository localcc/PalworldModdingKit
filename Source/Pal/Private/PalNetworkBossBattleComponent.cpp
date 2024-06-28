#include "PalNetworkBossBattleComponent.h"

UPalNetworkBossBattleComponent::UPalNetworkBossBattleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalNetworkBossBattleComponent::UnlockAchievement_ToClient_Implementation(EPalBossType BossType) {
}

void UPalNetworkBossBattleComponent::RequestBossBattleStart_ToServer_Implementation(EPalBossType BossType, APalPlayerCharacter* StartPlayer) {
}

void UPalNetworkBossBattleComponent::RequestBossBattleStart_ToClient_Implementation(bool IsSuccess, EPalBossType BossType, const FPalStageInstanceId StageInstanceId, const TArray<APalPlayerCharacter*>& JoinPlayers) {
}

void UPalNetworkBossBattleComponent::RequestBossBattleEntry_ToServer_Implementation(EPalBossType BossType, EPalBossBattleDifficulty Difficulty, APalPlayerCharacter* EntryPlayer) {
}

void UPalNetworkBossBattleComponent::RemovePlayerFromRoom_ToClient_Implementation(EPalBossType BossType, APalPlayerCharacter* DeadPlayer) {
}

void UPalNetworkBossBattleComponent::NoticeSequenceEnd_ToServer_Implementation(EPalBossType BossType, APalPlayerCharacter* Player) {
}

void UPalNetworkBossBattleComponent::CombatResult_ToClient_Implementation(EPalBossType BossType, EPalBossBattleCombatResult CombatResult) {
}

void UPalNetworkBossBattleComponent::ChangeSequence_ToClient_Implementation(EPalBossType BossType, EPalBossBattleSequenceType NextSequence) {
}


