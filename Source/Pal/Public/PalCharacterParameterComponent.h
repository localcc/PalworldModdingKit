#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EPalAdditionalEffectType.h"
#include "EPalElementType.h"
#include "EPalMapBaseCampWorkerOrderType.h"
#include "EPalWorkSuitability.h"
#include "EPalWorkType.h"
#include "EPalWorkWorkerWorkingState.h"
#include "FixedPoint64.h"
#include "FlagContainer.h"
#include "PalCharacterParameter_Work.h"
#include "PalDamageResult.h"
#include "PalInstanceID.h"
#include "PalMapObjectAppearanceData.h"
#include "PalMapObjectAppearanceDataWithId.h"
#include "PalStatusAccumulate.h"
#include "PalWorkAssignHandleId.h"
#include "PalCharacterParameterComponent.generated.h"

class AActor;
class APalCharacter;
class UPalCharacterParameterComponent;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;
class UPalItemContainer;
class UPalOtomoAttackStopJudgeByBallList;
class UPalWorkAssign;
class UPalWorkBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalCharacterParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateWorkAssignIdDelegate, UPalCharacterParameterComponent*, Parameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateParameterDelegate, UPalCharacterParameterComponent*, Parameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSPOverheatDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeTrapDelegate, bool, IsExist);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEnableSendReticleTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEnableMuteki;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFixedPoint64 LeanBackPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFixedPoint64 LeanBackMaxPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFixedPoint64 StunPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFixedPoint64 StunMaxPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSPOverheat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHyperArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugMuteki;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalElementType ElementType1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalElementType ElementType2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsOverrideTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector OverrideTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Trainer, meta=(AllowPrivateAccess=true))
    APalCharacter* Trainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalCharacter* OtomoPal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ReticleTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterHandle* IndividualHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_IndividualParameter, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterParameter* IndividualParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsStun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsEnableSpeedCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsCanSneakAttacked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsFriendBulletIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BiologicalGrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsPredator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsEdible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HiddenCollisionOverlapCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BurnCollisionOverlapCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LavaCollisionOverlapCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalElementType DamageUpElement_ByElementStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalElementType DamageDownElement_ByElementStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsDarknessRandomAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AttackUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DefenseUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalAdditionalEffectType, FPalStatusAccumulate> StatusAccumulateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsSleepAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector WildPalDrinkWaterPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsDisableOtomoReturnEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float MaxHPRate_ForTowerBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxSPBuffRate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult GroundHitResult;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUseGroundRayCast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer DisableGroundRayCast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFixedPoint64 SP;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid BaseCampDefenseModelId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalMapBaseCampWorkerOrderType BaseCampWorkerOrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBaseCampWorkerAttackableFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalMapObjectAppearanceData> UnreachableMapObjectInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalCharacterParameter_Work Work;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalWorkAssignHandleId WorkAssignId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalWorkType WorkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid BaseCampWalkAroundExcludeMapObjectInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAppliedBaseCampWorkerInitialized;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalWorkWorkerWorkingState WorkingState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PossessStaticItemId, meta=(AllowPrivateAccess=true))
    FName PossessStaticItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bBeingRescued;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float DyingHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DyingMaxHP;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ItemContainer, meta=(AllowPrivateAccess=true))
    UPalItemContainer* ItemContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsCapturedProcessing;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateParameterDelegate OnUpdatePossessItemDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateWorkAssignIdDelegate OnUpdateWorkAssignIdDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSPOverheatDelegate OnSPOverheatDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeTrapDelegate OnChangeTrapLegHoldDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeTrapDelegate OnChangeTrapMovingPanelDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector TrapDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalInstanceID, int32> DamageMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CanDropItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer DisableNaturalHealing_Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsImmortality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMimicryMode;
    
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> TrapLegHoldList;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> TrapMovingPanelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalOtomoAttackStopJudgeByBallList* OtomoAttackStopJudge;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectAppearanceDataWithId> UnreachableMapObjectRepInfoArray;
    
    UPalCharacterParameterComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ZeroDyingHP_ToServer();
    
public:
    UFUNCTION(BlueprintCallable)
    void ZeroDyingHP();
    
    UFUNCTION(BlueprintCallable)
    void SubDyingHP(float SubHP);
    
    UFUNCTION(BlueprintCallable)
    void SetupBiologicalGradeFromDatabase();
    
    UFUNCTION(BlueprintCallable)
    void SetTrainer(APalCharacter* inTrainer);
    
    UFUNCTION(BlueprintCallable)
    void SetSP(FFixedPoint64 NewSP);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetReticleTarget_ToServer(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void SetOverrideTargetLocation_ToServer(FVector TargetLocation);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetOverrideTargetLocation(FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetMuteki(FName flagName, bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetMP(FFixedPoint64 NewMP);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSP(FFixedPoint64 NewMaxSP);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxMP(FFixedPoint64 NewMaxMP);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetIsOverrideTarget_ToServer(int32 ID, bool IsOverride);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetIsOverrideTarget_ToALL(int32 ID, bool IsOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetIsOverrideTarget_Innner(bool IsOverride);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsOverrideTarget(bool IsOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCapturedProcessing(bool IsCaptureProcess);
    
    UFUNCTION(BlueprintCallable)
    void SetHP(FFixedPoint64 NewHP);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSendReticleTarget(FName flagName, bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetElementTypeFromDatabase(APalCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableNaturalHealing_Component(FName Key, bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableCreateUNKO(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetCoopingFlag(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void ReviveFromDying();
    
    UFUNCTION(BlueprintCallable)
    void ResetSP();
    
    UFUNCTION(BlueprintCallable)
    void ResetDyingHP();
    
    UFUNCTION(BlueprintCallable)
    void RemoveTrapMovingPanel(AActor* TrapActor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTrapLegHold(AActor* TrapActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSlipDamage(int32 Damage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Trainer();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PossessStaticItemId();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemContainer();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_IndividualParameter();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInitializedCharacter(APalCharacter* OwnerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnInitialize_AfterSetIndividualParameter(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(FPalDamageResult DamageResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOtomo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMuteki();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInHiddenCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHyperArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHittingLava() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDyingHPZero() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDyingHPMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCooping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssignedToAnyWork() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssignedFixed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFloorPhysMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasElementType(const EPalElementType ElementType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetWorkId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalWorkAssign* GetWorkAssign() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalWorkBase* GetWork() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFixedPoint64 GetSP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShotAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSanity();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetReticleTargetActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOverrideTargetLocation_ConsiderRide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalOtomoAttackStopJudgeByBallList* GetOtomoAttackStopJudge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNickname(FString& outName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFixedPoint64 GetMP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMeleeAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFixedPoint64 GetMaxSP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSanity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFixedPoint64 GetMaxMP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFixedPoint64 GetMaxHP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxFullStomach();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetMapObjectInstanceIdApproachTo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLegHoldResistLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCapturedProcessing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterParameter* GetIndividualParameter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHPRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFixedPoint64 GetHP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHitResult GetHitGroundResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFullStomach();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EPhysicalSurface> GetFloorPhisicalSurface() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFloorLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefense();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCraftSpeed_WorkSuitability(const EPalWorkSuitability WorkSuitability);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCraftSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetBaseCampId() const;
    
    UFUNCTION(BlueprintCallable)
    void AddTrapMovingPanel(AActor* TrapActor);
    
    UFUNCTION(BlueprintCallable)
    void AddTrapLegHold(AActor* TrapActor);
    
    UFUNCTION(BlueprintCallable)
    void AddDyingHP(float AddHP);
    
};

