#include "PalArenaWorldSubsystem.h"

UPalArenaWorldSubsystem::UPalArenaWorldSubsystem() {
    this->ArenaSequencerClass = NULL;
    this->ArenaSpectateSequencerClass = NULL;
    this->InBattleTime = 600;
    this->SoloNPCPresetTable = NULL;
    this->SoloRewadTable = NULL;
    this->SoloNPCSpawnerClass = NULL;
    this->ArenaWorldRankingInfoClass = NULL;
    this->InitialHateHigh = 10000.00f;
    this->InitialHateLow = 5000.00f;
    this->ArenaWorldRankingInfo = NULL;
    this->ArenaEntrance = NULL;
}

void UPalArenaWorldSubsystem::RequestExitSpectate() {
}

void UPalArenaWorldSubsystem::RequestEnterArenaSolo(const EPalArenaRank Rank) {
}

void UPalArenaWorldSubsystem::RequestEnterArena(const FGuid& ArenaRoomId) {
}

void UPalArenaWorldSubsystem::RequestCreateArenaRoom(const FPalArenaRule& ArenaRule) {
}

void UPalArenaWorldSubsystem::RequestCancelEntryArena(APalPlayerCharacter* CancelPlayer) {
}

void UPalArenaWorldSubsystem::OnSoloNPCSpawned(APalArenaSoloNPCSpawner* Spawner) {
}

void UPalArenaWorldSubsystem::OnChangeBattleEndTime_ServerInternal(FDateTime BattleEndTime) {
}

TArray<FPalArenaSoloClearItemInfo> UPalArenaWorldSubsystem::GetSoloClearReward(EPalArenaRank Rank, bool bIsFirstClear) {
    return TArray<FPalArenaSoloClearItemInfo>();
}

UPalArenaSequencer* UPalArenaWorldSubsystem::GetLocalPlayerSequencer() const {
    return NULL;
}

APalArenaWorldRankingInfo* UPalArenaWorldSubsystem::GetArenaWorldRankingInfo() const {
    return NULL;
}

int32 UPalArenaWorldSubsystem::GetArenaBattleTime() {
    return 0;
}

void UPalArenaWorldSubsystem::ForceStageExitAll() {
}

void UPalArenaWorldSubsystem::ExitArena(APalPlayerCharacter* Player) {
}

void UPalArenaWorldSubsystem::ExitAllByInstanceId(const FGuid& ArenaInstanceId) {
}

void UPalArenaWorldSubsystem::AddGroupCharacter(UPalIndividualCharacterHandle* AddIndividualHandle) {
}


