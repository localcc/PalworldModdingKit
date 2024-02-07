#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalNPCSpawnerBase.h"
#include "PalRandomIncidentSpawnMonsterData.h"
#include "PalRandomIncidentSpawnNPCData.h"
#include "PalRandomIncidentNPCSpawner.generated.h"

class AActor;
class APalCharacter;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API APalRandomIncidentNPCSpawner : public APalNPCSpawnerBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNPCSpawned, const FName&, RowName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNPCDespawned, const FName&, RowName);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNPCSpawned OnNPCSpawnedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNPCDespawned OnNPCDespawnedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FGuid> GroupMap;
    
public:
    APalRandomIncidentNPCSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnNPC(const FName& RowName, const FPalRandomIncidentSpawnNPCData& SpawnData, int32 SpawnPointIndex, int32 SpawnPointCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnMonster(const FName& RowName, const FPalRandomIncidentSpawnMonsterData& SpawnData, int32 SpawnPointIndex, int32 SpawnPointCount);
    
    UFUNCTION(BlueprintCallable)
    void RequestCreateGroups(TArray<int32> Groups);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsSpawnedCharacter(const UPalIndividualCharacterHandle* Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetSpawnedCharacters(TArray<AActor*>& SpawnedCharacters);
    
    UFUNCTION(BlueprintCallable)
    UPalIndividualCharacterHandle* FindIndividualCharacterHandleByName(const TMap<UPalIndividualCharacterHandle*, FName>& RowNames, const FName& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    APalCharacter* FindCharacterByName(const FName& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DespawnCharacters();
    
    UFUNCTION(BlueprintCallable)
    void AddGroupCharacterByGroupNo(UPalIndividualCharacterHandle* AddIndividualHandle, int32 GroupNo);
    
};

