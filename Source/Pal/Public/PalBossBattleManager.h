#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPalBossBattleCombatResult.h"
#include "EPalBossBattleDifficulty.h"
#include "EPalBossType.h"
#include "PalBossBattleStaticInfo.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalBossBattleManager.generated.h"

class APalBossTower;
class APalPlayerCharacter;
class UPalBossBattleInstanceModel;
class UPalBossBattleSequencer;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API UPalBossBattleManager : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLocalPlayerBossBattleSuccessDelegate, APalPlayerCharacter*, LocalJoinedPlayer, EPalBossType, BossType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCombatStartUIDelegate, APalBossTower*, BossTower);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCombatEndUIActionDelegate, EPalBossBattleCombatResult, CombatResult);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalPlayerBossBattleSuccessDelegate OnLocalBossBattleSuccessDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCombatStartUIDelegate OnCombatStartUIDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCombatEndUIActionDelegate OnCombatEndUIAction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MAX_TIME_LIMIT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerRespawnTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BGMFadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> MultiPlayerBossHPMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalBossBattleSequencer> BossBattleSequencerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalBossType, FPalBossBattleStaticInfo> BossInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBossType HardUnlockTiggerBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalBossType, UPalBossBattleInstanceModel*> InstanceModelMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalBossType, UPalBossBattleSequencer*> BossBattleSequencerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid GroupGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalBossType DisableSkyBossType_LocalPlayer;
    
public:
    UPalBossBattleManager();

    UFUNCTION(BlueprintCallable)
    void UnlockAchievement(EPalBossType BossType);
    
    UFUNCTION(BlueprintCallable)
    void UnloadBossBattle_ServerInternal(EPalBossType BossType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBossBattleCombatStart(EPalBossType BossType);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadAsyncBossBattle_ServerInternal(EPalBossType BossType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTopWarpPointTransform(EPalBossType BossType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalBossBattleStaticInfo GetStaticInfo(EPalBossType BossType) const;
    
    UFUNCTION(BlueprintCallable)
    FTransform GetPlayerSpawnTransformForMultiPlayer(int32 Index, FVector Location, FRotator Rotate, float Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxJoinablePlayerNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsServer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBossHPMultiPlayerRate(int32 JoinedPlayerNum);
    
    UFUNCTION(BlueprintCallable)
    FString GetBossAchievementIndex(EPalBossType BossType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattleTimeLimit() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void EmptyInstanceCleanup();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableSkyCreator(bool Disable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartBossBattle(EPalBossType BossType);
    
    UFUNCTION(BlueprintCallable)
    bool CanEntryHard(const APalPlayerCharacter* Player) const;
    
    UFUNCTION(BlueprintCallable)
    void BossBattleExit(EPalBossType BossType, APalPlayerCharacter* ExitPlayer);
    
    UFUNCTION(BlueprintCallable)
    void BossBattleEntryCancel(EPalBossType BossType, APalPlayerCharacter* EntryPlayer);
    
    UFUNCTION(BlueprintCallable)
    void BossBattleEntry(EPalBossType BossType, EPalBossBattleDifficulty Difficulty, APalPlayerCharacter* EntryPlayer);
    
    UFUNCTION(BlueprintCallable)
    void AddGroupCharacter(UPalIndividualCharacterHandle* AddIndividualHandle);
    
};

