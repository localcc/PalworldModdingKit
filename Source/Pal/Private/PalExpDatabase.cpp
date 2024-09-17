#include "PalExpDatabase.h"

UPalExpDatabase::UPalExpDatabase() {
    this->ExpDataTable = NULL;
    this->PaldexBonusExpDataTable = NULL;
}

int64 UPalExpDatabase::GetTotalExp(int32 Level, bool IsPlayer) {
    return 0;
}

int64 UPalExpDatabase::GetNextExp(int32 Level, bool IsPlayer) {
    return 0;
}

int64 UPalExpDatabase::GetDropExp(int32 Level, FName RowName) {
    return 0;
}

void UPalExpDatabase::DistributionExpValue_forPlayerParty_Server(int64 ExpValue, TArray<APalPlayerCharacter*> GiftPlayerList, bool isCallDelegate) {
}

int64 UPalExpDatabase::CalcPaldexBonusExp(const FName CharacterID, int32 CaptureCount, APalPlayerState* captureOwnerState) {
    return 0;
}

int64 UPalExpDatabase::CalcNeedLevelUpExp(int32 TotalEXP, bool IsPlayer) {
    return 0;
}

int32 UPalExpDatabase::CalcLevelFromTotalExp(int32 TotalEXP, bool IsPlayer) {
    return 0;
}

void UPalExpDatabase::AddExpValue_forPlayerParty_Server(int64 ExpValue, TArray<APalPlayerCharacter*> GiftPlayerList, bool isCallDelegate) {
}

void UPalExpDatabase::AddExp_forPlayerParty_TowerBoss(UPalIndividualCharacterHandle* DeadEnemyHandle, TArray<APalPlayerCharacter*> GiftPlayerList, bool isCallDelegate) {
}

void UPalExpDatabase::AddExp_forBaseCamp(UPalIndividualCharacterHandle* DeadEnemyHandle, UPalBaseCampModel* CampModel) {
}

void UPalExpDatabase::AddExp_EnemyDeath(FPalDeadInfo DeadInfo) {
}


