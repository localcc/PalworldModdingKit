#include "PalBossBattleSequenceBase.h"

UPalBossBattleSequenceBase::UPalBossBattleSequenceBase() {
    this->NextSequenceType = EPalBossBattleSequenceType::None;
}

void UPalBossBattleSequenceBase::TickSequence_Implementation(float DeltaTime) {
}

void UPalBossBattleSequenceBase::SetupLevelSequenceActor(ALevelSequenceActor* LevelSequenceActor, ULevelSequence* LevelSequence, ALevelInstance* LevelInstance) {
}

void UPalBossBattleSequenceBase::SelfFinish_ForBP() {
}

void UPalBossBattleSequenceBase::OnBeginSequence_Implementation() {
}

void UPalBossBattleSequenceBase::NoticeSequenceEnd_ToServer() {
}

bool UPalBossBattleSequenceBase::IsServer() {
    return false;
}

UPalBossBattleSequencer* UPalBossBattleSequenceBase::GetOuterSequencer() const {
    return NULL;
}

APalPlayerCharacter* UPalBossBattleSequenceBase::GetJoinedLocalControlPlayer() {
    return NULL;
}

AActor* UPalBossBattleSequenceBase::GetBossRoomSequenceRootActor(ALevelInstance* LevelInstance) const {
    return NULL;
}

FPalBossBattleStaticInfo UPalBossBattleSequenceBase::GetBossBattleStaticInfo() {
    return FPalBossBattleStaticInfo{};
}

void UPalBossBattleSequenceBase::FinishSequence_Implementation(bool IsSuccess) {
}


