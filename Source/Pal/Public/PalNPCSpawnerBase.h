#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPalCheckSpawnResultType.h"
#include "EPalSpawnRadiusType.h"
#include "EPalSpawnedCharacterType.h"
#include "EPalSpwnerImportanceType.h"
#include "FlagContainer.h"
#include "PalSpawnerGroupInfo.h"
#include "PalSpawnerOneTribeInfo.h"
#include "PalNPCSpawnerBase.generated.h"

class UObject;
class UPalIndividualCharacterHandle;
class UPalNavigationInvokerComponent;
class UPalSquad;

UCLASS(Blueprintable)
class PAL_API APalNPCSpawnerBase : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCreatedGroupDelegate);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRunOnAnyThread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Ignore_DebugSettingDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Ignore_DistanceLocationReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Ignore_FarCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoSpawnedTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalSpawnRadiusType SpawnRadiusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSquadBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString DebugOrganizationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocationResetDistance_SpawnerToCharacterTooFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocationResetHeight_SpawnerToCharacterTooLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNavigationInvokerComponent* NavInvokerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> NPCLocations;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreatedGroupDelegate OnCreatedGroupDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalSpawnerGroupInfo> RandomizeSpawnerGroupInfos;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid WildGroupGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalSquad* Squad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer DisableSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalSpwnerImportanceType ImportanceType;
    
public:
    APalNPCSpawnerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Tick_Spawning(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Tick_Spawned(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Tick_Despawning(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnRequest_ByOutside(bool IsDeleteAliveCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnedFlag(bool NewIsSpawned);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnDisableFlag(const FName& Name, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreRandomizer(bool bInIgnoreRandomizer);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDisableBossSpawner_ToSaveData(FName KeyName);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckRadius(float SpawnRadius, float DespawnRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAllNPCLocation();
    
    UFUNCTION(BlueprintCallable)
    void RequestDeleteGroup();
    
    UFUNCTION(BlueprintCallable)
    void RequestCreateGroup(TArray<FName> CharacterIDList);
    
public:
    UFUNCTION(BlueprintCallable)
    void Request_TickSpawningForGameThread(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Request_TickSpawnedForGameThread(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Request_TickDespawningForGameThread(float DeltaTime);
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveGroupWhenDestoryActor(AActor* DestoryActor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGroupCharacter(UPalIndividualCharacterHandle* RemoveIndividualHandle);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool RandomSpawnLocationByRadiusLineTraceWithWorldLocation(FVector& OutLocation, float Radius, float RayStartUpOffset, float RayEndDownOffset, const FVector& WorldPos, int32 SumSpawnNum, int32 SelfIndexInAll);
    
    UFUNCTION(BlueprintCallable)
    bool RandomSpawnLocationByRadiusLineTrace(FVector& OutLocation, float Radius, float RayStartUpOffset, float RayEndDownOffset, int32 SumSpawnNum, int32 SelfIndexInAll);
    
    UFUNCTION(BlueprintCallable)
    void ProcessBossDefeatInfo_ServerInternal(AActor* BossActor, FName SpawnerName);
    
    UFUNCTION(BlueprintCallable)
    void PathWalkNameSort(TArray<UObject*> WalkPoint, TArray<UObject*>& OutSortedWalkPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialized();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsSuppressedByRandomIncident();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawnDisable() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNearBaseCamp();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIgnoreRandomizer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalSpawnRadiusType GetSpawnRadiusType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpawnRadiusCM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetSpawnPointRadius();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpawnNumRandom_OneTribe(FPalSpawnerOneTribeInfo Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpawnLevelRandom_OneTribe(FPalSpawnerOneTribeInfo Info);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    TArray<FPalSpawnerGroupInfo> GetSpawnGroupList(UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EPalSpawnedCharacterType GetSpawnerType() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpawnerRadiusByType() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName GetSpawnerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSpawnDisableDebugInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FPalSpawnerGroupInfo> GetOriginalSpawnGroupList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetMaxMonsterLevel() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsServer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisableBossSpawnerFlag_FromSaveData(FName KeyName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetAllSpawnedNPCHandle(TArray<UPalIndividualCharacterHandle*>& Handles);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetAllNPCLocation(TArray<FVector>& OutLocations);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateDebugSpawnerGroupInfo(FPalSpawnerGroupInfo OneGroupInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    EPalCheckSpawnResultType CheckSpawnDistance(bool NewIsSpawned);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintTick_Spawning(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintTick_Spawned(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintTick_Despawning(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintTick_AnyThread(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void AddGroupCharacterByGroupId(UPalIndividualCharacterHandle* AddIndividualHandle, const FGuid& GroupId, const FString& DebugName);
    
    UFUNCTION(BlueprintCallable)
    void AddGroupCharacter(UPalIndividualCharacterHandle* AddIndividualHandle);
    
};

