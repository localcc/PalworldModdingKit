#pragma once
#include "CoreMinimal.h"
#include "CommonPlayerController.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "DelegateTickFunction.h"
#include "EPalGuildJoinRequestConfirm.h"
#include "EPalGuildJoinRequestResult.h"
#include "EPalLiftupRequestResult.h"
#include "EPalLogPriority.h"
#include "EPalStepAxisType.h"
#include "EPalWazaID.h"
#include "EWeaponNotifyType.h"
#include "PalDamageInfo.h"
#include "PalDamageResult.h"
#include "PalGotStatusPoint.h"
#include "PalInstanceID.h"
#include "PalItemId.h"
#include "PalItemSlotId.h"
#include "PalKillLogDisplayData.h"
#include "PalLogAdditionalData.h"
#include "PalOptionKeyboardSettings.h"
#include "PalOptionPadSettings.h"
#include "PalPlayerDataCharacterMakeInfo.h"
#include "Templates/SubclassOf.h"
#include "PalPlayerController.generated.h"

class AActor;
class APalCharacter;
class APalNetworkTransmitter;
class APalOilRigCannonBase;
class APalPlayerCharacter;
class APalPlayerState;
class APalSphereBodyBase;
class APawn;
class UCameraShakeBase;
class UCurveFloat;
class UPalAIActionComponent;
class UPalActionBase;
class UPalActionComponent;
class UPalCharacterMovementComponent;
class UPalCutsceneComponent;
class UPalDamageExplodeComponent;
class UPalIndividualCharacterHandle;
class UPalLoadoutSelectorComponent;
class UPalLongPressObject;
class UPalPlayerDamageCamShakeRegulator;
class UPalPlayerInputOneFlameCommandList;
class UPalShooterComponent;
class UPalUserWidgetTimerGaugeBase;

UCLASS(Blueprintable)
class APalPlayerController : public ACommonPlayerController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReleasedThrowPalButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReleasedSpawnPalButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPressedThrowPalButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPressedSpawnPalButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPressedPartnerInstructionsButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPressedMoveForwardDelegate, float, InputValue, bool, IsController);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPressedJumpDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPressConstructionMenuButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNotifyRideWallStopDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMoveInputDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLongReleasedSpawnPalButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLongPressedSpawnPalButtonDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInteractDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCoopRequestDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCoopReleaseDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAdmin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalAIActionComponent* AIActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalCutsceneComponent* CutsceneComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    APalNetworkTransmitter* Transmitter;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponPaletteLongPressTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PawnChangeCameraInterpChangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isOpenConstructionMenu;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCoopRequestDelegate OnCoopRequestDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCoopReleaseDelegate OnCoopReleaseDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractDelegate OnInteractDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractDelegate OnInteract2Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPressedJumpDelegate OnPressedJumpDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPressedMoveForwardDelegate OnInputMoveForwardDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveInputDelegate OnMoveInputDelegate;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPressedThrowPalButtonDelegate OnPressedThrowPalButtonDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReleasedThrowPalButtonDelegate OnReleasedThrowPalButtonDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPressedSpawnPalButtonDelegate OnPressedSpawnPalButtonDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLongPressedSpawnPalButtonDelegate OnLongPressedSpawnPalButtonDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReleasedSpawnPalButtonDelegate OnReleasedSpawnPalButtonDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLongReleasedSpawnPalButtonDelegate OnLongReleasedSpawnPalButtonDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPressedPartnerInstructionsButtonDelegate OnPressedPartnerInstructionsButtonDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPressConstructionMenuButtonDelegate OnPressConstructionMenuButtonDelegate;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNotifyRideWallStopDelegate OnNotifyRideWallStopDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* RecoilCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TimerGaugeDisplayOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> DamageCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalPlayerDamageCamShakeRegulator> DamageCamShakeRegulatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalPlayerDamageCamShakeRegulator* DamageCamShakeRegulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalLongPressObject*> LongPressObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> cameraRotateModifierMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> AutoAimRotatorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateTickFunction PawnAfterTickFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AutoAimTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ReticleTargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D GamePadNativeAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MouseNativeAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CacheActorRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalPlayerInputOneFlameCommandList* PlayerInputOneFlameCommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid GuildFlowUniqueIdClientCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsBuldingActiveFlag_ForServer;
    
public:
    APalPlayerController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void UpdateCharacterNickName_ToServer(const FPalInstanceID& InstanceId, const FString& NewNickName);
    
private:
    UFUNCTION(BlueprintCallable)
    bool TrySwitchOtomo();
    
