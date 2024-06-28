#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalMapObjectTreasureGradeType.h"
#include "EPalWazaID.h"
#include "FixedPoint.h"
#include "FlagContainer.h"
#include "PalCoopSkillSearchEffectParameter.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalInstanceID.h"
#include "PalPartnerSkillParameterRide.h"
#include "PalPassivePartnerSkillIdAndParameters.h"
#include "Templates/SubclassOf.h"
#include "PalPartnerSkillParameterComponent.generated.h"

class AActor;
class APalAIController;
class APalCharacter;
class APalFunnelCharacter;
class UPalCoopSkillModuleBase;
class UPalItemContainer;
class UPalPartnerSkillPassiveSkill;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalPartnerSkillParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToggleExecute, bool, IsExecuting);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStop);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSearchEffect);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOverheat);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEffectTimeChanged, FFixedPoint, EffectTime, FFixedPoint, effectTimeMax);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCoolDownTimeChanged, FFixedPoint, CoolDownTime, FFixedPoint, coolDownTimeMax);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCoolDownCompleted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeDisableGlider, bool, isDisable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeDisableFunnel, bool, isDisable);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOverheat OnOverheat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCoolDownCompleted OnCoolDownCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEffectTimeChanged OnEffectTimeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCoolDownTimeChanged OnCoolDownTimeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStart OnStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStop OnStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToggleExecute OnToggleExecute;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSearchEffect OnSearchEffectExecute;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeDisableFunnel OnChangeDisableFunnel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeDisableGlider OnChangeDisableGlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_ItemData> RestrictionItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkillName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWazaID WazaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFixedPoint EffectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFixedPoint effectTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFixedPoint ExecCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFixedPoint IdleCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFixedPoint IdleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFixedPoint CoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFixedPoint coolDownTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanThrowPal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanChangeWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsToggleKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIdlelCostDecreaseEveryFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExecSkillContinuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOverheat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExecuting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalCoopSkillModuleBase* SkillModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalPassivePartnerSkillIdAndParameters> PassiveSkills;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPartnerSkillParameterRide RideParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalFunnelCharacter> FunnelCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalAIController> FunnelControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWazaID FunnelAttackWazaID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalPartnerSkillPassiveSkill* PassiveSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActiveSkill_MainValue_Overview_EditorOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ActiveSkill_MainValueByRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ActiveSkill_OverWriteCoolTimeByRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer FunnelDisableFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer GliderDisableFlag;
    
public:
    UPalPartnerSkillParameterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetName(FName Name);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetDisableGlider_ToAll(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableFunnel(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetDisableFlagsBySetting(bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetCoopFlag_ForServer(bool IsCoop);
    
    UFUNCTION(BlueprintCallable)
    void Recover();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateInventoryContainer(UPalItemContainer* Container);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRideInactivated();
    
    UFUNCTION(BlueprintCallable)
    void OnRideActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerCharacterSpawned(FPalInstanceID ID);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInitializedCharacter(APalCharacter* OwnerCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsWorker();
    
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsPartner();
    
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsOtomoHolder();
    
    UFUNCTION(BlueprintCallable)
    void OnExec();
    
    UFUNCTION(BlueprintCallable)
    void OnComplated();
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsWorker();
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsPartner();
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsOtomoHolder();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggleKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRestrictedByItems(AActor* Trainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerTrigger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverheat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistActiveSkill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableGlider() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableFunnel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCoolDown() const;
    
    UFUNCTION(BlueprintCallable)
    float GetWazaPowerRate(EPalWazaID Waza) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalWazaID GetWazaID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSkillName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRideParameter(FPalPartnerSkillParameterRide& OutParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalDataTableRowName_ItemData> GetRestrictionItems() const;
    
private:
    UFUNCTION(BlueprintCallable)
    FFixedPoint GetMainDamage() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEffectTimeRatio();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFixedPoint GetEffectTimeMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFixedPoint GetEffectTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCoolDownTimeRatio();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFixedPoint GetCoolDownTimeMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFixedPoint GetCoolDownTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActiveSkillMainValueByRank() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceOverheat();
    
    UFUNCTION(BlueprintCallable)
    void ExecDuring(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    UPalCoopSkillModuleBase* CreateSkillModule(TSubclassOf<UPalCoopSkillModuleBase> SkillModuleClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanOpenTreasure(EPalMapObjectTreasureGradeType TreasureGrade) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanExec() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanChangeWeapon() const;
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallOnToggleExecute_ToAll(bool Execute);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallOnStop_ToAll();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallOnStartSearchEffect_ToAll(const FGuid& RequestPlayerUId, const FPalCoopSkillSearchEffectParameter& EffectParam);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallOnStart_ToAll();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallOnOverheat_ToAll();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallOnEffectTimeChanged_ToAll(FFixedPoint NewEffectTime, FFixedPoint NewEffectTimeMax);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallOnCoolDownTimeChanged_ToAll(FFixedPoint NewCoolDownTime, FFixedPoint NewCoolDownTimeMax);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallOnCoolDownCompleted_ToAll();
    
};

