#include "PalArenaInstanceModel.h"
#include "Net/UnrealNetwork.h"

UPalArenaInstanceModel::UPalArenaInstanceModel() {
    this->ArenaInstanceState = EPalArenaInstanceState::Open;
    this->LocalArenaSequencer = NULL;
    this->LocalArenaSpectateSequencer = NULL;
    this->SoloModeRank = EPalArenaRank::Bronze;
    this->SoloNPCSpawner = NULL;
    this->ReservedDataLayerAsset = NULL;
    this->InBattleTime = 0;
}

void UPalArenaInstanceModel::StartInBattleTimer_ServerInternal() {
}

void UPalArenaInstanceModel::OnRep_AllIndividualCharacterParameters() {
}

bool UPalArenaInstanceModel::IsLoaded_ForClient() const {
    return false;
}

FVector UPalArenaInstanceModel::GetFieldWarpPointLocation() const {
    return FVector{};
}

FPalArenaRule UPalArenaInstanceModel::GetArenaRule() const {
    return FPalArenaRule{};
}

FGuid UPalArenaInstanceModel::GetArenaRoomId() const {
    return FGuid{};
}

APalArenaLevelInstance* UPalArenaInstanceModel::GetArenaLevelInstance() const {
    return NULL;
}

EPalArenaInstanceState UPalArenaInstanceModel::GetArenaInstanceState() const {
    return EPalArenaInstanceState::Open;
}

FGuid UPalArenaInstanceModel::GetArenaInstanceId() const {
    return FGuid{};
}

void UPalArenaInstanceModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalArenaInstanceModel, ArenaInstanceId);
    DOREPLIFETIME(UPalArenaInstanceModel, RepFieldWarpPointLocation);
    DOREPLIFETIME(UPalArenaInstanceModel, StageInstanceId);
    DOREPLIFETIME(UPalArenaInstanceModel, BattleEndTime);
    DOREPLIFETIME(UPalArenaInstanceModel, ArenaInstanceState);
    DOREPLIFETIME(UPalArenaInstanceModel, WeakArenaLevelInstance);
    DOREPLIFETIME(UPalArenaInstanceModel, Rule);
    DOREPLIFETIME(UPalArenaInstanceModel, AllIndividualCharacterParameters);
}


