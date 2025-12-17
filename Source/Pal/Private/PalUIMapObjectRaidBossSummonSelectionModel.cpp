#include "PalUIMapObjectRaidBossSummonSelectionModel.h"

UPalUIMapObjectRaidBossSummonSelectionModel::UPalUIMapObjectRaidBossSummonSelectionModel() {
}

void UPalUIMapObjectRaidBossSummonSelectionModel::SubmitSelectedInfo() {
}

void UPalUIMapObjectRaidBossSummonSelectionModel::SelectStoneItemId(const FName StoneItemId) {
}

void UPalUIMapObjectRaidBossSummonSelectionModel::SelectBattleType(const EPalRaidBossBattleType BattleType) {
}

FName UPalUIMapObjectRaidBossSummonSelectionModel::GetSelectedStoneItemId() const {
    return NAME_None;
}

EPalRaidBossBattleType UPalUIMapObjectRaidBossSummonSelectionModel::GetSelectedBattleType() const {
    return EPalRaidBossBattleType::None;
}

void UPalUIMapObjectRaidBossSummonSelectionModel::GetAvailableRaidBossStoneInfos(TArray<FPalUIRaidBossStoneInfo>& OutStoneInfos) const {
}


