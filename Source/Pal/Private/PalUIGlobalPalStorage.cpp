#include "PalUIGlobalPalStorage.h"

UPalUIGlobalPalStorage::UPalUIGlobalPalStorage() {
}

bool UPalUIGlobalPalStorage::ToggleFavorite(UPalIndividualCharacterSlot* TargetSlot) {
    return false;
}

bool UPalUIGlobalPalStorage::ShouldShowPopup() const {
    return false;
}

void UPalUIGlobalPalStorage::SelectSlot(UPalIndividualCharacterSlot* SelectedSlot) {
}

bool UPalUIGlobalPalStorage::SaveGPSDataAsync() {
    return false;
}

void UPalUIGlobalPalStorage::RegisterGPSLocalContainerId(const FPalContainerId& InLocalContainerId) {
}



bool UPalUIGlobalPalStorage::LoadGPSData() {
    return false;
}

bool UPalUIGlobalPalStorage::IsInGamePalStorageSlot(UPalIndividualCharacterSlot* TargetSlot) const {
    return false;
}

bool UPalUIGlobalPalStorage::IsGPSSlot(UPalIndividualCharacterSlot* TargetSlot) const {
    return false;
}

void UPalUIGlobalPalStorage::ImportGPSDataToEmptySlot(int32 ImportGPSDataIndex, const FPalGlobalPalStorageImportOption& ImportOption, int32 RootImportPalBoxPage) {
}

void UPalUIGlobalPalStorage::ImportGPSData(int32 ImportGPSDataIndex, int32 TargetSlotIndex, const FPalGlobalPalStorageImportOption& ImportOption) {
}



void UPalUIGlobalPalStorage::ExportGPSDataToEmptySlot(UPalIndividualCharacterSlot* TargetSlot, const FPalGlobalPalStorageExportOption& ExportOption, int32 RootSearchPageNum) {
}

void UPalUIGlobalPalStorage::ExportGPSData(UPalIndividualCharacterSlot* TargetSlot, int32 ExportDataIndex, const FPalGlobalPalStorageExportOption& ExportOption) {
}

void UPalUIGlobalPalStorage::DeleteGPSData(const TArray<FPalInstanceID>& RemoveInstanceIDArray) {
}


