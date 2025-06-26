#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalActionType.h"
#include "EPalFishingResultType.h"
#include "EPalFishingRodState.h"
#include "EPalFishingSpotDifficultyType.h"
#include "PalDamageResult.h"
#include "PalDeadInfo.h"
#include "PalFishingCatchBattleParameter.h"
#include "PalFishingCutsceneCharacterInfo.h"
#include "PalFishingCutsceneInfo.h"
#include "PalGrantCharacterRequestData.h"
#include "PalStaticItemIdAndNum.h"
#include "PalFishingComponent.generated.h"

class APalFishingSpotArea;
class UPalFishingRodModule;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalFishingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSuccessCatchBattleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartShowCutsceneDelegate, const FPalFishingCutsceneInfo&, CutsceneInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartFishingDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartCatchBattleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStartAimDelegate, const TArray<FPalStaticItemIdAndNum>&, BaitItemInfoList, int32, SelectedIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPickFishDelegate, FVector, FloatLocation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadedCutsceneInfoDelegate, const FPalFishingCutsceneInfo&, CutsceneInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFirstFishingDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFinishedShowCutsceneDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFailedCatchBattleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndFishingDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndAimDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeTargetSpotDelegate, EPalFishingSpotDifficultyType, DifficultyType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeBaitDelegate, int32, SelectIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCancelFishingDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartAimDelegate OnStartAimDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndAimDelegate OnEndAimDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartFishingDelegate OnStartFishingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndFishingDelegate OnEndFishingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCancelFishingDelegate OnCancelFishingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartCatchBattleDelegate OnStartCatchBattleDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSuccessCatchBattleDelegate OnSuccessCatchDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFailedCatchBattleDelegate OnFailedCatchDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadedCutsceneInfoDelegate OnLoadedCutsceneInfoDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartShowCutsceneDelegate OnStartShowCutsceneDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedShowCutsceneDelegate OnFinishedShowCutsceneDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPickFishDelegate OnPickFishDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeBaitDelegate OnChangeBaitDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeTargetSpotDelegate OnChangeTargetSpotDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFirstFishingDelegate OnFirstFishingDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalFishingRodModule* FishingRodModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalFishingCatchBattleParameter CatchBattleParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalFishingCutsceneInfo LoadedCutsceneInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsFishingFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsCatchBattleFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsPressedFishingButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsAimingFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsSuccessUseBaitFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SelectedBaitIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalStaticItemIdAndNum> CurrentBaitItemInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsRequestedUseBaitFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsRequestedCatchBattleFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SelectedBaitItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName UsedBaitItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FishingFloatLocation, meta=(AllowPrivateAccess=true))
    FVector FishingFloatLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RodState, meta=(AllowPrivateAccess=true))
    EPalFishingRodState FishingRodState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalGrantCharacterRequestData GrantCharacterData;
    
public:
    UPalFishingComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void SetCurrentFishingRodModule(UPalFishingRodModule* InFishingRodModule);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayActionForOtomo(EPalActionType Type);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSuccessFight();
    
    UFUNCTION(BlueprintCallable)
    void OnSuccessCatchBattle();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RodState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FishingFloatLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedFishingButton();
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedSearchResult(const EPalFishingResultType resultType);
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedCreatedCharacter(const FPalGrantCharacterRequestData RequestData);
    
    UFUNCTION(BlueprintCallable)
    void OnPressedFishingCancelButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedFishingButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPickFish();
    
    UFUNCTION(BlueprintCallable)
    void OnFailedFight();
    
    UFUNCTION(BlueprintCallable)
    void OnFailedCatchBattle();
    
    UFUNCTION(BlueprintCallable)
    void OnDead(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnDamaged(FPalDamageResult DamageResult);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeTargetSpot(APalFishingSpotArea* TargetSpot);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeRodState(EPalFishingRodState State);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyStartCatchBattle_ToALL(const FGuid& PlayerUId, const FName& PalId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyObtainedCharacter_ToALL(const FGuid& PlayerUId, const FPalFishingCutsceneCharacterInfo& CharacterInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyFinishCutscene_ToALL();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyFailedCatchBattle_ToALL();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyEndFishing_ToALL();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFishingButtonPressed() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFishing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstFishing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCatchBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAiming() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerInputFishingDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalFishingRodModule* GetFishingRodModule() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishShowCutscene();
    
};

