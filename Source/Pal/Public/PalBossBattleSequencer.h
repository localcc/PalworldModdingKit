#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalBossBattleCombatResult.h"
#include "EPalBossBattleSequenceType.h"
#include "EPalBossType.h"
#include "PalDyingEndInfo.h"
#include "Templates/SubclassOf.h"
#include "PalBossBattleSequencer.generated.h"

class APalCharacter;
class APalPlayerCharacter;
class UAkAudioEvent;
class UPalBossBattleEventBase;
class UPalBossBattleInstanceModel;
class UPalBossBattleSequenceBase;

UCLASS(Blueprintable)
class PAL_API UPalBossBattleSequencer : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEventCreated, UPalBossBattleEventBase*, BossBattleEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBossBattleCombatStart, EPalBossType, BossType);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossBattleCombatStart OnCombatStartDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RemainBattleTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsBattleTimerCountDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventCreated OnEventCreated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBossBattleCombatResult CombatResult;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalBossBattleSequenceType, TSubclassOf<UPalBossBattleSequenceBase>> SequenceClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalBossBattleSequenceType, UPalBossBattleSequenceBase*> SequenceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalBossBattleSequenceBase* CurrentSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalBossBattleInstanceModel* BossBattleInstanceModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalPlayerCharacter*> InRoomPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalPlayerCharacter*> SequenceEndPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalBossType SelfBossType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalCharacter* BossCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PlayingBGMId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsClientOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalBossBattleEventBase* BossBattleEvent;
    
public:
    UPalBossBattleSequencer();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_ForBP(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void StopBGM();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerMoveDisable(APalPlayerCharacter* Player, bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetMutekiAllPlayer(bool bIsMuteki);
    
    UFUNCTION(BlueprintCallable)
    void SetBossCharacter(APalCharacter* BossActor);
    
    UFUNCTION(BlueprintCallable)
    void SetBossBattlEvent(UPalBossBattleEventBase* NewBossBattleEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetAllPlayerMoveDisable(bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayerFromInRoomList(APalPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDyingStatus();
    
    UFUNCTION(BlueprintCallable)
    void PlayBGM(UAkAudioEvent* BGMAudioEvent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerRespawn(APalPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDeadStopBGM(APalPlayerCharacter* PlayerCharacter, const FPalDyingEndInfo& DyingEndInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnOpeningEnd(bool Success);
    
    UFUNCTION(BlueprintCallable)
    void OnEndingEnd(bool Success);
    
    UFUNCTION(BlueprintCallable)
    void OnDyingDeadEndDelegate(APalPlayerCharacter* PlayerCharacter, const FPalDyingEndInfo& DyingEndInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedEnd(bool Success);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCombatFinish(EPalBossBattleCombatResult InCombatResult);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCombatEnd(bool Success);
    
    UFUNCTION(BlueprintCallable)
    void NoticeClientCombatResult();
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadAndCreateBossBattleEvent(TSoftClassPtr<UPalBossBattleEventBase> BossBattleEventClass);
    
    UFUNCTION(BlueprintCallable)
    void KillAllPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClientOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllPlayerDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APalPlayerCharacter*> GetSequencePlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainTimeSecond();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalPlayerCharacter* GetJoinedLocalPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalPlayerCharacter* GetJoinedAndServerLocalPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APalPlayerCharacter*> GetInRoomPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalBossType GetBossType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetBossCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBossBattleInstanceModel* GetBossBattleInstanceModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBossBattleEventBase* GetBossBattleEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APalPlayerCharacter*> GetAliveOrDyingPlayers();
    
    UFUNCTION(BlueprintCallable)
    void FullRecoveryHPAllPlayer();
    
    UFUNCTION(BlueprintCallable)
    void ForceRespawnPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalPlayerCharacter* FindFirstCombatTargetForBossAI();
    
};

