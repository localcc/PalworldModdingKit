#include "PalUIBaseCampWorkFixedAssignManageModel.h"

UPalUIBaseCampWorkFixedAssignManageModel::UPalUIBaseCampWorkFixedAssignManageModel() {
}

void UPalUIBaseCampWorkFixedAssignManageModel::SortFixedAssignableWorks(EPalUIFixedAssignManageListSortType SortType, const TArray<FPalUIBaseCampWorkFixedAssignInfo>& OriginalArray, TArray<FPalUIBaseCampWorkFixedAssignInfo>& OutArray) {
}

void UPalUIBaseCampWorkFixedAssignManageModel::RequestUnassignWork(const FGuid& WorkId, const FPalInstanceID& IndividualId) {
}

void UPalUIBaseCampWorkFixedAssignManageModel::RequestUnassign(const FPalUIBaseCampWorkFixedAssignInfo& TargetInfo, const FPalInstanceID& IndividualId) {
}

void UPalUIBaseCampWorkFixedAssignManageModel::RequestStartReplicateWorkInBaseCamp() {
}

void UPalUIBaseCampWorkFixedAssignManageModel::RequestFixedAssignWork(const FGuid& WorkId, const FPalInstanceID& IndividualId) {
}

void UPalUIBaseCampWorkFixedAssignManageModel::RequestFixedAssign(const FPalUIBaseCampWorkFixedAssignInfo& TargetInfo, const FPalInstanceID& IndividualId) {
}

void UPalUIBaseCampWorkFixedAssignManageModel::RequestEndReplicateWorkInBaseCamp() {
}

void UPalUIBaseCampWorkFixedAssignManageModel::OnUpdateWorkInBaseCamp(UPalBaseCampWorkCollectionReplicationList* ReplicationList) {
}

UPalIndividualCharacterContainer* UPalUIBaseCampWorkFixedAssignManageModel::GetTargetBaseCampWorkerCharacterContainer() const {
    return NULL;
}

void UPalUIBaseCampWorkFixedAssignManageModel::GetFixedAssignableWorks(TArray<FPalUIBaseCampWorkFixedAssignInfo>& OutWorks) {
}


