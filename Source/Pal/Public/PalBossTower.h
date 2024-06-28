#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EPalBossBattleDifficulty.h"
#include "EPalBossBattleState.h"
#include "EPalBossType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalBossTower.generated.h"

class APalPlayerCharacter;
class UPalBossBattleInstanceModel;

UCLASS(Blueprintable)
class PAL_API APalBossTower : public AActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeBossTowerEntryWaitUI, bool, bIsCountDown, FDateTime, TimeLimit);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeBossTowerEntryWaitUI OnChangeBossTowerEntryWaitUI;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBossType BossType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid EntryWaitInfoHUDId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InstanceModel, meta=(AllowPrivateAccess=true))
    UPalBossBattleInstanceModel* InstanceModel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FDateTime CombatTimeLimit;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid LocationInstanceId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalPlayerCharacter*> InDoorPlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle;
    
public:
    APalBossTower(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool WriteBossDefeatRecord_ServerInternal(APalPlayerCharacter* TargetPlayer);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void UpdateEntry_Multicast(EPalBossBattleDifficulty NewDifficulty, const TArray<APalPlayerCharacter*>& NewEntryPlayers, EPalBossBattleState InBossBattleState);
    
    UFUNCTION(BlueprintCallable)
    void ShowWaitInfo(const FVector TargetLocation, const FVector DisplayOffset, bool isWaiting);
    
    UFUNCTION(BlueprintCallable)
    void RequestBossBattleStart(APalPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void RequestBossBattleEntry(APalPlayerCharacter* Player, EPalBossBattleDifficulty Difficulty);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveInDoorPlayer(APalPlayerCharacter* Player);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_InstanceModel();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeEntryPlayer(TArray<APalPlayerCharacter*> EntryPlayers);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeCombatTimeLimit(FDateTime NewCombatTimeLimit);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeBossBattleStateBP(EPalBossBattleState NewState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeBossBattleState(EPalBossBattleState NewBossBattleState);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyEntryUpdateAll();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntered(APalPlayerCharacter* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FTransform GetTopWarpPoint() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<APalPlayerCharacter*> GetStartablePlayers();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FTransform GetFrontWarpPoint() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APalPlayerCharacter*> GetForceWarpTargets() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetDeadItemDropPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBossBattleRowName();
    
    UFUNCTION(BlueprintCallable)
    void CloseWaitInfo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddInDoorPlayer(APalPlayerCharacter* Player);
    

    // Fix for true pure virtual functions not being implemented
};

