#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Engine/HitResult.h"
#include "EPalCharacterImportanceType.h"
#include "EPalShooterFlagContainerPriority.h"
#include "EPalWeaponType.h"
#include "EWeaponAnimationType.h"
#include "EWeaponNotifyType.h"
#include "FlagContainer.h"
#include "LayeredFlagContainer.h"
#include "PalDeadInfo.h"
#include "RidingAnimationInfo.h"
#include "WeaponAnimationInfo.h"
#include "WeaponNotifyAnimationInfo.h"
#include "PalShooterComponent.generated.h"

class APalWeaponBase;
class UAnimMontage;
class UInputComponent;
class UPalActionBase;
class UPalCharacterMovementComponent;
class UPalShooterAnimeAssetBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalShooterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStartAimDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FReturnTriggerDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPullTriggerDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeaponNotifyDelegate, EWeaponNotifyType, Type);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpdatedUsableHandFlag, bool, CanUseLeftHandFlag, bool, CanUseRightHandFlag);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReloadStart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReloadBullet);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndShootingAnimation, UAnimMontage*, Montage);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeWeapon, APalWeaponBase*, Weapon);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndAimDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeTargetDirectionDelegate, FVector, Direction);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangeStateDelegate, bool, IsAim, bool, IsShoot);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeTargetDirectionDelegate OnChangeTargetDirectionDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartAimDelegate OnStartAim;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAimDelegate OnEndAim;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPullTriggerDelegate OnPullTrigger;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnTriggerDelegate OnReleaseTrigger;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeStateDelegate OnChangeState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponNotifyDelegate OnWeaponNotifyDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndShootingAnimation OnEndShootingAnimationDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeWeapon OnChangeWeaponDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReloadStart OnReloadStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReloadBullet OnReloadBulletDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdatedUsableHandFlag OnUpdatedUsableHandFlagDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkSpeedMultiplierInAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkSpeedMultiplierInHipShoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeWeaponInterpTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalWeaponType, TSoftClassPtr<UPalShooterAnimeAssetBase>> DefaultWeaponAnimeAssetBPSoftClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<APalWeaponBase>, TSoftClassPtr<UPalShooterAnimeAssetBase>> OtherWeaponAnimeAssetBPSoftClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<APalWeaponBase>, EPalWeaponType> WeaponCategoryForPreLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUseBlurUpdate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalWeaponType, UPalShooterAnimeAssetBase*> DefaultWeaponAnimeAssetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<APalWeaponBase>, UPalShooterAnimeAssetBase*> OtherWeaponAnimeAssetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<EPalWeaponType> LoadedDefaultWeaponSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<APalWeaponBase>> LoadedOtherWeaponSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EWeaponAnimationType, FWeaponNotifyAnimationInfo> OverrideWeaponNotifyAnimationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnChangeTargetDirection, meta=(AllowPrivateAccess=true))
    FVector targetDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShooting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRequestAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRequestPullTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagContainer UseControllerRotationYawFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalWeaponBase* HasWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalWeaponBase* CacheNextWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWeaponAnimationInfo PrevWeaponAnimationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisableShootingTemporarily;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLayeredFlagContainer DisableAimFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLayeredFlagContainer DisableShootFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLayeredFlagContainer DisableWeaponChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer HiddenWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PullTriggerCountDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PullTriggerCountDownCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ElapsedTimeSinceWeaponChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalWeaponType OverrideWeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnstoppable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHoldTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBufferedInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShootingHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttachRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeIsShootingPulling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeIsShootingRelaseRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalWeaponBase* NPCWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentBulletBlurRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RapidFireBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStream;
    
