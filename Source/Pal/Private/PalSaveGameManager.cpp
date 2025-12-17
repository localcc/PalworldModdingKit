#include "PalSaveGameManager.h"

UPalSaveGameManager::UPalSaveGameManager() {
    this->DebugAutoSaveDisabler = NULL;
    this->bIsFoundWorldSaveData = false;
    this->bIsFoundLocalWorldSaveData = false;
    this->bIsFoundWorldOptionSaveData = false;
    this->bIsLoadedWorldSaveData = false;
    this->LoadedWorldSaveData = NULL;
    this->bIsLoadedLocalWorldSaveData = false;
    this->LoadedLocalWorldSaveData = NULL;
    this->bIsLoadedWorldOptionSaveData = false;
    this->LoadedWorldOptionSaveData = NULL;
    this->bLastSavedUsingMod = false;
    this->IsAppliedPlayerSaveData = false;
    this->bIsForceDisableAutoSave = false;
    this->bIsUseBackupSaveData = true;
    this->NearSaveBackupNum = 5;
    this->MinutesSaveBackupNum = 6;
    this->HourSaveBackupNum = 12;
    this->DaySaveBackupNum = 7;
    this->GDKMaxBackupSlotNum = 3;
    this->GDKBackupFrequency = 3;
}

void UPalSaveGameManager::StartWorldDataAutoSave() {
}

void UPalSaveGameManager::StartLocalWorldDataAutoSave() {
}

bool UPalSaveGameManager::OnFinishedWorldOptionAsyncSaveGamePreInternal(const FString& SlotName, const int32 UserIndex, bool bSuccess, const FString& WorldName, const FString& Timestamp) {
    return false;
}

bool UPalSaveGameManager::OnFinishedWorldAsyncSaveGamePreInternal(const FString& SlotName, const int32 UserIndex, bool bSuccess, const FString& WorldName, const FString& Timestamp) {
    return false;
}

void UPalSaveGameManager::OnFinishedWorldAsyncSaveGameInternal(const FString& SlotName, const int32 UserIndex, bool bSuccess, const FString& WorldName, const FString& Timestamp) {
}

bool UPalSaveGameManager::OnFinishedGlobalPalStorageAsyncSaveGamePreInternal(const FString& SlotName, const int32 UserIndex, bool bSuccess, const FString& SaveDataName, const FString& Timestamp) {
    return false;
}

bool UPalSaveGameManager::IsWorldAutoSaving() const {
    return false;
}

bool UPalSaveGameManager::IsValidWorldSaveDirectoryName_LocalData(const FString& WorldSaveDirectoryName) const {
    return false;
}

bool UPalSaveGameManager::IsValidWorldSaveDirectoryName(const FString& WorldSaveDirectoryName) const {
    return false;
}

bool UPalSaveGameManager::IsValidWorldData(const FString& WorldName) const {
    return false;
}

bool UPalSaveGameManager::IsValidLocalWorldData(const FString& WorldName) const {
    return false;
}

bool UPalSaveGameManager::IsLocalWorldAutoSaving() const {
    return false;
}

bool UPalSaveGameManager::IsLoadedWorldOptionData() const {
    return false;
}

bool UPalSaveGameManager::IsLoadedWorldData() const {
    return false;
}

bool UPalSaveGameManager::IsLoadedLocalWorldData() const {
    return false;
}

bool UPalSaveGameManager::IsExistSocialId(FSocialId ID) {
    return false;
}

void UPalSaveGameManager::IsAutoSaving(bool& OutValue) const {
}

bool UPalSaveGameManager::IsAppliedPlayerData() {
    return false;
}

TArray<FString> UPalSaveGameManager::GetWorldNames() const {
    return TArray<FString>();
}

TMap<FString, FPalWorldBaseInfoData> UPalSaveGameManager::GetWorldBaseInfoMap() const {
    return TMap<FString, FPalWorldBaseInfoData>();
}

int32 UPalSaveGameManager::GetMaxWorldSaveDataNum() const {
    return 0;
}

UPalWorldSaveGame* UPalSaveGameManager::GetLoadedWorldSaveData() const {
    return NULL;
}

UPalWorldOptionSaveGame* UPalSaveGameManager::GetLoadedWorldOptionSaveData() const {
    return NULL;
}

UPalLocalWorldSaveGame* UPalSaveGameManager::GetLoadedLocalWorldSaveData() const {
    return NULL;
}

bool UPalSaveGameManager::ForceLoadPerformanceChecktWorld() const {
    return false;
}

void UPalSaveGameManager::ClearAutoSaveEvents() {
}


