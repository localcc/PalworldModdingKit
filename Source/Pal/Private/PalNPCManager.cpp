#include "PalNPCManager.h"
#include "Templates/SubclassOf.h"

UPalNPCManager::UPalNPCManager() {
    this->AIOnNavMeshFilterClass = NULL;
    this->DrinkWaterSpotProvider = NULL;
    this->NPCAIControllerBaseClass = NULL;
    this->UniqueNPCDataTable = NULL;
    this->NPCOneTalkDataTable = NULL;
    this->NPCMultiTalkDataTable = NULL;
}

void UPalNPCManager::SpawNPCCallback(FPalInstanceID ID) {
}

UPalIndividualCharacterHandle* UPalNPCManager::SpawnNPCForServer(FPalNPCSpawnInfo SpawnInfo, UPalNPCManager::FNPCSpawnCallback spawnCallback) {
    return NULL;
}

void UPalNPCManager::SetEnemyCampStatus(FName KeyName, FPalEnemyCampStatus EnemyCampStatus) {
}

void UPalNPCManager::RemoveGroupWhenDestoryActor(AActor* DestoryActor) {
}

bool UPalNPCManager::IsTalkable(APalCharacter* Character) {
    return false;
}

EPalNPCTalkUIType UPalNPCManager::GetTalkUIType(APalCharacter* Character) {
    return EPalNPCTalkUIType::None;
}

UDataTable* UPalNPCManager::GetNPCTalkDTFromTalkUIType(EPalNPCTalkUIType TalkUIType) {
    return NULL;
}

UDataTable* UPalNPCManager::GetNPCOneTalkDTFromTalkId(FName TalkId) {
    return NULL;
}

UDataTable* UPalNPCManager::GetNPCOneTalkDTFromCharacter(APalCharacter* Character) {
    return NULL;
}

TSubclassOf<UPalNPCMultiTalkHandle> UPalNPCManager::GetNPCMultiTalkClassFromTalkId(FName TalkId) {
    return NULL;
}

TSubclassOf<UPalNPCMultiTalkHandle> UPalNPCManager::GetNPCMultiTalkClass(APalCharacter* Character) {
    return NULL;
}

UDataTable* UPalNPCManager::GetNPCCharacterTalkDT(FName CharacterID) {
    return NULL;
}

FPalEnemyCampStatus UPalNPCManager::GetEnemyCampStatus(FName KeyName) const {
    return FPalEnemyCampStatus{};
}

UPalWildPalDrinkWaterSpotProvider* UPalNPCManager::GetDrinkWaterSpotProvider() {
    return NULL;
}

FName UPalNPCManager::GetCharacterIDFromCharacterIDAndUniqueNPCID(FName CharacterID, FName UniqueNPCID) {
    return NAME_None;
}

void UPalNPCManager::AllResetBossRespawnFlag() {
}


