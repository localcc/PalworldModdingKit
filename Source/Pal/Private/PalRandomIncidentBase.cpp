#include "PalRandomIncidentBase.h"

UPalRandomIncidentBase::UPalRandomIncidentBase() {
    this->bIsFinishWithIncidentSpawner = true;
    this->PrevEnterArea = EPalRandomIncidentSpawnerAreaType::Unknown;
}

void UPalRandomIncidentBase::SetDisableFlagForNPCSpawner(const FVector& Center, float Radius, const FName& Name, bool isDisable) {
}

bool UPalRandomIncidentBase::IsOutbreakTable(const UDataTable* Table) {
    return false;
}

bool UPalRandomIncidentBase::IsFinishWithIncidentSpawner() const {
    return false;
}

int32 UPalRandomIncidentBase::GetPlayerId() const {
    return 0;
}


void UPalRandomIncidentBase::CreateSpawnMonsterDataListFromOutbreakRow(const UDataTable* Table, TArray<FPalRandomIncidentSpawnMonsterData>& OutMonsterList, TArray<FName>& Names) {
}

void UPalRandomIncidentBase::BroadcastOnEnterAreaAndOnExitArea(int32 PlayerId) {
}


