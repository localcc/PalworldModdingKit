#include "PalPlayerRecordDataUtility.h"

UPalPlayerRecordDataUtility::UPalPlayerRecordDataUtility() {
}

void UPalPlayerRecordDataUtility::SetRecordData_TribeIdFlag_ForServer(const UObject* WorldContextObject, FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal& RecordData, const EPalTribeID Key) {
}

void UPalPlayerRecordDataUtility::SetRecordData_TribeIdCount_ForServer(const UObject* WorldContextObject, FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal& RecordData, const EPalTribeID Key, const int32 Value) {
}

void UPalPlayerRecordDataUtility::SetRecordData_RankMaxCount_ForServer(const UObject* WorldContextObject, const FGuid RequestPlayerUId, int32 OldRank, int32 ToRank) {
}

void UPalPlayerRecordDataUtility::SetRecordData_Int_ForServer(const UObject* WorldContextObject, FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal& RecordData, const FName Key, const int32 Value) {
}

void UPalPlayerRecordDataUtility::SetRecordData_BossDefeatCount_ForServer(const UObject* WorldContextObject, FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal& RecordData, const EPalBossType BossType, const EPalBossBattleDifficulty Difficulty, const int32 Value) {
}

void UPalPlayerRecordDataUtility::SetRecordData_BossDefeat_ForServer(const UObject* WorldContextObject, FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal& RecordData, const EPalBossType Key) {
}

void UPalPlayerRecordDataUtility::SetRecordData_Bool_ForServer(const UObject* WorldContextObject, FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal& RecordData, const FName Key, const bool bValue) {
}

void UPalPlayerRecordDataUtility::SetRecordData_ArenaSoloClearCount_ForServer(const UObject* WorldContextObject, FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal& RecordData, const EPalArenaRank Rank, const int32 Value) {
}

bool UPalPlayerRecordDataUtility::GetRecordData_TribeIdFlag(const FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal& RecordData, const EPalTribeID Key) {
    return false;
}

int32 UPalPlayerRecordDataUtility::GetRecordData_TribeIdCount(const FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal& RecordData, const EPalTribeID Key) {
    return 0;
}

int32 UPalPlayerRecordDataUtility::GetRecordData_Int(const FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal& RecordData, const FName Key) {
    return 0;
}

int32 UPalPlayerRecordDataUtility::GetRecordData_BossDefeatCount(const FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal& RecordData, const EPalBossType Key, const EPalBossBattleDifficulty Difficulty) {
    return 0;
}

int32 UPalPlayerRecordDataUtility::GetRecordData_BossDefeat(const FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal& RecordData, const EPalBossType Key) {
    return 0;
}

int32 UPalPlayerRecordDataUtility::GetRecordData_BoolCount(const FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal& RecordData) {
    return 0;
}

bool UPalPlayerRecordDataUtility::GetRecordData_Bool(const FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal& RecordData, const FName Key) {
    return false;
}

int32 UPalPlayerRecordDataUtility::GetRecordData_ArenaSoloClearCount(const FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal& RecordData, const EPalArenaRank Rank) {
    return 0;
}

bool UPalPlayerRecordDataUtility::ContainsRecordData_TribeIdCount(const FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal& RecordData, const EPalTribeID Key) {
    return false;
}


