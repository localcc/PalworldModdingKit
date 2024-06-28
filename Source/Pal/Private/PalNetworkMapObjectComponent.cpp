#include "PalNetworkMapObjectComponent.h"

UPalNetworkMapObjectComponent::UPalNetworkMapObjectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalNetworkMapObjectComponent::RequestSpawnMapObject_ToServer_Implementation(const FGuid& RequestID, const FName MapObjectId, const FVector& Location, const FQuat& Rotation, const TArray<FPalNetArchive>& ExtraParameterArchives) {
}

void UPalNetworkMapObjectComponent::RequestRepair_ToServer_Implementation(const FGuid& InstanceId) {
}

void UPalNetworkMapObjectComponent::RequestDismantleObject_ToServer_Implementation(const FGuid& InstanceId) {
}

void UPalNetworkMapObjectComponent::RequestDamageMapObjectSpawner_ToServer_Implementation(APalMapObjectSpawnerBase* TargetSpawnerActor, const FPalDamageInfo& DamageInfo) {
}

void UPalNetworkMapObjectComponent::RequestDamageMapObject_ToServer_Implementation(const FGuid& InstanceId, const FPalDamageInfo& Info) {
}

void UPalNetworkMapObjectComponent::RequestDamageFoliage_ToServer_Implementation(const FPalCellCoord& CellCoord, const FName ModelId, const TArray<FPalFoliageInstanceId>& InstanceIds, const FPalDamageInfo& DamageInfo) {
}

void UPalNetworkMapObjectComponent::RequestConcreteModelModule_Server_void_Implementation(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName) {
}

void UPalNetworkMapObjectComponent::RequestConcreteModelModule_Server_int32_Implementation(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, int32 Value) {
}

void UPalNetworkMapObjectComponent::RequestConcreteModelModule_Server_FVector_Implementation(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, FVector Value) {
}

void UPalNetworkMapObjectComponent::RequestConcreteModelModule_Server_FPalNetArchive_Implementation(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, FPalNetArchive Value) {
}

void UPalNetworkMapObjectComponent::RequestConcreteModelModule_Server_bool_Implementation(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, bool Value) {
}

void UPalNetworkMapObjectComponent::RequestConcreteModel_void(const FGuid& ConcreteModelInstanceId, const FName FunctionName) {
}

void UPalNetworkMapObjectComponent::RequestConcreteModel_Server_void_Implementation(const FGuid& ConcreteModelInstanceId, const FName FunctionName) {
}

void UPalNetworkMapObjectComponent::RequestConcreteModel_Server_int32_Implementation(const FGuid& ConcreteModelInstanceId, const FName FunctionName, int32 Value) {
}

void UPalNetworkMapObjectComponent::RequestConcreteModel_Server_FVector_Implementation(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FVector Value) {
}

void UPalNetworkMapObjectComponent::RequestConcreteModel_Server_FPalNetArchive_Implementation(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FPalNetArchive Value) {
}

void UPalNetworkMapObjectComponent::RequestConcreteModel_Server_bool_Implementation(const FGuid& ConcreteModelInstanceId, const FName FunctionName, bool Value) {
}

void UPalNetworkMapObjectComponent::RequestConcreteModel_int32(const FGuid& ConcreteModelInstanceId, const FName FunctionName, int32 Value) {
}

void UPalNetworkMapObjectComponent::RequestConcreteModel_FVector(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FVector Value) {
}

void UPalNetworkMapObjectComponent::RequestConcreteModel_FPalNetArchive(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FPalNetArchive Value) {
}

void UPalNetworkMapObjectComponent::RequestConcreteModel_bool(const FGuid& ConcreteModelInstanceId, const FName FunctionName, bool Value) {
}

void UPalNetworkMapObjectComponent::RequestBuildCancel_ToServer_Implementation(const FGuid& InstanceId) {
}

void UPalNetworkMapObjectComponent::RecieveDestroyMapObject_Multicast_Implementation(const FGuid& InstanceId) {
}

void UPalNetworkMapObjectComponent::RecieveDamageMapObject_ToClient_Implementation(const FGuid& InstanceId, const FPalDamageInfo& Info, const int32 DamagedHp) {
}

