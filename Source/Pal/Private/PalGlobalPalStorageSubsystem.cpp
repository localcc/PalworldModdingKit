#include "PalGlobalPalStorageSubsystem.h"

UPalGlobalPalStorageSubsystem::UPalGlobalPalStorageSubsystem() {
    this->IsLoadedData = false;
}

int32 UPalGlobalPalStorageSubsystem::GetFirstEmptySlotIndex(int32 RootSearchIndex) const {
    return 0;
}

int32 UPalGlobalPalStorageSubsystem::GetDataIndex(const FPalInstanceID& SearchInstanceID) const {
    return 0;
}

bool UPalGlobalPalStorageSubsystem::GetData(const int32 DataIndex, FPalGlobalPalStorageSaveParameter& OutData) const {
    return false;
}

bool UPalGlobalPalStorageSubsystem::GetAllData(TArray<FPalGlobalPalStorageSaveParameter>& OutArray) const {
    return false;
}

bool UPalGlobalPalStorageSubsystem::FindData(const FPalInstanceID& SearchInstanceID, FPalGlobalPalStorageSaveParameter& OutData) const {
    return false;
}

bool UPalGlobalPalStorageSubsystem::ExistData(const FPalInstanceID& SearchInstanceID) const {
    return false;
}

bool UPalGlobalPalStorageSubsystem::CanDuplication(const FPalIndividualCharacterSaveParameter& CheckParameter) const {
    return false;
}


