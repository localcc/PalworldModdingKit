#include "PalNetworkBaseCampComponent.h"

UPalNetworkBaseCampComponent::UPalNetworkBaseCampComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalNetworkBaseCampComponent::RequestUnassignWorkInBaseCamp_ToServer_Implementation(const FGuid& BaseCampId, const FGuid& WorkId, const FPalInstanceID& IndividualId) {
}

void UPalNetworkBaseCampComponent::RequestReplicateBaseCampWork_ToServer_Implementation(const FGuid& BaseCampId, const bool bReplicate) {
}

void UPalNetworkBaseCampComponent::RequestModule_Server_void_Implementation(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName) {
}

void UPalNetworkBaseCampComponent::RequestModule_Server_int32_Implementation(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, int32 Value) {
}

void UPalNetworkBaseCampComponent::RequestModule_Server_FVector_Implementation(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, FVector Value) {
}

void UPalNetworkBaseCampComponent::RequestModule_Server_FPalNetArchive_Implementation(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, FPalNetArchive Value) {
}

void UPalNetworkBaseCampComponent::RequestModule_Server_bool_Implementation(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, bool Value) {
}

void UPalNetworkBaseCampComponent::RequestFixedAssignWorkInBaseCamp_ToServer_Implementation(const FGuid& BaseCampId, const FGuid& WorkId, const FPalInstanceID& IndividualId) {
}

void UPalNetworkBaseCampComponent::RequestChangeWorkSuitability_ToServer_Implementation(const FPalInstanceID& TargetIndividualId, const EPalWorkSuitability WorkSuitability, const bool bOn) {
}

void UPalNetworkBaseCampComponent::RequestChangeBaseCampBattle_ToServer_Implementation(const FPalInstanceID& TargetIndividualId, const bool bOn) {
}

void UPalNetworkBaseCampComponent::Request_Server_void_Implementation(const FGuid& BaseCampId, const FName FunctionName) {
}

void UPalNetworkBaseCampComponent::Request_Server_int32_Implementation(const FGuid& BaseCampId, const FName FunctionName, int32 Value) {
}

void UPalNetworkBaseCampComponent::Request_Server_FVector_Implementation(const FGuid& BaseCampId, const FName FunctionName, FVector Value) {
}

void UPalNetworkBaseCampComponent::Request_Server_FPalNetArchive_Implementation(const FGuid& BaseCampId, const FName FunctionName, FPalNetArchive Value) {
}

void UPalNetworkBaseCampComponent::Request_Server_bool_Implementation(const FGuid& BaseCampId, const FName FunctionName, bool Value) {
}

void UPalNetworkBaseCampComponent::RemoveBaseCampBurningLog_Client_Implementation(const FGuid& BaseCampId) {
}

void UPalNetworkBaseCampComponent::NotifyModule_RequestClient_void_Implementation(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName) {
}

void UPalNetworkBaseCampComponent::NotifyModule_RequestClient_int32_Implementation(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, int32 Value) {
}

void UPalNetworkBaseCampComponent::NotifyModule_RequestClient_FVector_Implementation(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, FVector Value) {
}

void UPalNetworkBaseCampComponent::NotifyModule_RequestClient_FPalNetArchive_Implementation(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, FPalNetArchive Value) {
}

void UPalNetworkBaseCampComponent::NotifyModule_RequestClient_bool_Implementation(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, bool Value) {
}

void UPalNetworkBaseCampComponent::NotifyModule_Multicast_void_Implementation(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName) {
}

void UPalNetworkBaseCampComponent::NotifyModule_Multicast_int32_Implementation(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, int32 Value) {
}

void UPalNetworkBaseCampComponent::NotifyModule_Multicast_FVector_Implementation(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, FVector Value) {
}

void UPalNetworkBaseCampComponent::NotifyModule_Multicast_FPalNetArchive_Implementation(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, FPalNetArchive Value) {
}

void UPalNetworkBaseCampComponent::NotifyModule_Multicast_bool_Implementation(const FGuid& BaseCampId, const EPalBaseCampModuleType ModuleType, const FName FunctionName, bool Value) {
}

void UPalNetworkBaseCampComponent::Notify_RequestClient_void_Implementation(const FGuid& BaseCampId, const FName FunctionName) {
}

void UPalNetworkBaseCampComponent::Notify_RequestClient_int32_Implementation(const FGuid& BaseCampId, const FName FunctionName, int32 Value) {
}

void UPalNetworkBaseCampComponent::Notify_RequestClient_FVector_Implementation(const FGuid& BaseCampId, const FName FunctionName, FVector Value) {
}

void UPalNetworkBaseCampComponent::Notify_RequestClient_FPalNetArchive_Implementation(const FGuid& BaseCampId, const FName FunctionName, FPalNetArchive Value) {
}

void UPalNetworkBaseCampComponent::Notify_RequestClient_bool_Implementation(const FGuid& BaseCampId, const FName FunctionName, bool Value) {
}

void UPalNetworkBaseCampComponent::Notify_Multicast_void_Implementation(const FGuid& BaseCampId, const FName FunctionName) {
}

void UPalNetworkBaseCampComponent::Notify_Multicast_int32_Implementation(const FGuid& BaseCampId, const FName FunctionName, int32 Value) {
}

void UPalNetworkBaseCampComponent::Notify_Multicast_FVector_Implementation(const FGuid& BaseCampId, const FName FunctionName, FVector Value) {
}

void UPalNetworkBaseCampComponent::Notify_Multicast_FPalNetArchive_Implementation(const FGuid& BaseCampId, const FName FunctionName, FPalNetArchive Value) {
}

void UPalNetworkBaseCampComponent::Notify_Multicast_bool_Implementation(const FGuid& BaseCampId, const FName FunctionName, bool Value) {
}

void UPalNetworkBaseCampComponent::BroadcastRemoveBaseCampBurningLog_Server_Implementation(const FGuid& BaseCampId) {
}

void UPalNetworkBaseCampComponent::BroadcastBaseCampWorkerMealLog_Server_Implementation(const FPalMealLogDisplayData& DisplayData) {
}

void UPalNetworkBaseCampComponent::BroadcastBaseCampWorkerLog_Server_Implementation(EPalLogType DisplayLogType, const FPalInstanceID& WorkerCharacterInstanceId, const FName& EventDataID) {
}

void UPalNetworkBaseCampComponent::BroadcastBaseCampLog_Server_Implementation(const FPalMonsterControllerBaseCampLogContent& LogContent) {
}

void UPalNetworkBaseCampComponent::BroadcastAddBaseCampBurningLog_Server_Implementation(const FGuid& BaseCampId) {
}

void UPalNetworkBaseCampComponent::AddBaseCampWorkerLog_Client_Implementation(EPalLogType DisplayLogType, const FPalInstanceID& WorkerCharacterInstanceId, const FName& EventDataID) {
}

void UPalNetworkBaseCampComponent::AddBaseCampWorkerDeathLog_Client_Implementation(const FPalKillLogDisplayData& DeathLogDisplayData) {
}

void UPalNetworkBaseCampComponent::AddBaseCampLog_Client_Implementation(const FPalMonsterControllerBaseCampLogContent& LogContent) {
}

void UPalNetworkBaseCampComponent::AddBaseCampBurningLog_Client_Implementation(const FGuid& BaseCampId) {
}


