#include "PalMapObjectCharacterTeamMissionModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectCharacterTeamMissionModel::UPalMapObjectCharacterTeamMissionModel() {
    this->AssignedInfo = NULL;
    this->State = EPalMapObjectCharacterTeamMissionState::None;
    this->MissionSelectUI = NULL;
    this->BlueprintFunctionClass = NULL;
}

void UPalMapObjectCharacterTeamMissionModel::RequestUnselectAssignedCharacter_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectCharacterTeamMissionModel::RequestUnselectAll_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectCharacterTeamMissionModel::RequestStartMission_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectCharacterTeamMissionModel::RequestSelectMission_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectCharacterTeamMissionModel::RequestSelectAuto_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectCharacterTeamMissionModel::RequestSelectAssignedCharacter_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectCharacterTeamMissionModel::RequestCancelInProgressMission_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectCharacterTeamMissionModel::OnUpdateItemContainerContents_ServerInternal(UPalMapObjectItemContainerModule* Module) {
}

void UPalMapObjectCharacterTeamMissionModel::OnRep_TargetMissionId(const FName OldValue) {
}

void UPalMapObjectCharacterTeamMissionModel::OnRep_State(const EPalMapObjectCharacterTeamMissionState OldValue) {
}

void UPalMapObjectCharacterTeamMissionModel::OnRep_MissionCompleteDateTime(const FDateTime OldValue) {
}

void UPalMapObjectCharacterTeamMissionModel::OnRep_AssignedInfo() {
}

void UPalMapObjectCharacterTeamMissionModel::OnExitPlayerGuild_ServerInternal(const UPalGroupGuildBase* Guild, const FGuid& PlayerUId) {
}

void UPalMapObjectCharacterTeamMissionModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectCharacterTeamMissionModel, TargetMissionId);
    DOREPLIFETIME(UPalMapObjectCharacterTeamMissionModel, AssignedInfo);
    DOREPLIFETIME(UPalMapObjectCharacterTeamMissionModel, State);
    DOREPLIFETIME(UPalMapObjectCharacterTeamMissionModel, MissionStartDateTime);
    DOREPLIFETIME(UPalMapObjectCharacterTeamMissionModel, MissionCompleteDateTime);
}


