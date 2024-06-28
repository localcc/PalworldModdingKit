#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalRaidBossBattleFinishType.h"
#include "EPalRaidBossBattleStateType.h"
#include "PalDeadInfo.h"
#include "PalInstanceID.h"
#include "PalRaidBossSpawnInfoList.h"
#include "PalRaidBossSpawnerInfo.h"
#include "PalRaidBossComponent.generated.h"

class AActor;
class APalCharacter;
class APalPlayerCharacter;
class UPalBaseCampModel;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalRaidBossComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalInstanceID> RaidBossPalList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterHandle*> DeadRaidBossPalList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid BaseCanpID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector BaseCampLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float RemainBattleTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalRaidBossBattleStateType CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalRaidBossSpawnerInfo SpawnerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName StartItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid StartRequestPlayerUID;
    
public:
    UPalRaidBossComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnRaidBoss_BP(FPalRaidBossSpawnInfoList SpawnInfo, const FTransform& SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnBossPal(AActor* Pal);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDisposeBaseCamp(UPalBaseCampModel* Model);
    
    UFUNCTION(BlueprintCallable)
    void OnDeadPal(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnCapturePal(APalCharacter* SelfCharacter, APalCharacter* Attacker);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidPlayerInCamp(APalPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetStartItemName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainTimer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetCampID();
    
    UFUNCTION(BlueprintCallable)
    APalPlayerCharacter* FindInRangePlayers(TArray<APalPlayerCharacter*>& Players, bool OnlyAlive);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallOnEnd_ToAll(EPalRaidBossBattleFinishType FinishType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddGroupCharacter(UPalIndividualCharacterHandle* PalHandle);
    
};

