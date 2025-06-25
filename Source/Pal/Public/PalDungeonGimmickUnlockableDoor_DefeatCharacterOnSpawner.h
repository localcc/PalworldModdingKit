#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalDungeonGimmickSpawnedCharacterState.h"
#include "PalDeadInfo.h"
#include "PalDungeonGimmickUnlockableDoor.h"
#include "PalDungeonGimmickUnlockableDoor_DefeatCharacterOnSpawner.generated.h"

class APalCharacter;
class APalNPCSpawnerBase;
class UPalDungeonInstanceModel;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API APalDungeonGimmickUnlockableDoor_DefeatCharacterOnSpawner : public APalDungeonGimmickUnlockableDoor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DefeatedCharacterNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TargetCharacterNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SpawnedCharacterState, meta=(AllowPrivateAccess=true))
    EPalDungeonGimmickSpawnedCharacterState SpawnedCharacterState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid SpawnerGroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TargetEnemySpawnerLevelObjectInstanceId;
    
public:
    APalDungeonGimmickUnlockableDoor_DefeatCharacterOnSpawner(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnSpawnedEnemySpawner_ServerInternal(UPalDungeonInstanceModel* InstanceModel, APalNPCSpawnerBase* EnemySpawner);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SpawnedCharacterState(const EPalDungeonGimmickSpawnedCharacterState OldValue);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEnterCharacterToSpawnerGroup_ServerInternal(UPalIndividualCharacterHandle* IndividualHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnDeadCharacter_ServerInternal(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnCreatedEnemySpawnerGroup_ServerInternal(APalNPCSpawnerBase* EnemySpawner);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangedSpawnedCharacterStateImpl(const EPalDungeonGimmickSpawnedCharacterState State);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCapturedCharacter_ServerInternal(APalCharacter* Character, APalCharacter* Attacker);
    
};

