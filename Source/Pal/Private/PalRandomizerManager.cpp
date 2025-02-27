#include "PalRandomizerManager.h"

UPalRandomizerManager::UPalRandomizerManager() {
    this->bShouldCreate = true;
    this->PrerequisiteWorldSubsystemList.AddDefaulted(1);
}

void UPalRandomizerManager::OnChangeWorldSettings_ForClient(const FPalOptionWorldSettings& PrevSettings, const FPalOptionWorldSettings& NewSettings) {
}

bool UPalRandomizerManager::IsRandomizerPalLevelRandom() const {
    return false;
}

bool UPalRandomizerManager::IsInitializedRandomizer() const {
    return false;
}

TArray<FPalSpawnerGroupInfo> UPalRandomizerManager::GetRandomSpawnerGroupInfoFromActor(APalNPCSpawnerBase* spawnerActor) const {
    return TArray<FPalSpawnerGroupInfo>();
}

bool UPalRandomizerManager::GetRandomSpawnerGroupInfo(FName InSpawnerName, const FString& InInstanceName, TArray<FPalSpawnerGroupInfo>& OutGroupInfo) const {
    return false;
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

FName UPalRandomizerManager::GetImprisonmentBossRemap(FName InSpawnerName) const {
    return NAME_None;
}

FName UPalRandomizerManager::GetFieldBossRemap(FName InSpawnerName) const {
    return NAME_None;
}

int32 UPalRandomizerManager::GetDungeonLevel(FName InSpawnerName) const {
    return 0;
}

float UPalRandomizerManager::GetCoolTime(FName InSpawnerName) const {
    return 0.0f;
}

FName UPalRandomizerManager::GetBossRemap(FName InSpawnerName) const {
    return NAME_None;
}


