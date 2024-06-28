#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EPalBaseCampWorkerEventType.h"
#include "EPalBaseCampWorkerSickType.h"
#include "EPalCharacterNaturalUpdateType.h"
#include "EPalFoodStatusEffectType.h"
#include "EPalGenderType.h"
#include "EPalGenusCategoryType.h"
#include "EPalInvaderType.h"
#include "EPalPassiveSkillEffectType.h"
#include "EPalStatusHungerType.h"
#include "EPalStatusPhysicalHealthType.h"
#include "EPalTribeID.h"
#include "EPalWazaID.h"
#include "EPalWorkSuitability.h"
#include "FixedPoint64.h"
#include "FlagContainer.h"
#include "FloatContainer.h"
#include "PalContainerId.h"
#include "PalFoodRegeneInfo.h"
#include "PalGotStatusPoint.h"
#include "PalIndividualCharacterEquipItemContainerHandler.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalItemSlotIdAndNum.h"
#include "PalPhantomReplicateInfo.h"
#include "PalWorkSuitabilityPreferenceInfo.h"
#include "PalIndividualCharacterParameter.generated.h"

class APalCharacter;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;
class UPalItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class UPalIndividualCharacterParameter : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWorkSuitabilityChangedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateWorkSuitabilityOptionDelegate, const FPalWorkSuitabilityPreferenceInfo&, NewWorkSuitabilityOption);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateUnusedStatusPointDelegate, int32, UnusedPoint);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FUpdateStatusPointDelegate, FName, StatusName, int32, prevPoint, int32, newPoint);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FUpdateSPDelegate, FFixedPoint64, nowSP, FFixedPoint64, nowMaxSP, bool, isOverHeated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateSkinNameDelegate, const FName&, NewSkinName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateShieldMaxHPDelegate, FFixedPoint64, nowShieldMaxHP);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateShieldHPDelegate, FFixedPoint64, nowShieldMaxHP, FFixedPoint64, nowShieldHP);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateSanityDelegate, float, nowSanity, float, oldSanity);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateReviveTimerDelegate, float, NowReviveTimer);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateRankUpExpDelegate, int32, nowRankUpExp, int32, oldRankUpExp);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateRankDelegate, int32, nowRank, int32, oldRank);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateNickNameWithParameterDelegate, UPalIndividualCharacterParameter*, IndividualParameter, const FString&, NewNickName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateNickNameDelegate, const FString&, NewNickName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateLevelDelegate, int32, addLevel, int32, nowLevel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateHungerTypeDelegate, EPalStatusHungerType, Current, EPalStatusHungerType, Last);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateHPDelegate, FFixedPoint64, nowHP, FFixedPoint64, nowMaxHP);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateGroupIdDelegate, const FGuid&, NewGroupId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateFullStomachDelegate, float, Current, float, Last);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateBaseCampIdDelegate, const FGuid&, NewBaseCampId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTriedConsumeFoodDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTalentChangedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStatusRankChangedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FShieldDamageDelegate, int32, Damage, bool, IsShieldBroken);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRevivedParameterDelegate, UPalIndividualCharacterParameter*, IndividualParameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRevivedDelegate, UPalIndividualCharacterParameter*, IndividualParameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFavoritePalChangedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInvaderTargetChangedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGotStatusPointListChangedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndMedicalBedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDeadBodyDelegate, UPalIndividualCharacterHandle*, IndividualHandle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FConditionChangedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangeMasteredWazaDelegate, UPalIndividualCharacterParameter*, IndividualParameter, EPalWazaID, WazaID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeEquipWazaDelegate, UPalIndividualCharacterParameter*, IndividualParameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChangeBuffStatusDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAddExpDelegate, int32, addExp, int32, nowExp);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAddEquipWazaDelegate, EPalWazaID, WazaID);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateLevelDelegate OnUpdateLevelDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateRankDelegate OnUpdateRankDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateRankUpExpDelegate OnUpdateRankUpExpDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddExpDelegate OnAddExpDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateHPDelegate OnUpdateHPDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRevivedParameterDelegate OnRevivedParameterDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateSPDelegate OnUpdateSPDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateFullStomachDelegate OnUpdateFullStomachDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateHungerTypeDelegate OnUpdateHungerTypeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateNickNameDelegate OnUpdateNickNameDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateNickNameWithParameterDelegate OnUpdateNickNameWithParameterDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateShieldMaxHPDelegate OnUpdateShieldMaxHPDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateShieldHPDelegate OnUpdateShieldHPDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShieldDamageDelegate OnShieldDamageDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateSanityDelegate OnUpdateSanityDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateUnusedStatusPointDelegate OnUpdateUnusedStatusPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateStatusPointDelegate OnUpdateStatusPointDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeBuffStatusDelegate OnChangeBuffDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConditionChangedDelegate OnConditionChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorkSuitabilityChangedDelegate OnWorkSuitabilityChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGotStatusPointListChangedDelegate OnGotStatusPointListChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatusRankChangedDelegate OnStatusRankChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInvaderTargetChangedDelegate OnInvaderTargetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTriedConsumeFoodDelegate OnTriedConsumeFoodDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateGroupIdDelegate OnUpdateGroupIdDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateReviveTimerDelegate OnUpdateReviveTimerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateWorkSuitabilityOptionDelegate OnUpdateWorkSuitabilityOptionDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalentChangedDelegate OnTalentChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateBaseCampIdDelegate OnUpdateBaseCampIdDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFavoritePalChangedDelegate OnFavoritePalChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndMedicalBedDelegate OnEndMedicalBedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRevivedDelegate OnRevivedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeadBodyDelegate OnDeadBodyDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateSkinNameDelegate OnUpdateSkinNameDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IndividualActor, meta=(AllowPrivateAccess=true))
    APalCharacter* IndividualActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalInstanceID IndividualId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, APalCharacter*> PhantomActorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PhantomActorReplicateArray, meta=(AllowPrivateAccess=true))
    TArray<FPalPhantomReplicateInfo> PhantomActorReplicateArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SaveParameter, meta=(AllowPrivateAccess=true))
    FPalIndividualCharacterSaveParameter SaveParameter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddEquipWazaDelegate OnAddEquipWazaDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeEquipWazaDelegate OnChangeEquipWazaDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeMasteredWazaDelegate OnChangeMasteredWazaDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWaitResponseWordFiltering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WaitingFilterNickName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NextFilterNickName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer DisableNaturalHealing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFloatContainer AdditionalNatureHealingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalIndividualCharacterSaveParameter SaveParameterMirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UPalItemContainer* EquipItemContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid BaseCampId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalCharacter> SkinClassPtr;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FString Debug_CurrentAIActionName;
    
    UPalIndividualCharacterParameter();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UseItemInSlot(const FPalItemSlotIdAndNum SlotIdAndNum);
    
    UFUNCTION(BlueprintCallable)
    bool TryFindEatItem(const FPalContainerId& ContainerId, int32& SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void StoreIndividualActorInfoToSaveParameter();
    
    UFUNCTION(BlueprintCallable)
    void StartRemainderOfLifeTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartRecuperatingInMedicalBed();
    
    UFUNCTION(BlueprintCallable)
    void SetStatusPoint(FName StatusName, int32 Point);
    
    UFUNCTION(BlueprintCallable)
    void SetSkinName(FName InSkinName);
    
    UFUNCTION(BlueprintCallable)
    void SetSkinAppliedCharacterId(FGuid InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void SetSkinApplied(bool bIsApplied);
    
    UFUNCTION(BlueprintCallable)
    void SetShieldMaxHP(FFixedPoint64 NextSheildMaxHP);
    
    UFUNCTION(BlueprintCallable)
    void SetShieldHP(FFixedPoint64 NextSheildHP);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicalHealth(EPalStatusPhysicalHealthType PhysicalHealth);
    
    UFUNCTION(BlueprintCallable)
    void SetNoFallDamageHeightLastJumpedLocation();
    
    UFUNCTION(BlueprintCallable)
    void SetLastJumpedLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void SetInvaderData(EPalInvaderType InvaderType, const FGuid InBaseCampId);
    
    UFUNCTION(BlueprintCallable)
    void SetInArena(bool InArena);
    
    UFUNCTION(BlueprintCallable)
    void SetExStatusPoint(FName StatusName, int32 Point);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableNaturalHealing(FName Key, bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetDecreaseFullStomachRates(const FName Name, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void ResetLastJumpedLocation();
    
    UFUNCTION(BlueprintCallable)
    void RemoveEquipWaza(EPalWazaID WazaID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDecreaseFullStomachRates(const FName Name);
    
    UFUNCTION(BlueprintCallable)
    void PartyPalMealInventoryFood();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SaveParameter();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PhantomActorReplicateArray();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IndividualActor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnReceivedWordFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
public:
    UFUNCTION(BlueprintCallable)
    void NaturalUpdateSaveParameter(const EPalCharacterNaturalUpdateType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStatusPointAllMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStatusPointAddable(FName StatusName, int32& AddablePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSleeping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkinApplied() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRarePal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNoFallDamageLastJumpedLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNocturnal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInArena() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHPFullRecovered();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFavoritePal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float HungerParameterRate() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWorkSuitabilityRank(const EPalWorkSuitability InWorkSuitability, const int32 SuitabilityRank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWorkSuitability(const EPalWorkSuitability InWorkSuitability) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMasteredWaza(EPalWazaID WazaID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGenusCategory(EPalGenusCategoryType Category);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWorkSuitabilityRankWithCharacterRank(const EPalWorkSuitability WorkSuitability) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EPalWorkSuitability, int32> GetWorkSuitabilityRanksWithCharacterRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWorkSuitabilityRank(const EPalWorkSuitability InWorkSuitability) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWorkSpeedRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalBaseCampWorkerSickType GetWorkerSick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnusedStatusPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalTribeID GetTribeID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalStatusPoint(FName StatusName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetStatusPointList(TArray<FPalGotStatusPoint>& OutPointList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStatusPoint(FName StatusName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSkinName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetSkinAppliedCharacterId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShotAttack_withBuff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShotAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFixedPoint64 GetShieldMaxHP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFixedPoint64 GetShieldHP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalIndividualCharacterSaveParameter GetSaveParameter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSanityValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSanityRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalFoodRegeneInfo GetRegeneItemName() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRatePassiveSkill(EPalPassiveSkillEffectType EffectType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRatePartnerSkill(EPalPassiveSkillEffectType EffectType) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRankUpExp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalStatusPhysicalHealthType GetPhysicalHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetPassiveSkillList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPassiveRateBySkillEffect(EPalPassiveSkillEffectType EffectType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPassiveRateByEquipment(EPalPassiveSkillEffectType EffectType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPalSoulRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNickname(FString& outName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMeleeAttack_withBuff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMeleeAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSanityValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFixedPoint64 GetMaxHP_withBuff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxHP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxFullStomach() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EPalWazaID> GetMasteredWaza() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastJumpedLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetIndividualActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalStatusHungerType GetHungerType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHPRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFixedPoint64 GetHP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetGroupId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalGenderType GetGenderType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFullStomachRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFullStomachDecreasingRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFullStomach() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFoodStatusRate(EPalFoodStatusEffectType EffectType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExStatusPoint(FName StatusName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EPalWazaID> GetEquipWaza() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalContainerId GetEquipItemContainerId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalIndividualCharacterEquipItemContainerHandler GetEquipItemContainerHandler() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EPalWazaID> GetEquipableWaza() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEffectFoodTimeRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetEffectFoodName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefense_withBuff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefense() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefenceRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalWorkSuitability GetCurrentWorkSuitability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCraftSpeedSickRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCraftSpeedByWorkSuitability(const EPalWorkSuitability WorkSuitability) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCraftSpeedBuffRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCraftSpeed_withBuff_WorkSuitability(const EPalWorkSuitability Suitability) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCraftSpeed_withBuff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCraftSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCharacterID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<APalCharacter> GetCharacterClass();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalBaseCampWorkerEventType GetBaseCampWorkerEventType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetBaseCampId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAttackRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAffectSanityValue() const;
    
    UFUNCTION(BlueprintCallable)
    void FullRecoveryHP();
    
    UFUNCTION(BlueprintCallable)
    void EndRecuperatingInMedicalBed();
    
    UFUNCTION(BlueprintCallable)
    void DecrementUnusedStatusPoint();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseShieldHPByDamage(int32 Damage);
    
    UFUNCTION(BlueprintCallable)
    void ClearEquipWaza();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddTalentByItem(FName ItemName) const;
    
    UFUNCTION(BlueprintCallable)
    void AddPassiveSkill(FName AddSkill, FName OverrideSkill);
    
    UFUNCTION(BlueprintCallable)
    void AddHP(FFixedPoint64 PlusHP);
    
    UFUNCTION(BlueprintCallable)
    void AddEquipWaza(EPalWazaID WazaID);
    
};

