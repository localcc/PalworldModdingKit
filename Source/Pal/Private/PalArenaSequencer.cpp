#include "PalArenaSequencer.h"
#include "PalArenaCharacterRefresher.h"

UPalArenaSequencer::UPalArenaSequencer() {
    this->BattleResult = EPalArenaBattleResult::None;
    this->IsBattlePlayerRemoved = false;
    this->ArenaInstanceModel = NULL;
    this->CurrentSequence = NULL;
    this->CharacterRefresher = CreateDefaultSubobject<UPalArenaCharacterRefresher>(TEXT("CharacterRefresher"));
    this->bIsClientOnly = false;
}

void UPalArenaSequencer::SetupStatusCharacter(UPalIndividualCharacterParameter* IndividualParameter) {
}

void UPalArenaSequencer::SetDisableNotSelectedOtomo(EPalArenaPlayerIndex PlayerIndex, bool bDisable) {
}

void UPalArenaSequencer::SetDisableGliderPal(EPalArenaPlayerIndex PlayerIndex, bool bDisable) {
}

void UPalArenaSequencer::RestoreStatusCharacter(UPalIndividualCharacterParameter* IndividualParameter) {
}

FGuid UPalArenaSequencer::OpenPalSelectUI(FOnPalSelectedDelegate PalSelectedDelegate) {
    return FGuid{};
}

void UPalArenaSequencer::OnArenaSequenceEnd(UPalArenaSequenceBase* SequenceBase) {
}

bool UPalArenaSequencer::IsClientOnly() const {
    return false;
}

TArray<APalPlayerCharacter*> UPalArenaSequencer::GetSequencePlayers_ForServer() const {
    return TArray<APalPlayerCharacter*>();
}

EPalArenaPlayerIndex UPalArenaSequencer::GetPlayerIndex(const APalPlayerCharacter* Player) const {
    return EPalArenaPlayerIndex::None;
}

EPalArenaPlayerIndex UPalArenaSequencer::GetLocalPlayerIndex() const {
    return EPalArenaPlayerIndex::None;
}

TArray<APalCharacter*> UPalArenaSequencer::GetInBattleCharacterAll() const {
    return TArray<APalCharacter*>();
}

TArray<UPalIndividualCharacterHandle*> UPalArenaSequencer::GetInArenaPlayerHandles() const {
    return TArray<UPalIndividualCharacterHandle*>();
}

UPalArenaSequenceBase* UPalArenaSequencer::GetCurrentSequence() const {
    return NULL;
}

TMap<EPalArenaPlayerIndex, FPalArenaPlayerInfo> UPalArenaSequencer::GetArenaPlayerInfoMap() const {
    return TMap<EPalArenaPlayerIndex, FPalArenaPlayerInfo>();
}

UPalArenaInstanceModel* UPalArenaSequencer::GetArenaInstanceModel() const {
    return NULL;
}


