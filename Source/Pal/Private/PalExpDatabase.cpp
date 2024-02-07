#include "PalExpDatabase.h"

UPalExpDatabase::UPalExpDatabase() {
    this->ExpDataTable = NULL;
    this->PaldexBonusExpDataTable = NULL;
}

int32 UPalExpDatabase::GetTotalExp(int32 Level, bool IsPlayer) {
    return 0;
}

int32 UPalExpDatabase::GetNextExp(int32 Level, bool IsPlayer) {
    return 0;
}

int32 UPalExpDatabase::GetDropExp(int32 Level, FName RowName) {
    return 0;
}

void UPalExpDatabase::DistributionExpValue_forPlayerParty_Server(int32 ExpValue, TArray<APalPlayerCharacter*> GiftPlayerList, bool isCallDelegate) {
}

int32 UPalExpDatabase::CalcPaldexBonusExp(const FName CharacterID, int32 CaptureCount, APalPlayerState* captureOwnerState) {
    return 0;
}

int32 UPalExpDatabase::CalcLevelFromTotalExp(int32 TotalEXP, bool IsPlayer) {
    return 0;
}

void UPalExpDatabase::AddExpValue_forPlayerParty_Server(int32 ExpValue, TArray<APalPlayerCharacter*> GiftPlayerList, bool isCallDelegate) {
}

void UPalExpDatabase::AddExp_forPlayerParty_TowerBoss(UPalIndividualCharacterHandle* DeadEnemyHandle, TArray<APalPlayerCharacter*> GiftPlayerList, bool isCallDelegate) {
}

void UPalExpDatabase::AddExp_forBaseCamp(UPalIndividualCharacterHandle* DeadEnemyHandle, UPalBaseCampModel* CampModel) {
}

void UPalExpDatabase::AddExp_EnemyDeath(FPalDeadInfo DeadInfo) {
}


