#include "PalSupplyManager.h"

UPalSupplyManager::UPalSupplyManager() {
    this->bShouldCreate = true;
    this->PrerequisiteWorldSubsystemList.AddDefaulted(1);
    this->LotteryRate = 0.50f;
    this->bDebugFullRate = false;
    this->DebugSupplyType = EPalSupplyType::None;
    this->SpawnPalSeconds = 0;
    this->SpawnNPCSeconds = 60;
    this->SpawnDistanceLimit = 20000.00f;
    this->BroadcastLogDistanceLimit = 40000.00f;
    this->LotteryCoolDownSeconds = 600;
    this->SupplyTotalFallSeconds = 60;
    this->SupplyDespawnSeconds = 600;
    this->SupplyCapsuleDropClass = NULL;
    this->SupplyMeteorDropClass = NULL;
}

void UPalSupplyManager::OnChangeWorldSettings(const FPalOptionWorldSettings& PrevSettings, const FPalOptionWorldSettings& NewSettings) {
}

UPalSupplySpawnerData* UPalSupplyManager::GetSupplySpawnerFromIncidentSpawner(APalRandomIncidentSpawnerBase* IncidentSpawner) const {
    return NULL;
}

UPalSupplySpawnerData* UPalSupplyManager::GetSupplySpawnerDataFromID(FGuid ID) const {
    return NULL;
}

TArray<UPalSupplySpawnerData*> UPalSupplyManager::GetSupplySpawnerData() const {
    return TArray<UPalSupplySpawnerData*>();
}

UPalSupplySpawnerData* UPalSupplyManager::GetSupplySpawnerByIncidentSpawner(APalRandomIncidentSpawnerBase* SpawnerBase, bool bIsPalSpawner) const {
    return NULL;
}

APalRandomIncidentSpawnerBase* UPalSupplyManager::GetIncidentSpawnerByID(FGuid ID, bool bPalSpawner) {
    return NULL;
}

APalRandomIncidentSpawnerBase* UPalSupplyManager::GetIncidentSpawner(UPalSupplySpawnerData* InSpawner, bool bPalSpawner) {
    return NULL;
}

UPalSupplySpawnerData* UPalSupplyManager::CreateSupplySpawnerData() {
    return NULL;
}

void UPalSupplyManager::CompleteIncident(bool bIsPalSpawner, APalRandomIncidentSpawnerBase* SpawnerBase) {
}


