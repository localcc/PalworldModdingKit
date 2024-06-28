#include "PalGroupManager.h"

UPalGroupManager::UPalGroupManager() {
}

bool UPalGroupManager::TryGetGuildName(const FGuid& GroupId, FString& OutGuildName) const {
    return false;
}

bool UPalGroupManager::TryGetGroupName(const FGuid& GroupId, FString& OutGroupName) const {
    return false;
}

void UPalGroupManager::OnFinishedGuildRequest_ServerInternal(UPalGuildRequestFlowBase* Flow) {
}

bool UPalGroupManager::IsInGuild(const AActor* TargetActor) {
    return false;
}

bool UPalGroupManager::IsExistGroup(const FString& GroupName) const {
    return false;
}

FGuid UPalGroupManager::GetOrganizationGroupId(const UObject* WorldContextObject, const EPalOrganizationType OrganizationType) {
    return FGuid{};
}

void UPalGroupManager::Debug_RequestNewGroup(FPalGroupCreateParameter CreateParam, FPalGroupOperationWithGroupIdDynamicDelegate Callback) {
}

void UPalGroupManager::Debug_RequestExitGroup(const FPalInstanceID& IndividualId, FPalGroupOperationDynamicDelegate Callback) {
}

void UPalGroupManager::Debug_RequestEnterGroup(const FPalInstanceID& IndividualId, const FGuid& GroupId, FPalGroupOperationDynamicDelegate Callback) {
}

void UPalGroupManager::Debug_RequestDisposeGroup(const FGuid& GroupId, FPalGroupOperationDynamicDelegate Callback) {
}

UPalGroupBase* UPalGroupManager::Debug_GetFirstGroupByType(const EPalGroupType Type) const {
    return NULL;
}


