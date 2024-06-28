#include "PalBossBattleInstanceModel.h"
#include "Net/UnrealNetwork.h"

UPalBossBattleInstanceModel::UPalBossBattleInstanceModel() {
    this->BossType = EPalBossType::None;
    this->Level = 1;
    this->CombatTimeMax = 0;
    this->BossBattleLevelInstance = NULL;
    this->BossTower = NULL;
    this->BossBattleState = EPalBossBattleState::Open;
    this->LocalBattleSequencer = NULL;
    this->Difficulty = EPalBossBattleDifficulty::Normal;
    this->ReservedDataLayerAsset = NULL;
}

void UPalBossBattleInstanceModel::OnUpdateCombatTimeLimit() {
}

void UPalBossBattleInstanceModel::OnUpdateBossBattleState() {
}

void UPalBossBattleInstanceModel::OnRep_EntryPlayers() {
}

void UPalBossBattleInstanceModel::OnRep_CombatTimeLimit() {
}

void UPalBossBattleInstanceModel::OnRep_BossBattleState() {
}

void UPalBossBattleInstanceModel::OnRep_BossBattleLevelInstance() {
}

bool UPalBossBattleInstanceModel::IsLevelInstanceLoaded() const {
    return false;
}

void UPalBossBattleInstanceModel::GiftSuccessItem_OnePlayer(APalPlayerCharacter* Player) {
}

int32 UPalBossBattleInstanceModel::GetLevel() const {
    return 0;
}

EPalBossType UPalBossBattleInstanceModel::GetBossType() const {
    return EPalBossType::None;
}

EPalBossBattleState UPalBossBattleInstanceModel::GetBossBattleState() const {
    return EPalBossBattleState::Open;
}

void UPalBossBattleInstanceModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBossBattleInstanceModel, RepFrontWarpPointtLocation);
    DOREPLIFETIME(UPalBossBattleInstanceModel, BossType);
    DOREPLIFETIME(UPalBossBattleInstanceModel, IntroCutsceneActor);
    DOREPLIFETIME(UPalBossBattleInstanceModel, BGMAudioEvent);
    DOREPLIFETIME(UPalBossBattleInstanceModel, Level);
    DOREPLIFETIME(UPalBossBattleInstanceModel, BossBattleLevelInstance);
    DOREPLIFETIME(UPalBossBattleInstanceModel, BossTower);
    DOREPLIFETIME(UPalBossBattleInstanceModel, BossBattleState);
    DOREPLIFETIME(UPalBossBattleInstanceModel, EntryPlayers);
    DOREPLIFETIME(UPalBossBattleInstanceModel, CombatTimeLimit);
    DOREPLIFETIME(UPalBossBattleInstanceModel, Difficulty);
}