void UPalNetworkMapObjectComponent::ReceiveUpdateHp_ToClient_Implementation(const FGuid& InstanceId, const int32 UpdatedHp) {
}

void UPalNetworkMapObjectComponent::ReceiveDismantleObjectResult_ToClient_Implementation(const EPalMapObjectOperationResult Result, const FGuid& InstanceId) {
}

void UPalNetworkMapObjectComponent::NotifyReceivePickupResultSuccess_ToClient_Implementation(const FPalNetArchive& PickupItemArchive, UPalMapObjectPickableItemModelBase* Model, bool IsAllPickup) {
}

void UPalNetworkMapObjectComponent::NotifyReceivePickupResultFailed_ToClient_Implementation(UPalMapObjectPickableItemModelBase* Model) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModelModule_RequestClient_void_Implementation(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModelModule_RequestClient_int32_Implementation(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, int32 Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModelModule_RequestClient_FVector_Implementation(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, FVector Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModelModule_RequestClient_FPalNetArchive_Implementation(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, FPalNetArchive Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModelModule_RequestClient_bool_Implementation(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, bool Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModelModule_Multicast_void_Implementation(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModelModule_Multicast_int32_Implementation(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, int32 Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModelModule_Multicast_FVector_Implementation(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, FVector Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModelModule_Multicast_FPalNetArchive_Implementation(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, FPalNetArchive Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModelModule_Multicast_bool_Implementation(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, bool Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModel_ToRequestClient_void(const FGuid& ConcreteModelInstanceId, const int32 RequestPlayerId, const FName FunctionName) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModel_ToRequestClient_int32(const FGuid& ConcreteModelInstanceId, const int32 RequestPlayerId, const FName FunctionName, int32 Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModel_ToRequestClient_FVector(const FGuid& ConcreteModelInstanceId, const int32 RequestPlayerId, const FName FunctionName, FVector Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModel_ToRequestClient_FPalNetArchive(const FGuid& ConcreteModelInstanceId, const int32 RequestPlayerId, const FName FunctionName, FPalNetArchive Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModel_ToRequestClient_bool(const FGuid& ConcreteModelInstanceId, const int32 RequestPlayerId, const FName FunctionName, bool Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModel_ToMulticast_void(const FGuid& ConcreteModelInstanceId, const FName FunctionName) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModel_ToMulticast_int32(const FGuid& ConcreteModelInstanceId, const FName FunctionName, int32 Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModel_ToMulticast_FVector(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FVector Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModel_ToMulticast_FPalNetArchive(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FPalNetArchive Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModel_ToMulticast_bool(const FGuid& ConcreteModelInstanceId, const FName FunctionName, bool Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModel_RequestClient_void_Implementation(const FGuid& ConcreteModelInstanceId, const FName FunctionName) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModel_RequestClient_int32_Implementation(const FGuid& ConcreteModelInstanceId, const FName FunctionName, int32 Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModel_RequestClient_FVector_Implementation(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FVector Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModel_RequestClient_FPalNetArchive_Implementation(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FPalNetArchive Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModel_RequestClient_bool_Implementation(const FGuid& ConcreteModelInstanceId, const FName FunctionName, bool Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModel_Multicast_void_Implementation(const FGuid& ConcreteModelInstanceId, const FName FunctionName) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModel_Multicast_int32_Implementation(const FGuid& ConcreteModelInstanceId, const FName FunctionName, int32 Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModel_Multicast_FVector_Implementation(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FVector Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModel_Multicast_FPalNetArchive_Implementation(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FPalNetArchive Value) {
}

void UPalNetworkMapObjectComponent::NotifyConcreteModel_Multicast_bool_Implementation(const FGuid& ConcreteModelInstanceId, const FName FunctionName, bool Value) {
}

void UPalNetworkMapObjectComponent::Dev_ReceiveMapObjectsTickIntervalInBackground_ToClient_Implementation(const TArray<FPalNetworkMapObjectTickIntervalInBackgroundInfo>& TickIntervalInfoArray) {
}

void UPalNetworkMapObjectComponent::Dev_FetchMapObjectsTickIntervalInBackground_ToServer_Implementation() {
}


