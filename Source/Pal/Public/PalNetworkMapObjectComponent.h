#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalMapObjectConcreteModelModuleType.h"
#include "EPalMapObjectOperationResult.h"
#include "PalCellCoord.h"
#include "PalDamageInfo.h"
#include "PalFoliageInstanceId.h"
#include "PalNetArchive.h"
#include "PalNetworkMapObjectSpawnRequestParameter.h"
#include "PalNetworkMapObjectTickIntervalInBackgroundInfo.h"
#include "PalNetworkMapObjectComponent.generated.h"

class APalMapObjectSpawnerBase;
class UPalMapObjectPickableItemModelBase;
class UPalMapObjectSpawnRequestHandler;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkMapObjectComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalNetworkMapObjectSpawnRequestParameter> MapObjectSpawnRequestParameterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalMapObjectSpawnRequestHandler*> SpawnRequestHandlerMap;
    
public:
    UPalNetworkMapObjectComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSpawnMapObject_ToServer(const FGuid& RequestID, const FName MapObjectId, const FVector& Location, const FQuat& Rotation, const TArray<FPalNetArchive>& ExtraParameterArchives);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestRepair_ToServer(const FGuid& InstanceId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDismantleObject_ToServer(const FGuid& InstanceId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDamageMapObjectSpawner_ToServer(APalMapObjectSpawnerBase* TargetSpawnerActor, const FPalDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDamageMapObject_ToServer(const FGuid& InstanceId, const FPalDamageInfo& Info);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDamageFoliage_ToServer(const FPalCellCoord& CellCoord, const FName ModelId, const TArray<FPalFoliageInstanceId>& InstanceIds, const FPalDamageInfo& DamageInfo);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestConcreteModelModule_Server_void(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestConcreteModelModule_Server_int32(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, int32 Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestConcreteModelModule_Server_FVector(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, FVector Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestConcreteModelModule_Server_FPalNetArchive(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestConcreteModelModule_Server_bool(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, bool Value);
    
    UFUNCTION(BlueprintCallable)
    void RequestConcreteModel_void(const FGuid& ConcreteModelInstanceId, const FName FunctionName);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestConcreteModel_Server_void(const FGuid& ConcreteModelInstanceId, const FName FunctionName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestConcreteModel_Server_int32(const FGuid& ConcreteModelInstanceId, const FName FunctionName, int32 Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestConcreteModel_Server_FVector(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FVector Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestConcreteModel_Server_FPalNetArchive(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestConcreteModel_Server_bool(const FGuid& ConcreteModelInstanceId, const FName FunctionName, bool Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestConcreteModel_int32(const FGuid& ConcreteModelInstanceId, const FName FunctionName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void RequestConcreteModel_FVector(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    void RequestConcreteModel_FPalNetArchive(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(BlueprintCallable)
    void RequestConcreteModel_bool(const FGuid& ConcreteModelInstanceId, const FName FunctionName, bool Value);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestBuildCancel_ToServer(const FGuid& InstanceId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RecieveDestroyMapObject_Multicast(const FGuid& InstanceId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RecieveDamageMapObject_ToClient(const FGuid& InstanceId, const FPalDamageInfo& Info, const int32 DamagedHp);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveUpdateHp_ToClient(const FGuid& InstanceId, const int32 UpdatedHp);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveDismantleObjectResult_ToClient(const EPalMapObjectOperationResult Result, const FGuid& InstanceId);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyReceivePickupResultSuccess_ToClient(const FPalNetArchive& PickupItemArchive, UPalMapObjectPickableItemModelBase* Model, bool IsAllPickup);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyReceivePickupResultFailed_ToClient(UPalMapObjectPickableItemModelBase* Model);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyConcreteModelModule_RequestClient_void(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyConcreteModelModule_RequestClient_int32(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, int32 Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyConcreteModelModule_RequestClient_FVector(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, FVector Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyConcreteModelModule_RequestClient_FPalNetArchive(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyConcreteModelModule_RequestClient_bool(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, bool Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyConcreteModelModule_Multicast_void(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyConcreteModelModule_Multicast_int32(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, int32 Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyConcreteModelModule_Multicast_FVector(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, FVector Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyConcreteModelModule_Multicast_FPalNetArchive(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyConcreteModelModule_Multicast_bool(const FGuid& ConcreteModelInstanceId, const EPalMapObjectConcreteModelModuleType ModuleType, const FName FunctionName, bool Value);
    
    UFUNCTION(BlueprintCallable)
    void NotifyConcreteModel_ToRequestClient_void(const FGuid& ConcreteModelInstanceId, const int32 RequestPlayerId, const FName FunctionName);
    
    UFUNCTION(BlueprintCallable)
    void NotifyConcreteModel_ToRequestClient_int32(const FGuid& ConcreteModelInstanceId, const int32 RequestPlayerId, const FName FunctionName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void NotifyConcreteModel_ToRequestClient_FVector(const FGuid& ConcreteModelInstanceId, const int32 RequestPlayerId, const FName FunctionName, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    void NotifyConcreteModel_ToRequestClient_FPalNetArchive(const FGuid& ConcreteModelInstanceId, const int32 RequestPlayerId, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(BlueprintCallable)
    void NotifyConcreteModel_ToRequestClient_bool(const FGuid& ConcreteModelInstanceId, const int32 RequestPlayerId, const FName FunctionName, bool Value);
    
    UFUNCTION(BlueprintCallable)
    void NotifyConcreteModel_ToMulticast_void(const FGuid& ConcreteModelInstanceId, const FName FunctionName);
    
    UFUNCTION(BlueprintCallable)
    void NotifyConcreteModel_ToMulticast_int32(const FGuid& ConcreteModelInstanceId, const FName FunctionName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void NotifyConcreteModel_ToMulticast_FVector(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    void NotifyConcreteModel_ToMulticast_FPalNetArchive(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(BlueprintCallable)
    void NotifyConcreteModel_ToMulticast_bool(const FGuid& ConcreteModelInstanceId, const FName FunctionName, bool Value);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyConcreteModel_RequestClient_void(const FGuid& ConcreteModelInstanceId, const FName FunctionName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyConcreteModel_RequestClient_int32(const FGuid& ConcreteModelInstanceId, const FName FunctionName, int32 Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyConcreteModel_RequestClient_FVector(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FVector Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyConcreteModel_RequestClient_FPalNetArchive(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyConcreteModel_RequestClient_bool(const FGuid& ConcreteModelInstanceId, const FName FunctionName, bool Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyConcreteModel_Multicast_void(const FGuid& ConcreteModelInstanceId, const FName FunctionName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyConcreteModel_Multicast_int32(const FGuid& ConcreteModelInstanceId, const FName FunctionName, int32 Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyConcreteModel_Multicast_FVector(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FVector Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyConcreteModel_Multicast_FPalNetArchive(const FGuid& ConcreteModelInstanceId, const FName FunctionName, FPalNetArchive Value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyConcreteModel_Multicast_bool(const FGuid& ConcreteModelInstanceId, const FName FunctionName, bool Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Dev_ReceiveMapObjectsTickIntervalInBackground_ToClient(const TArray<FPalNetworkMapObjectTickIntervalInBackgroundInfo>& TickIntervalInfoArray);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Dev_FetchMapObjectsTickIntervalInBackground_ToServer();
    
};

