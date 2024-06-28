#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "EPalBossBattleDifficulty.h"
#include "EPalBossBattleState.h"
#include "EPalBossType.h"
#include "PalBossBattleSuccessItemInfo.h"
#include "PalStageInstanceId.h"
#include "PalBossBattleInstanceModel.generated.h"

class ALevelInstance;
class APalBossBattleLevelInstance;
class APalBossTower;
class APalCutsceneActor;
class APalPlayerCharacter;
class UAkAudioEvent;
class UDataLayerAsset;
class UPalBossBattleEventBase;
class UPalBossBattleSequencer;

UCLASS(Blueprintable)
class PAL_API UPalBossBattleInstanceModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeEntryPlayerDelegate, TArray<APalPlayerCharacter*>, EntryPlayers);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeCombatTimeLimitDelegate, FDateTime, CombatTimeLimit);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeBossBattleStateDelegate, EPalBossBattleState, BossBattleState);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform FrontWarpPointTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize RepFrontWarpPointtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform TopWarpPointTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform StartPointTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform DeadItemDropTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalStageInstanceId StageInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalBossType BossType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalCutsceneActor> IntroCutsceneActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ALevelInstance> BossRoomLevelInstanceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> BGMAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CombatTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BossBattleLevelInstance, meta=(AllowPrivateAccess=true))
    APalBossBattleLevelInstance* BossBattleLevelInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    APalBossTower* BossTower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BossBattleState, meta=(AllowPrivateAccess=true))
    EPalBossBattleState BossBattleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EntryPlayers, meta=(AllowPrivateAccess=true))
    TArray<APalPlayerCharacter*> EntryPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalPlayerCharacter*> WonPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CombatTimeLimit, meta=(AllowPrivateAccess=true))
    FDateTime CombatTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalBossBattleSequencer* LocalBattleSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalBossBattleDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalBossBattleSuccessItemInfo> SuccessItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPalBossBattleEventBase> BossBattleEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataLayerAsset* ReservedDataLayerAsset;
    
public:
    UPalBossBattleInstanceModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateCombatTimeLimit();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateBossBattleState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EntryPlayers();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CombatTimeLimit();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BossBattleState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BossBattleLevelInstance();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelInstanceLoaded() const;
    
    UFUNCTION(BlueprintCallable)
    void GiftSuccessItem_OnePlayer(APalPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalBossType GetBossType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalBossBattleState GetBossBattleState() const;
    
};

