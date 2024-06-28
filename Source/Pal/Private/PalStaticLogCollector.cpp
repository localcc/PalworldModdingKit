#include "PalStaticLogCollector.h"

UPalStaticLogCollector::UPalStaticLogCollector() {
    this->targetLogManager = NULL;
}


void UPalStaticLogCollector::OnReadyPlayerInventoryData(UPalPlayerDataStorage* PlayerDataStorage) {
}

void UPalStaticLogCollector::OnOverWeightInventory(float NowWeight) {
}

void UPalStaticLogCollector::OnFixedWeightInventory(float NowWeight) {
}

void UPalStaticLogCollector::OnEndedWorldAutoSave(bool IsSuccess) {
}


