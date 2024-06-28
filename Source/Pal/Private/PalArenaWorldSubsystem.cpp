#include "PalArenaWorldSubsystem.h"

UPalArenaWorldSubsystem::UPalArenaWorldSubsystem() {
    this->ArenaSequencerClass = NULL;
    this->InBattleTime = 600;
    this->ArenaEntrance = NULL;
}

void UPalArenaWorldSubsystem::RequestCancelEntryArena(APalPlayerCharacter* CancelPlayer) {
}

void UPalArenaWorldSubsystem::OnChangeBattleEndTime_ServerInternal(FDateTime BattleEndTime) {
}

int32 UPalArenaWorldSubsystem::GetArenaBattleTime() {
    return 0;
}

void UPalArenaWorldSubsystem::ForceStageExitAll() {
}

void UPalArenaWorldSubsystem::ExitArena(APalPlayerCharacter* Player) {
}


