#include "PalRaidBossManager.h"

UPalRaidBossManager::UPalRaidBossManager() {
    this->RaidBossDataTable = NULL;
    this->TimeLimit = 600.00f;
    this->BattleAreaRadius = 0.00f;
    this->NPCTargetCount_ForForcePlayerTarget = 3;
    this->RaidBossBattleActorClass = NULL;
}

bool UPalRaidBossManager::IsRaidBossOfferItem(FName ItemName) {
    return false;
}

int32 UPalRaidBossManager::GetNPCTargetCount_ForForcePlayerTarget() const {
    return 0;
}

UPalRaidBossComponent* UPalRaidBossManager::FindRaidComponent_ByBuildObject(APalMapObject* BuildObject) {
    return NULL;
}

UPalRaidBossComponent* UPalRaidBossManager::FindRaidComponent(FGuid BaseCampId) {
    return NULL;
}

FPalRaidBossSpawnInfo UPalRaidBossManager::FindRaidBossInfoByCharacterID(FName CharacterID) {
    return FPalRaidBossSpawnInfo{};
}

FPalRaidBossDataRow UPalRaidBossManager::FindRaidBossData(FName ItemName) const {
    return FPalRaidBossDataRow{};
}