public:
    UFUNCTION(BlueprintCallable)
    void ThrowPalByOutSide(AActor* PreOtomoPal, UPalIndividualCharacterHandle* PreHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void TeleportToSafePoint_ToServer();
    
    UFUNCTION(BlueprintCallable)
    void StartStepCoolDownCoolTimer();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StartFlyToServer();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ShooterComponent_StopReload_ToServer(UPalShooterComponent* Shooter, int32 ID);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ShooterComponent_SetTargetDirection_ToServer(UPalShooterComponent* Shooter, FVector targetDirection);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ShooterComponent_ReloadWeapon_ToServer(UPalShooterComponent* Shooter, int32 ID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ShooterComponent_PullCancel_ToServer(UPalShooterComponent* Shooter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ShooterComponent_ChangeIsShooting_ToServer(UPalShooterComponent* Shooter, int32 ID, bool IsShooting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ShooterComponent_ChangeIsAiming_ToServer(UPalShooterComponent* Shooter, int32 ID, bool IsAiming);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetupInternalForSphere_ToServer(int32 ID, APalSphereBodyBase* Target, APalCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetupInternalForSphere_ToALL(int32 ID, APalSphereBodyBase* Target, APalCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetupInternalForSphere(APalSphereBodyBase* Target, APalCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetSneakBonusFlagForSphere_ToServer(int32 ID, APalSphereBodyBase* Target, bool isSneak);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetSneakBonusFlagForSphere_ToALL(int32 ID, APalSphereBodyBase* Target, bool isSneak);
    
    UFUNCTION(BlueprintCallable)
    void SetSneakBonusFlagForSphere(APalSphereBodyBase* Target, bool isSneak);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void SetRiderRelativeRotation_ToServer(FRotator Rotator);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOtomoSlot(int32 SlotID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHoldOtomo(int32 HoldID, UPalIndividualCharacterHandle* OtomoHandle);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetFavoraitePal_ToServer(const FPalInstanceID& InstanceId, const bool IsFavorite);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableThrowPalFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableSwitchPalFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableInputFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableCoopFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetCaptureLevelForSphere_ToServer(int32 ID, APalSphereBodyBase* Target, int32 Level);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetCaptureLevelForSphere_ToALL(int32 ID, APalSphereBodyBase* Target, int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void SetCaptureLevelForSphere(APalSphereBodyBase* Target, int32 Level);
    
private:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void SetCameraRotatorToPlayerCharacter_ToServer(FRotator CameraRotator);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SendScreenLogToClient(const FString& Message, FLinearColor Color, float Duration, const FName& Key);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SendLog_ToClient(const EPalLogPriority Priority, const FText& Text, const FPalLogAdditionalData& AdditionalData);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendBuldingActiveFlag_ToServer(bool IsActive);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SelfKillPlayer();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RPCDummy();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestUseReturnToBaseCampItem_ToServer(const FPalItemSlotId& ItemData);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestUseReturnToBaseCampItem(const FPalItemSlotId& ItemData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSyncOilrigDestroyObject_ToServer(FGuid ObjectID);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestLiftupThrow_ToServer(AActor* Target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestLiftup_ToServer(APalCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestFastTravel_ToServer(const FGuid& LocationId);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestExitGuild_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestEnterToPlayerGuild_ToServer(APalPlayerCharacter* RespondentPlayerCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDestroyOilrigCannon(APalOilRigCannonBase* Cannon);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDecreaseWeaponDurability_ToServer(FPalItemId ItemId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestChangeGuildName_ToServer(const FString& NewGuildName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestChangeCharacterMakeInfo_ToServer(const FPalPlayerDataCharacterMakeInfo& NewMakeInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestChangeAdminGuild_ToServer(const FGuid& NextAdminPlayerUId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestBanPlayerFromGuild_ToServer(const FGuid& TargetPlayerUId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ReplaceEquipWaza_ToServer(const FPalInstanceID& InstanceId, const EPalWazaID OldWaza, const EPalWazaID NewWaza);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RemoveEquipWaza_ToServer(const FPalInstanceID& InstanceId, const EPalWazaID TargetWaza);
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveCameraRotateSpeedModifierRate(const FName& modifierName);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveSuccessRequestEnterGuild_ToClient(const EPalGuildJoinRequestResult Result, const FPalInstanceID& EnterPlayerInstanceId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveOfferJoinGuildPlayer_ToClient(const FGuid& FlowUniqueId, const FPalInstanceID& RequestPlayerInstanceId);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveLiftupRequestResult_ToClient(EPalLiftupRequestResult Result);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveFailedRequestGuildWithLog_ToClient(const EPalGuildJoinRequestResult Result);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveFailedRequestGuildWithAlert_ToClient(const EPalGuildJoinRequestResult Result);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ReauestDamageExplode_ToServer(UPalDamageExplodeComponent* ExplodeComponent, const FPalDamageInfo DamageInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlaySkill(int32 SlotID);
    
    UFUNCTION(BlueprintCallable)
    void PalDeprojectScreenPositionToWorld(FVector& StartLocation, FVector& RayDirection);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWeaponNotify(EWeaponNotifyType Type);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateWeightInventory(float Weight);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwitchOtomoSpawn();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStartGliding();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartCoopRequest();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStartAim();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnAndRideSupportPal();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReleasedSpawnPalButton();
    
    UFUNCTION(BlueprintCallable)
    void OnReceiveConfirmResultRequestGuild_ClientInternal(const bool bResponse);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedUseRecoveryItemButton();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOverWeightInventory(float Weight);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOtomoChangeIncrement();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOtomoChangeDecrement();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOtomo_ShortReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOtomo_Pressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOtomo_LongReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOtomo_LongPressed();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLongReleasedSpawnPalButton();
    
    UFUNCTION(BlueprintCallable)
    void OnLongPressedCoopButton();
    
    UFUNCTION(BlueprintCallable)
    void OnLanded(UPalCharacterMovementComponent* MovementComponent, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnJump(UPalCharacterMovementComponent* MovementComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeLocalPlayer_BP();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGetOffAndDespawnSupportPal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFlyRideTakeOff();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFixedWeightInventory(float Weight);
    
    UFUNCTION(BlueprintCallable)
    void OnEndRolling();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndCoopRequest();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEndAim();
    
    UFUNCTION(BlueprintCallable)
    void OnDestroyPawn(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(FPalDamageResult DamageResult);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeSwimming(bool IsInSwimming);
    
    UFUNCTION(BlueprintCallable)
    void OnChangePadOption(const FPalOptionPadSettings& PrevSettings, const FPalOptionPadSettings& NewSettings);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeOtomoSlot();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeKeyboardOption(const FPalOptionKeyboardSettings& PrevSettings, const FPalOptionKeyboardSettings& NewSettings);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeInstructions();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnActionBegin(const UPalActionBase* ActionBase);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyRideWallStop_ToClient();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyLiftupCampPal_ToClient(APalCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyConfirmRequestGuild_ToServer(const FGuid& FlowUniqueId, const bool bResponse);
    
    UFUNCTION(BlueprintCallable)
    void JumpCancelPalThrow(UPalCharacterMovementComponent* MovementComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwimming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRidingFlyPal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRiding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOtomoPartnerSkillCanTrigger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCooping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuldingActiveFlagForServer() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InactiveOtomo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSubclassOf<UPalUserWidgetTimerGaugeBase> GetTimerGaugeWidgetClass();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetRiderCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetPlayerUId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalPlayerState* GetPalPlayerState() const;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void GetOffToServer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetLowBodyPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetLowBodyPalCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalLoadoutSelectorComponent* GetLoadoutSelectorComponent() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetKeyboardMoveValue() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetDefaultPlayerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetControlPalCharacter() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetControllerRightStickValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetControllerLeftStickValue() const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void EndFlyToServer();
    
    UFUNCTION(BlueprintCallable)
    void EnableShootingByAction(const UPalActionComponent* Component);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoStep(EPalStepAxisType Axis, FVector2D StepDirection);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_TogglePartnerSkillNoDecrease();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_TeleportToNearestPlayer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_TeleportToNearestCamp();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_TeleportToBotLocation(int32 botIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_TeleportToBotCamp(int32 botIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_Teleport2D(const FVector& Location);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_ShowInvaderDebugLog();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_SetPalWorldTimeScale(float Rate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_SetPalWorldTime(int32 Hour);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_SetFPSForServer(float fps);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_RerollCharacterMake();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Debug_ReceiveCheatCommand_ToClient(const FString& Message);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_ParallelForUpdateActiveTiles();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_NotConsumeMaterialsInCraft();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_NotConsumeMaterialsInBuild();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_Muteki_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_InvaderMarchRandom();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_InvaderMarch();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_InsightsTraceStop_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_InsightsTraceStart_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_IgnoreRestrictedByItemsForPartnerSkill();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_HighJump_ToServer();
    
    UFUNCTION(BlueprintCallable)
    void Debug_HighJump();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_ForceSpawnRarePal_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_EnableCollectPalCount();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_CheatCommand_ToServer(const FString& Command);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_AddPlayerExp_ToServer(int32 addExp);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_AddPartyExp_ToServer(int32 addExp);
    
    UFUNCTION(Reliable, Server)
    void Debug_AddMoney_ToServer(int64 addValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_AddExpForALLPlayer_ToServer(int32 addExp);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ConfirmRequestGuild_ToClient(const FGuid& FlowUniqueId, const EPalGuildJoinRequestConfirm ConfirmType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCooping() const;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void CallOnCoopReleaseDelegate_ToServer();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddPlayerStatusPoint_ToServer(const TArray<FPalGotStatusPoint>& AddStatusPointArray);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddKillLog_Client(const FPalKillLogDisplayData& KillLogData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddEquipWaza_ToServer(const FPalInstanceID& InstanceId, const EPalWazaID NewWaza);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddDeathLog_Client(const FPalKillLogDisplayData& DeathLogData);
    
private:
    UFUNCTION(BlueprintCallable)
    void AddCameraRotateSpeedModifierRate(const FName& modifierName, float Rate);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateCurrentOtomoNearThePlayer();
    
};

