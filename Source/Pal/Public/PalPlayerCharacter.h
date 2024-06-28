#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EPalBattleBGMType.h"
#include "EPalBossBattleDifficulty.h"
#include "EPalCharacterMovementCustomMode.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "EPalPlayerBattleFinishType.h"
#include "PalCharacter.h"
#include "PalDamageResult.h"
#include "PalDeadInfo.h"
#include "PalDyingEndInfo.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalPlayerDataCharacterMakeInfo.h"
#include "Templates/SubclassOf.h"
#include "PalPlayerCharacter.generated.h"

class AActor;
class APalPlayerCharacter;
class APalPlayerController;
class UAnimMontage;
class UPalActionBase;
class UPalArenaSequencer;
class UPalBaseCampModel;
class UPalBuilderComponent;
class UPalCharacterMovementComponent;
class UPalInsideBaseCampCheckComponent;
class UPalInteractComponent;
class UPalItemContainer;
class UPalLoadoutSelectorComponent;
class UPalObjectReplicatorComponent;
class UPalPlayerBattleSituation;
class UPalPlayerGenderChanger;
class UPalShooterComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class APalPlayerCharacter : public APalCharacter, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToggleSleepPlayerBedDelegate, bool, IsSleep);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToggleGrapplingCancelDelegate, bool, CancelEnable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerReviveDelegate, APalPlayerCharacter*, Player);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerRespawnDelegate, APalPlayerCharacter*, Player);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerMoveToRespawnLocationDelegate, APalPlayerCharacter*, Player, FVector, Location);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerDeathAction);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLiftupCampPalDelegate, APalCharacter*, LiftingPal);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInsufficientPalStaminaDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndLiftCampPalDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCombatStartUIActionDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCombatRankDownDelegate, EPalPlayerBattleFinishType, FinishType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterMakeInfoUpdateDelegate, FPalPlayerDataCharacterMakeInfo, MakeInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeRegionAreaDelegate, const FName&, RegionNameID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangePlayerBattleMode, bool, IsBattle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnChangeBossTowerEntrancePlayer, FName, BossType, EPalBossBattleDifficulty, Difficulty, const TArray<APalPlayerCharacter*>&, PlayerList);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeBattleBGMDelegate, EPalBattleBGMType, Rank);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnArenaSequenceStartDelegate, UPalArenaSequencer*, ArenaSequencer);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnArenaSequenceEndDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalShooterComponent* ShooterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalInteractComponent* InteractComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalBuilderComponent* BuilderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalLoadoutSelectorComponent* LoadoutSelectorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalInsideBaseCampCheckComponent* InsideBaseCampCheckComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalObjectReplicatorComponent* HighPriorityObjectReplicatorComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerReviveDelegate OnPlayerReviveDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerRespawnDelegate OnPlayerRespawnDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerMoveToRespawnLocationDelegate OnPlayerMoveToRespawnLocationDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCombatRankDownDelegate OnCombatRankDownDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeBattleBGMDelegate OnChangeBattleBGMDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangePlayerBattleMode OnChangeBattleModeDelegate_ForPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerDeathAction OnPlayerDeathAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeBossTowerEntrancePlayer OnChangeBossTowerEntrancePlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeBossTowerEntrancePlayer OnChangeBossEntrancePlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCombatStartUIActionDelegate OnCombatStartUIAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeRegionAreaDelegate OnChangeRegionArea;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLiftupCampPalDelegate OnLiftupCampPal;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndLiftCampPalDelegate OnEndLiftCampPal;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToggleSleepPlayerBedDelegate OnToggleSleepPlayerBed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToggleGrapplingCancelDelegate OnGrapplingCancelPlayerBed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInsufficientPalStaminaDelegate OnInsufficientPalStamina;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterMakeInfoUpdateDelegate OnCharacterMakeInfoUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnArenaSequenceStartDelegate OnArenaSequenceStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnArenaSequenceEndDelegate OnArenaSequenceEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName LastInsideRegionNameID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float PlayerCameraYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float PlayerCameraPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsAdjustedLocationByLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* IdleAnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalPlayerBattleSituation* PlayerBattleSituation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsNearCommonEnemyFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSetRespawnTelemetry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalPlayerGenderChanger> GenderChangerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalPlayerGenderChanger* GenderChanger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SpectatorMode, meta=(AllowPrivateAccess=true))
    bool bSpectatorMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CharacterMakeInfo, meta=(AllowPrivateAccess=true))
    FPalPlayerDataCharacterMakeInfo CharacterMakeInfo;
    
public:
    APalPlayerCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopIdleAnimation();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetSpectatorMode(bool bSpectator);
    
    UFUNCTION(BlueprintCallable)
    void SetNearCommonEnemy(bool IsExistNearEnemy);
    
    UFUNCTION(BlueprintCallable)
    void SetDisablePlayerInput(FName flagName, bool Disable);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetCharacterMakeInfo_ToAll(FPalPlayerDataCharacterMakeInfo NextInfo);
    
    UFUNCTION(BlueprintCallable)
    void PlayIdleAnimation(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void PlayEatAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateEssentialItemContainer(UPalItemContainer* Container);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartGliding();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSPOverhead();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpectatorMode(bool before);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterMakeInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnReloadStart();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnJumpDisable();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterBaseCamp_StartBaseCampCombat(UPalBaseCampModel* CampModel);
    
    UFUNCTION(BlueprintCallable)
    void OnEndIdle();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndGliding();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDyingDeadEnd_Server(APalPlayerCharacter* PlayerCharacter, const FPalDyingEndInfo& DyingEndInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnDownBattleEnemyRank(EPalPlayerBattleFinishType FinishType);
    
    UFUNCTION(BlueprintCallable)
    void OnDeadPlayer_Server(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnDamagePlayer_Server(FPalDamageResult DamageResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteInitializeParameter(APalCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeShooterState(bool IsAim, bool IsShoot);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangePrevWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeNextWeapon();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnChangeNearEnemy_ToAll(bool IsExist);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeMovementMode(UPalCharacterMovementComponent* Component, TEnumAsByte<EMovementMode> prevMode, TEnumAsByte<EMovementMode> newMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnChangeBattleBGM(EPalBattleBGMType Rank);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginAction(const UPalActionBase* action);
    
    UFUNCTION(BlueprintCallable)
    bool IsIdle() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGuildMaster() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterMakeInfoInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAdjustedLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalPlayerController* GetPalPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLastInsideRegionNameID(FName& OutNameID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USkeletalMeshComponent* GetHeadMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalPlayerDataCharacterMakeInfo GetCharacterMakeInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetCameraRotator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateLantern();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearLantern();
    
    UFUNCTION(BlueprintCallable)
    void ChangeToMale();
    
    UFUNCTION(BlueprintCallable)
    void ChangeToFemale();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallReviveDelegate();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallRespawnDelegate();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallMoveToRespawnLocationDelegate(FVector Location);
    
private:
    UFUNCTION(BlueprintCallable)
    void AdjustLocationByLoad(APalCharacter* InCharacter);
    

    // Fix for true pure virtual functions not being implemented
};

