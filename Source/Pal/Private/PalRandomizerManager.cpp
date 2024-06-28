#include "PalRandomizerManager.h"

UPalRandomizerManager::UPalRandomizerManager() {
    this->bShouldCreate = true;
    this->PrerequisiteWorldSubsystemList.AddDefaulted(1);
}

void UPalRandomizerManager::OnChangeWorldSettings_ForClient(const FPalOptionWorldSettings& PrevSettings, const FPalOptionWorldSettings& NewSettings) {
}

TArray<FPalSpawnerGroupInfo> UPalRandomizerManager::GetRandomSpawnerGroupInfo(APalNPCSpawnerBase* spawnerActor) const {
    return TArray<FPalSpawnerGroupInfo>();
}

EPalRandomizerType UPalRandomizerManager::GetRandomizerType() const {
    return EPalRandomizerType::None;
}

UPalRandomizerManager* UPalRandomizerManager::GetRandomizerManagerFromContextObject(UObject* WorldContextObject) {
    return NULL;
}

bool UPalRandomizerManager::GetPaldexDistributionData(FName InPalName, FPalUIPaldexDistributionData& OutPaldexDestributionData) const {
    return false;
}

int32 UPalRandomizerManager::GetDungeonLevel(FName InSpawnerName) const {
    return 0;
}

float UPalRandomizerManager::GetCoolTime(FName InSpawnerName) const {
    return 0.0f;
}


