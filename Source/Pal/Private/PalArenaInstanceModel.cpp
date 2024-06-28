#include "PalArenaInstanceModel.h"
#include "Net/UnrealNetwork.h"

UPalArenaInstanceModel::UPalArenaInstanceModel() {
    this->ArenaInstanceState = EPalArenaInstanceState::Open;
    this->LocalArenaSequencer = NULL;
    this->ReservedDataLayerAsset = NULL;
    this->InBattleTime = 0;
}

void UPalArenaInstanceModel::StartInBattleTimer_ServerInternal() {
}

bool UPalArenaInstanceModel::IsLoaded_ForClient() const {
    return false;
}

FVector UPalArenaInstanceModel::GetFieldWarpPointLocation() const {
    return FVector{};
}

APalArenaLevelInstance* UPalArenaInstanceModel::GetArenaLevelInstance() const {
    return NULL;
}

EPalArenaInstanceState UPalArenaInstanceModel::GetArenaInstanceState() const {
    return EPalArenaInstanceState::Open;
}

void UPalArenaInstanceModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalArenaInstanceModel, ArenaInstanceId);
    DOREPLIFETIME(UPalArenaInstanceModel, RepFieldWarpPointLocation);
    DOREPLIFETIME(UPalArenaInstanceModel, StageInstanceId);
    DOREPLIFETIME(UPalArenaInstanceModel, BattleEndTime);
    DOREPLIFETIME(UPalArenaInstanceModel, ArenaInstanceState);
    DOREPLIFETIME(UPalArenaInstanceModel, WeakArenaLevelInstance);
}