public:
    UPalShooterComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void StopWeaponChangeAnimation();
    
    UFUNCTION(BlueprintCallable)
    void StopReloadInternal();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StopReload_ToServer(int32 ID);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void StopReload_ToALL(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void StopReload();
    
    UFUNCTION(BlueprintCallable)
    void StopPullTriggerAnime_forBP();
    
    UFUNCTION(BlueprintCallable)
    void StartAim();
    
    UFUNCTION(BlueprintCallable)
    void SetUsedRightHand(FName flagName, bool bIsUsed);
    
    UFUNCTION(BlueprintCallable)
    void SetUsedLeftHand(FName flagName, bool bIsUsed);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetupInputComponent(UInputComponent* InputComponent);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void SetTargetDirection_ToServer(FVector NewTargetDirection);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTargetDirection_ByServer(FVector NewTargetDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetDirection(const FVector& Direction);
    
    UFUNCTION(BlueprintCallable)
    void SetShootingHold(bool IsHold);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideWeaponType(EPalWeaponType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenAttachWeapon(FName flagName, bool isHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableWeaponForUI(bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableWeaponChangeAnime(FName flagName, bool bIsUsed);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableShootFlag_Layered(EPalShooterFlagContainerPriority Priority, FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableShootFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableReloadFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableLeftHandAttachFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableEndAim(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableChangeWeaponFlag_Layered(EPalShooterFlagContainerPriority Priority, FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableChangeWeaponFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableAimFlag_Layered(EPalShooterFlagContainerPriority Priority, FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableAimFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void ResetOverrideWeaponType();
    
private:
    UFUNCTION(BlueprintCallable)
    void ReloadWeaponInternal();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ReloadWeapon_ToServer(int32 ID);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ReloadWeapon_ToALL(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void ReloadWeapon();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseTrigger();
    
    UFUNCTION(BlueprintCallable)
    void PullTrigger();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWeaponNotify(EWeaponNotifyType Type);
    
    UFUNCTION()
    void OnWeaponAnimationNotifyEnd(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    
    UFUNCTION()
    void OnWeaponAnimationNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    
    UFUNCTION(BlueprintCallable)
    void OnStartOwnerAction(const UPalActionBase* action);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerAnimInitialized();
    
    UFUNCTION(BlueprintCallable)
    void OnLanded(UPalCharacterMovementComponent* Component, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnJump(UPalCharacterMovementComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void OnEndReloadAnimation(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnDead(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnCrouch(UPalCharacterMovementComponent* Component, bool bIsCrouch);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeTargetDirection();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnChangeChangeImportance(EPalCharacterImportanceType Next);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShooting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReloading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayShootingAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHiddenAttachWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAiming() const;
    
    UFUNCTION(BlueprintCallable)
    UPalShooterAnimeAssetBase* GetThrowAnimAsset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTargetDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWeaponAnimationInfo GetPrevWeaponAnimationInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalWeaponBase* GetHasWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWeaponAnimationInfo GetCurrentWeaponAnimationInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRidingAnimationInfo GetCurrentRidingAnimationInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentBulletBlurRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChangeWeaponAnimationWeight() const;
    
    UFUNCTION(BlueprintCallable)
    UPalShooterAnimeAssetBase* GetBowAnimAsset();
    
    UFUNCTION(BlueprintCallable)
    void EndAim();
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeWeapon(APalWeaponBase* Weapon);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ChangeIsShooting_ToServer(int32 ID, bool NewIsShooting);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ChangeIsShooting_ToALL(int32 ID, bool NewIsShooting);
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeIsShooting(bool NewIsShooting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ChangeIsAiming_ToServer(int32 ID, bool NewIsAiming);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ChangeIsAiming_ToALL(int32 ID, bool NewIsAiming);
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeIsAiming(bool NewIsAiming);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanWeaponChangeAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseWeapon(APalWeaponBase* Weapon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseRightHand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseLeftHand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanReload() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLeftHandAttach() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanChangeNextWeapon_Layered(EPalShooterFlagContainerPriority Priority) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanChangeNextWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAutoAim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAim() const;
    
    UFUNCTION(BlueprintCallable)
    void BowPullAnimeEnd();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void AttachWeapon_ForPartnerSkillPalWeapon_ToAll(APalWeaponBase* Weapon);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void AttachWeapon_ForNPC_ToAll(bool IsNotNull);
    
    UFUNCTION(BlueprintCallable)
    void AttachWeapon(APalWeaponBase* Weapon);
    
private:
    UFUNCTION(BlueprintCallable)
    void AddRapidFireBlur();
    
};

