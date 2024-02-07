#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "Navigation/PathFollowingComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EPalCharacterImportanceType.h"
#include "PalDeadInfo.h"
#include "PalPathFollowingBlockDetectionParams.h"
#include "Templates/SubclassOf.h"
#include "PalAIController.generated.h"

class AActor;
class APalCharacter;
class APalPlayerCharacter;
class UNavigationQueryFilter;
class UPalAIActionComponent;
class UPalAIBlackboardBase;
class UPalAICombatModule;
class UPalActiveSkillSlot;
class UPalHate;
class UPalSquad;

UCLASS(Blueprintable)
class PAL_API APalAIController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TargetPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TargetNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalAICombatModule> CombatModuleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalActiveSkillSlot* SkillSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString DebugOrganizationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalCharacter* R1AttackTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAIActionComponentTickInterval;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsSquadBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsNotSleepWildLife;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalSquad* MySquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalHate* HateSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPalAIActionComponent* AIActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalAIBlackboardBase* PalAIBlackboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverwriteBlockDetectionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPathFollowingBlockDetectionParams BlockDetectionParams;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalAIBlackboardBase> PalBlackboardClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle DeadBodyDeleteTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDeadBodyTimeDelate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSelfTimeDelate_FromSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle SelfDeleteTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCheckStuckByTick;
    
public:
    APalAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WaitForSeconds(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SimpleMoveToActorWithLineTraceGround(const AActor* GoalActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowHateArrow();
    
    UFUNCTION(BlueprintCallable)
    void ShowActionDebug();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInitialValue(bool IsSquad, bool NotSleep);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveAI(bool Active);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RPCDummy();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPathFollowingRequestResult::Type> PalMoveToLocation(const FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPaths);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDeadTimerStart(FPalDeadInfo Info);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnChangedActiveCharacter(const bool bActive);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeChangeImportance(EPalCharacterImportanceType Next);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyTalkStart(APalPlayerCharacter* TalkPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyTalkEnd(APalPlayerCharacter* TalkPlayer);
    
    UFUNCTION(BlueprintCallable)
    void MoveToLocation_ErrorSupportMove(FVector GoalLocation);
    
    UFUNCTION(BlueprintCallable)
    void MoveToDirectly(FVector GoalLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnNavMesh_TargetLocation(FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnNavMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeader();
    
    UFUNCTION(BlueprintCallable)
    bool IsExistPathForLocation_ForBP_HeightRangeCheck(const FVector Location, const float AcceptanceRadius, const float UpOffset, const float DownOffset, FVector& OutGoalLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistPathForLocation_ForBP(const FVector Location, const float AcceptanceRadius) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetSquadLeader();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalSquad* GetSquad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalAIBlackboardBase* GetMyPalBlackboard();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalAIBlackboardBase* GetLeaderPalBlackboard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSquadBehaviour();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsnotSleepWildLife();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalHate* GetHateSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalAIActionComponent* GetAIActionComponent();
    
    UFUNCTION(BlueprintCallable)
    bool FindReachablePathLocation(TArray<FVector> RequestLocationArray, FVector& OutGoalLocation);
    
    UFUNCTION(BlueprintCallable)
    bool FindNearestNavmeshPointFromSelf(FVector& OutLocation);
    
private:
    UFUNCTION(BlueprintCallable)
    void DeleteSelfDeadBody();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreatePalBlackboard();
    
    UFUNCTION(BlueprintCallable)
    AActor* CopyTargetFromOtherAI(const AActor* FromAcotr);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddTargetPlayer_ForEnemy(AActor* PlayerOrPal);
    
    UFUNCTION(BlueprintCallable)
    void AddTargetNPC(AActor* NPC);
    
};

