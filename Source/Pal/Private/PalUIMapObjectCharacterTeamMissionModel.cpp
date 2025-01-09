#include "PalUIMapObjectCharacterTeamMissionModel.h"

UPalUIMapObjectCharacterTeamMissionModel::UPalUIMapObjectCharacterTeamMissionModel() {
    this->Functions = NULL;
}

void UPalUIMapObjectCharacterTeamMissionModel::RequestUnselectAssignedCharacter(const FPalInstanceID& IndividualId) {
}

void UPalUIMapObjectCharacterTeamMissionModel::RequestUnselectAll() {
}

void UPalUIMapObjectCharacterTeamMissionModel::RequestStopReplication() {
}

void UPalUIMapObjectCharacterTeamMissionModel::RequestStartReplication() {
}

void UPalUIMapObjectCharacterTeamMissionModel::RequestStartMission() {
}

void UPalUIMapObjectCharacterTeamMissionModel::RequestSelectMission(const FName MissionId) {
}

void UPalUIMapObjectCharacterTeamMissionModel::RequestSelectAuto() {
}

void UPalUIMapObjectCharacterTeamMissionModel::RequestSelectAssignedCharacter(const FPalInstanceID& IndividualId) {
}

void UPalUIMapObjectCharacterTeamMissionModel::OnUpdateReleasedMissionInfo(UPalGuildCharacterTeamMission* OwnerGuildCharacterTeamMission) {
}

void UPalUIMapObjectCharacterTeamMissionModel::OnUpdatedCompleteDateTime(UPalMapObjectCharacterTeamMissionModel* OwnerConcreteModel) {
}

void UPalUIMapObjectCharacterTeamMissionModel::OnReplicatedAssignedInfo(UPalMapObjectCharacterTeamMissionModel* OwnerConcreteModel) {
}

void UPalUIMapObjectCharacterTeamMissionModel::OnPreReplicatedRemoveAssignedInfo(const FPalMapObjectCharacterTeamMissionIndividualRepInfo& RepInfo) {
}

void UPalUIMapObjectCharacterTeamMissionModel::OnPostReplicatedChangeAssignedInfo(const FPalMapObjectCharacterTeamMissionIndividualRepInfo& RepInfo) {
}

void UPalUIMapObjectCharacterTeamMissionModel::OnPostReplicatedAddAssignedInfo(const FPalMapObjectCharacterTeamMissionIndividualRepInfo& RepInfo) {
}

void UPalUIMapObjectCharacterTeamMissionModel::OnChangedTargetMission(UPalMapObjectCharacterTeamMissionModel* OwnerConcreteModel) {
}

void UPalUIMapObjectCharacterTeamMissionModel::OnChangedState(const EPalMapObjectCharacterTeamMissionState LastState, const EPalMapObjectCharacterTeamMissionState CurrentState) {
}

void UPalUIMapObjectCharacterTeamMissionModel::OnChangedAssignedInfo_ServerInternal(UPalMapObjectCharacterTeamMissionAssignedInfo* AssignedInfo) {
}

bool UPalUIMapObjectCharacterTeamMissionModel::MakeTransientAssignInfo(const FPalInstanceID& IndividualId, FPalUIMapObjectCharacterTeamMissionIndividual& OutAssignInfo) const {
    return false;
}

bool UPalUIMapObjectCharacterTeamMissionModel::IsMaxAssigned() const {
    return false;
}

bool UPalUIMapObjectCharacterTeamMissionModel::IsExistAssignInfo() const {
    return false;
}

void UPalUIMapObjectCharacterTeamMissionModel::GetSelectableMissionInfos(TArray<FPalCharacterTeamMissionInfo>& OutInfos) const {
}

float UPalUIMapObjectCharacterTeamMissionModel::GetRemainMissionSeconds() const {
    return 0.0f;
}

void UPalUIMapObjectCharacterTeamMissionModel::GetMissionInfo(const FName MissionId, FPalCharacterTeamMissionInfo& OutInfo) const {
}

FDateTime UPalUIMapObjectCharacterTeamMissionModel::GetInProgressMissionCompleteDateTime() const {
    return FDateTime{};
}

EPalMapObjectCharacterTeamMissionState UPalUIMapObjectCharacterTeamMissionModel::GetCurrentState() const {
    return EPalMapObjectCharacterTeamMissionState::None;
}

void UPalUIMapObjectCharacterTeamMissionModel::GetCurrentMissionInfo(FPalCharacterTeamMissionInfo& OutInfo) const {
}

void UPalUIMapObjectCharacterTeamMissionModel::GetCurrentElementalRequiredInfo(EPalElementType& OutRequiredElementType, int32& CurrentAssignedNum, int32& RequiredNum, bool& bSatisfiedCondition) const {
}

bool UPalUIMapObjectCharacterTeamMissionModel::GetConcreteModelInstanceId(FGuid& OutID) const {
    return false;
}

void UPalUIMapObjectCharacterTeamMissionModel::GetAssignedIndividualInfos(TArray<FPalUIMapObjectCharacterTeamMissionIndividual>& OutIndividualInfos) const {
}

bool UPalUIMapObjectCharacterTeamMissionModel::CanStartMission() const {
    return false;
}

float UPalUIMapObjectCharacterTeamMissionModel::CalculateCurrentRewardRate() const {
    return 0.0f;
}

int32 UPalUIMapObjectCharacterTeamMissionModel::CalculateCurrentMissionRequiredSecondsByTeamStrength(const int32 TeamStrength) const {
    return 0;
}

int32 UPalUIMapObjectCharacterTeamMissionModel::CalculateCurrentMissionRequiredSeconds() const {
    return 0;
}

int32 UPalUIMapObjectCharacterTeamMissionModel::CalculateCharacterTeamStrength() const {
    return 0;
}

int32 UPalUIMapObjectCharacterTeamMissionModel::CalculateCharacterStrength(const FPalInstanceID& IndividualId) const {
    return 0;
}


