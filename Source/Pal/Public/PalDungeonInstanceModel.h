#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "EPalDungeonInstanceBossState.h"
#include "GameDateTime.h"
#include "PalDeadInfo.h"
#include "PalMapObjectSaveData.h"
#include "PalStageInstanceId.h"
#include "PalDungeonInstanceModel.generated.h"

class APalCharacter;
class APalNPCSpawnerBase;
class UDataLayerAsset;
class UPalDungeonInstanceModel;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API UPalDungeonInstanceModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalDungeonInstanceModel*, Self);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnChangeInstanceStatusDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid DungeonInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid MarkerPointId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName DungeonSpawnAreaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName DungeonLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName OverrideDungeonNameTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize RepFieldWarpPointLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform FieldWarpPointTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform StartPointTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform DeadItemDropTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BossState, meta=(AllowPrivateAccess=true))
    EPalDungeonInstanceBossState BossState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName EnemySpawner_Boss_RowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalNPCSpawnerBase> EnemySpawnerClass_Boss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DisappearTimeAt, meta=(AllowPrivateAccess=true))
    FGameDateTime DisappearTimeAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalStageInstanceId StageInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectSaveData> MapObjectSaveDataArray;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ReservedDataLayerAssetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataLayerAsset* ReservedDataLayerAsset;
    
public:
    UPalDungeonInstanceModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateBossState();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSpawnedCharacter_ServerInternal(UPalIndividualCharacterHandle* IndividualHandle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DisappearTimeAt();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BossState();
    
    UFUNCTION(BlueprintCallable)
    void OnDeadBoss_ServerInternal(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeInstanceStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnCapturedBoss_ServerInternal(APalCharacter* Character, APalCharacter* Attacker);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetDungeonSpawnAreaId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDungeonNameText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameDateTime GetDisappearTimeAt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalDungeonInstanceBossState GetBossState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float CalcRemainSecondsBy(const UObject* WorldContextObject, const FGameDateTime& TimeAt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float CalcDisappearRemainSeconds(const UObject* WorldContextObject, const FGameDateTime& InDisappearTimeAt);
    
};

