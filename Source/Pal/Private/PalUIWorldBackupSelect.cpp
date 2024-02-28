#include "PalUIWorldBackupSelect.h"

UPalUIWorldBackupSelect::UPalUIWorldBackupSelect() {
}

EPalSaveDataRestoreResultType UPalUIWorldBackupSelect::RestoreSaveData(const FString& SelectedBackupDirectoryName) {
    return EPalSaveDataRestoreResultType::Success_AllSave;
}

void UPalUIWorldBackupSelect::GetBackupDisplayData(TArray<FPalUIBackupSaveDisplayData>& OutDisplayData) {
}


