#include "PalBattleManager.h"

UPalBattleManager::UPalBattleManager() {
    this->DebugSpawnerClass = NULL;
}

bool UPalBattleManager::TargetIsPlayerOrPlayersOtomoPal(AActor* TargetCharacter) {
    return false;
}

void UPalBattleManager::SoundReactionStart(APalCharacter* SelfCharacter) {
}

void UPalBattleManager::SetUpPlayerMap(AActor* Player) {
}

void UPalBattleManager::RemovePlayerMap(AActor* Player) {
}

void UPalBattleManager::RemoveEnemyActor_AllPlayer(AActor* Enemy, EPalPlayerBattleFinishType FinishType) {
}

void UPalBattleManager::RemoveEnemyActor(AActor* Player, AActor* Enemy, EPalPlayerBattleFinishType FinishType) {
}

bool UPalBattleManager::IsBattleModeAnyPlayer() {
    return false;
}

AActor* UPalBattleManager::GetRandomActor(TArray<AActor*> targetList) {
    return NULL;
}

AActor* UPalBattleManager::GetNearestActor(TArray<AActor*> targetList, FVector Location) {
    return NULL;
}

bool UPalBattleManager::GetConflictEnemies(AActor* Player, TArray<AActor*>& OutEnemyes, bool IgnoreOtomoStopByBall) {
    return false;
}

void UPalBattleManager::GetAllPlayerAndOtomo_ForEnemySelf(TArray<AActor*> TargetPlayers, TArray<AActor*>& OutCharacters) {
}

void UPalBattleManager::EnemyNearPlayerListUpdate(AActor* Enemy, float Distance) {
}

void UPalBattleManager::EmitSound(FName SoundRowName, AActor* Emitter, FVector EmitLocation, float VolumeRate) {
}

void UPalBattleManager::AddEnemyActor_PlayerOrOtomo(AActor* PlayerOrOtomo, AActor* Enemy) {
}

void UPalBattleManager::ActionMenaceStart(APalCharacter* SelfCharacter) {
}


