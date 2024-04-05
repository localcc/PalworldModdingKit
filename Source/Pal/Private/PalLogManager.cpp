#include "PalLogManager.h"

UPalLogManager::UPalLogManager() {
    this->normalLogDisplayTime = 5.00f;
    this->importantLogDisplayTime = 5.00f;
    this->veryImportantLogDisplayTime = 5.00f;
    this->DeathLogShortDisplayTime = 5.00f;
    this->DeathLogLongDisplayTime = 5.00f;
    this->staticLogCollectorClass = NULL;
    this->staticLogCollector = NULL;
}

bool UPalLogManager::RemoveVeryImportantLog(const FGuid& targetLogId) {
    return false;
}

FGuid UPalLogManager::AddLog(EPalLogPriority logPriority, const FText& LogText, const FPalLogAdditionalData& logAdditionalData) {
    return FGuid{};
}

void UPalLogManager::AddDeathLog(const FText& LogText, const TSoftObjectPtr<UTexture2D> Icon) {
}


