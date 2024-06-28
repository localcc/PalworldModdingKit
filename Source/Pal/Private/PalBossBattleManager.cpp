#include "PalBossBattleManager.h"

UPalBossBattleManager::UPalBossBattleManager() {
    this->MAX_TIME_LIMIT = 600;
    this->PlayerRespawnTimeLimit = 60.00f;
    this->BGMFadeDuration = 1.00f;
    this->BossBattleSequencerClass = NULL;
    this->HardUnlockTiggerBoss = EPalBossType::SakurajimaBoss;
    this->DisableSkyBossType_LocalPlayer = EPalBossType::None;
}

void UPalBossBattleManager::UnlockAchievement(EPalBossType BossType) {
}

void UPalBossBattleManager::UnloadBossBattle_ServerInternal(EPalBossType BossType) {
}

void UPalBossBattleManager::OnBossBattleCombatStart(EPalBossType BossType) {
}

void UPalBossBattleManager::LoadAsyncBossBattle_ServerInternal(EPalBossType BossType) {
}

FTransform UPalBossBattleManager::GetTopWarpPointTransform(EPalBossType BossType) const {
    return FTransform{};
}

FPalBossBattleStaticInfo UPalBossBattleManager::GetStaticInfo(EPalBossType BossType) const {
    return FPalBossBattleStaticInfo{};
}

FTransform UPalBossBattleManager::GetPlayerSpawnTransformForMultiPlayer(int32 Index, FVector Location, FRotator Rotate, float Offset) {
    return FTransform{};
}

int32 UPalBossBattleManager::GetMaxJoinablePlayerNum() {
    return 0;
}

bool UPalBossBattleManager::GetIsServer() {
    return false;
}

float UPalBossBattleManager::GetBossHPMultiPlayerRate(int32 JoinedPlayerNum) {
    return 0.0f;
}

FString UPalBossBattleManager::GetBossAchievementIndex(EPalBossType BossType) const {
    return TEXT("");
}

float UPalBossBattleManager::GetBattleTimeLimit() const {
    return 0.0f;
}

void UPalBossBattleManager::EmptyInstanceCleanup() {
}


bool UPalBossBattleManager::CanStartBossBattle(EPalBossType BossType) {
    return false;
}

bool UPalBossBattleManager::CanEntryHard(const APalPlayerCharacter* Player) const {
    return false;
}

void UPalBossBattleManager::BossBattleExit(EPalBossType BossType, APalPlayerCharacter* ExitPlayer) {
}

void UPalBossBattleManager::BossBattleEntryCancel(EPalBossType BossType, APalPlayerCharacter* EntryPlayer) {
}

void UPalBossBattleManager::BossBattleEntry(EPalBossType BossType, EPalBossBattleDifficulty Difficulty, APalPlayerCharacter* EntryPlayer) {
}

void UPalBossBattleManager::AddGroupCharacter(UPalIndividualCharacterHandle* AddIndividualHandle) {
}


