#include "PalSupplySpawnerData.h"
#include "Net/UnrealNetwork.h"

UPalSupplySpawnerData::UPalSupplySpawnerData() {
    this->IncidentPalClass = NULL;
    this->IncidentNPCClass = NULL;
    this->SpawnHeight = 100000.00f;
    this->MeteorPieceHeight = 20.00f;
    this->MeteorPieceRandomMinRange = 300.00f;
    this->MeteorPieceRandomMaxRange = 600.00f;
    this->SafeAreaRadius = 150.00f;
    this->ForceSupplyType = EPalSupplyType::None;
    this->bDebugDrawSupplyLimitArea = false;
    this->PalIncidentSpawner = NULL;
    this->NPCIncidentSpawner = NULL;
    this->PalSpawner = NULL;
    this->NPCSpawner = NULL;
    this->DropActor = NULL;
}

void UPalSupplySpawnerData::RegisterNPCSpawner(APalNPCSpawnerBase* InSpawner, bool bPalSpawner) {
}

void UPalSupplySpawnerData::PieceSpawned(FGuid ItemGuid, EPalMapObjectOperationResult Result) {
}

void UPalSupplySpawnerData::OnFinishedSpawningMapObjectModel(FGuid InstanceId, const EPalMapObjectOperationResult Result) {
}

void UPalSupplySpawnerData::OnDestroyedMapObject(AActor* DestroyActor) {
}

void UPalSupplySpawnerData::BroadcastSupplyStart_Implementation(FPalSupplyInfo Info, FTransform InLocationTransform, float DistanceLimit) {
}

void UPalSupplySpawnerData::BroadcastSupplyEnd_Implementation(FPalSupplyInfo Info, FTransform InLocationTransform, float DistanceLimit) {
}

void UPalSupplySpawnerData::BroadcastDestroyDropActor_Implementation(FGuid InSupplyMapObjectId, bool bForceDestroy) {
}

void UPalSupplySpawnerData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalSupplySpawnerData, DropActor);
    DOREPLIFETIME(UPalSupplySpawnerData, LevelObjectInstanceId);
    DOREPLIFETIME(UPalSupplySpawnerData, Transform);
}


