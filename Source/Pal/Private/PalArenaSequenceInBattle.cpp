#include "PalArenaSequenceInBattle.h"

UPalArenaSequenceInBattle::UPalArenaSequenceInBattle() {
    this->OutAreaChecker = NULL;
}

void UPalArenaSequenceInBattle::SetupPalHate() {
}

void UPalArenaSequenceInBattle::ResetPalHate() {
}

void UPalArenaSequenceInBattle::OnEndSequence_Implementation() {
}

void UPalArenaSequenceInBattle::OnBeginSequence_Implementation() {
}

bool UPalArenaSequenceInBattle::IsPlayerLose(EPalArenaPlayerIndex PlayerIndex) {
    return false;
}

int32 UPalArenaSequenceInBattle::GetAlivePalNum(EPalArenaPlayerIndex PlayerIndex) {
    return 0;
}

bool UPalArenaSequenceInBattle::CheckBattleResult(bool bIsTimeup) {
    return false;
}


