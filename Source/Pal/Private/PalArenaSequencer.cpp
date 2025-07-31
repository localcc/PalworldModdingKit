#include "PalArenaSequencer.h"
#include "PalArenaCharacterRefresher.h"

UPalArenaSequencer::UPalArenaSequencer() {
    this->IsBattlePlayerRemoved = false;
    this->bPlayerInfoInitialized = false;
    this->ArenaInstanceModel = NULL;
    this->CurrentSequence = NULL;
    this->CharacterRefresher = CreateDefaultSubobject<UPalArenaCharacterRefresher>(TEXT("CharacterRefresher"));
}

void UPalArenaSequencer::StartSequencer(const FPalArenaSequencerInitializeParameter& InitParameter) {
}

void UPalArenaSequencer::SetupStatusCharacter(UPalIndividualCharacterParameter* IndividualParameter) {
}

void UPalArenaSequencer::SetupBattleTimer() {
}

void UPalArenaSequencer::SetMutekiAllPlayer(bool bIsMuteki) {
}

void UPalArenaSequencer::SetEnablePlayerTemperatureComponent(EPalArenaPlayerIndex PlayerIndex, bool bEnable) {
}

void UPalArenaSequencer::SetDisableSkill(EPalArenaPlayerIndex PlayerIndex, bool bDisable) {
}

void UPalArenaSequencer::SetDisableGliderPal(EPalArenaPlayerIndex PlayerIndex, bool bDisable) {
}

void UPalArenaSequencer::RestoreStatusCharacter(UPalIndividualCharacterParameter* IndividualParameter) {
}

void UPalArenaSequencer::ResetHateAll() {
}

void UPalArenaSequencer::RequestExitSoloMode() {
}

FGuid UPalArenaSequencer::OpenPalSelectUI(FOnPalSelectedDelegate PalSelectedDelegate) {
    return FGuid{};
}

void UPalArenaSequencer::OnArenaSequenceEnd(UPalArenaSequenceBase* SequenceBase) {
}

bool UPalArenaSequencer::IsSoloMode() const {
    return false;
}

float UPalArenaSequencer::GetStartDelaySeconds() const {
    return 0.0f;
}

TArray<APalPlayerCharacter*> UPalArenaSequencer::GetSequencePlayers_ForServer() const {
    return TArray<APalPlayerCharacter*>();
}

EPalArenaPlayerIndex UPalArenaSequencer::GetPlayerIndex(const APalPlayerCharacter* Player) const {
    return EPalArenaPlayerIndex::None;
}

EPalArenaSequencerOwnerType UPalArenaSequencer::GetOwnerType() const {
    return EPalArenaSequencerOwnerType::None;
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

TArray<APalCharacter*> UPalArenaSequencer::GetCharacterAll() const {
    return TArray<APalCharacter*>();
}

TMap<EPalArenaPlayerIndex, FPalArenaPlayerInfo> UPalArenaSequencer::GetArenaPlayerInfoMap() const {
    return TMap<EPalArenaPlayerIndex, FPalArenaPlayerInfo>();
}

UPalArenaInstanceModel* UPalArenaSequencer::GetArenaInstanceModel() const {
    return NULL;
}


