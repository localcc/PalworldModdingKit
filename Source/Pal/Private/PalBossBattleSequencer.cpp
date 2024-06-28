#include "PalBossBattleSequencer.h"

UPalBossBattleSequencer::UPalBossBattleSequencer() {
    this->RemainBattleTimer = -1.00f;
    this->IsBattleTimerCountDown = false;
    this->CombatResult = EPalBossBattleCombatResult::None;
    this->CurrentSequence = NULL;
    this->BossBattleInstanceModel = NULL;
    this->SelfBossType = EPalBossType::None;
    this->BossCharacter = NULL;
    this->PlayingBGMId = 0;
    this->bIsClientOnly = false;
    this->BossBattleEvent = NULL;
}


void UPalBossBattleSequencer::StopBGM() {
}

void UPalBossBattleSequencer::SetPlayerMoveDisable(APalPlayerCharacter* Player, bool Disable) {
}

void UPalBossBattleSequencer::SetMutekiAllPlayer(bool bIsMuteki) {
}

void UPalBossBattleSequencer::SetBossCharacter(APalCharacter* BossActor) {
}

void UPalBossBattleSequencer::SetBossBattlEvent(UPalBossBattleEventBase* NewBossBattleEvent) {
}

void UPalBossBattleSequencer::SetAllPlayerMoveDisable(bool Disable) {
}

void UPalBossBattleSequencer::RemovePlayerFromInRoomList(APalPlayerCharacter* Player) {
}

void UPalBossBattleSequencer::RemoveDyingStatus() {
}

void UPalBossBattleSequencer::PlayBGM(UAkAudioEvent* BGMAudioEvent) {
}

void UPalBossBattleSequencer::OnPlayerRespawn(APalPlayerCharacter* Player) {
}

void UPalBossBattleSequencer::OnPlayerDeadStopBGM(APalPlayerCharacter* PlayerCharacter, const FPalDyingEndInfo& DyingEndInfo) {
}

void UPalBossBattleSequencer::OnOpeningEnd(bool Success) {
}

void UPalBossBattleSequencer::OnEndingEnd(bool Success) {
}

void UPalBossBattleSequencer::OnDyingDeadEndDelegate(APalPlayerCharacter* PlayerCharacter, const FPalDyingEndInfo& DyingEndInfo) {
}

void UPalBossBattleSequencer::OnCompletedEnd(bool Success) {
}

void UPalBossBattleSequencer::OnCombatFinish(EPalBossBattleCombatResult InCombatResult) {
}

void UPalBossBattleSequencer::OnCombatEnd(bool Success) {
}

void UPalBossBattleSequencer::NoticeClientCombatResult() {
}

void UPalBossBattleSequencer::LoadAndCreateBossBattleEvent(TSoftClassPtr<UPalBossBattleEventBase> BossBattleEventClass) {
}

void UPalBossBattleSequencer::KillAllPlayer() {
}

bool UPalBossBattleSequencer::IsClientOnly() const {
    return false;
}

bool UPalBossBattleSequencer::IsAllPlayerDead() const {
    return false;
}

TArray<APalPlayerCharacter*> UPalBossBattleSequencer::GetSequencePlayers() const {
    return TArray<APalPlayerCharacter*>();
}

float UPalBossBattleSequencer::GetRemainTimeSecond() {
    return 0.0f;
}

APalPlayerCharacter* UPalBossBattleSequencer::GetJoinedLocalPlayer() {
    return NULL;
}

APalPlayerCharacter* UPalBossBattleSequencer::GetJoinedAndServerLocalPlayer() {
    return NULL;
}

TArray<APalPlayerCharacter*> UPalBossBattleSequencer::GetInRoomPlayers() {
    return TArray<APalPlayerCharacter*>();
}

EPalBossType UPalBossBattleSequencer::GetBossType() {
    return EPalBossType::None;
}

APalCharacter* UPalBossBattleSequencer::GetBossCharacter() {
    return NULL;
}

UPalBossBattleInstanceModel* UPalBossBattleSequencer::GetBossBattleInstanceModel() const {
    return NULL;
}

UPalBossBattleEventBase* UPalBossBattleSequencer::GetBossBattleEvent() const {
    return NULL;
}

TArray<APalPlayerCharacter*> UPalBossBattleSequencer::GetAliveOrDyingPlayers() {
    return TArray<APalPlayerCharacter*>();
}

void UPalBossBattleSequencer::FullRecoveryHPAllPlayer() {
}

void UPalBossBattleSequencer::ForceRespawnPlayer() {
}

APalPlayerCharacter* UPalBossBattleSequencer::FindFirstCombatTargetForBossAI() {
    return NULL;
}


