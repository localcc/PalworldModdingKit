#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPalAdditionalEffectType.h"
#include "EPalDamageAnimationReactionType.h"
#include "EPalPassiveSkillEffectType.h"
#include "EPalShooterFlagContainerPriority.h"
#include "EPalWeaponType.h"
#include "EWeaponCoopType.h"
#include "EWeaponNotifyType.h"
#include "EWeaponPlaySoundType.h"
#include "FlagContainer.h"
#include "PalDataTableRowName_SoundID.h"
#include "PalItemData.h"
#include "PalItemId.h"
#include "PalOwnerCharacterAcquirableInterface.h"
#include "PalPassiveSkillEffect.h"
#include "PalSoundOptions.h"
#include "PalSpecialAttackRateInfo.h"
#include "Templates/SubclassOf.h"
#include "PalWeaponBase.generated.h"

class APalBackWeaponBase;
class APalBullet;
class APalCharacter;
class UCameraShakeBase;
class UCurveFloat;
class UForceFeedbackEffect;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UPalDynamicItemDataBase;
class UPalDynamicWeaponItemDataBase;
class UPalSoundSlot;
class UPalStaticWeaponItemData;
class USceneComponent;
class UTexture2D;

UCLASS(Blueprintable)
class APalWeaponBase : public AActor, public IPalOwnerCharacterAcquirableInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponNotifyDelegate, EWeaponNotifyType, NotifyType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUseBulletDelegate, int32, remainingBulletsNum);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReloadBulletsDelegate, int32, bulletsNum);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalChangeHiddenWeaponDelegate, bool, bIsHidden);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnShootBulletDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDetachWeaponDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCoolDownUpdateDelegate, float, RemainingTime, float, CoolDownTime);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeCoolDownStateDelegate, bool, IsStart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAttachWeaponDelegate);
    DECLARE_DYNAMIC_DELEGATE_RetVal(int32, FGetWeaponDamageDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FForceUpdateBulletDelegate, int32, remainingBulletsNum);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCreatedBulletDelegate, APalBullet*, Bullet);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReloadBulletsDelegate OnReloadDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FForceUpdateBulletDelegate OnForceUpdateBulletDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUseBulletDelegate OnUseBulletDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShootBulletDelegate OnShootBulletDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeCoolDownStateDelegate OnChangeCoolDownStateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCoolDownUpdateDelegate OnCoolDownUpdateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreatedBulletDelegate OnCreatedBulletDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetWeaponDamageDelegate OnGetWeaponDamageDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttachWeaponDelegate OnAttachWeaponDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDetachWeaponDelegate OnDetachWeaponDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponNotifyDelegate OnWeaponNotifyDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalChangeHiddenWeaponDelegate OnChangedHiddenWeaponDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BulletDeleteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BulletDeleteTimePVP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BulletDecayStartRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RecoilCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoilYawRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoilPitchTotalMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoilDecaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> ShotCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ShotForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponCoopType WeaponCoopType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWeaponType WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRequiredBullet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRequiredBulletForAltFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BulletItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ShootBlurMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ShootBlurAlphaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalSpecialAttackRateInfo> SpecialAttackRateInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> weaponIconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalDamageAnimationReactionType weaponBulletDamageReactionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPalSoundSlot> PalSoundSlotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeaponPlaySoundType, FPalDataTableRowName_SoundID> PlaySoundIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsEmptyOtomoPal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTriggerOnlyFireWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTriggerOnlyAltFireWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PvPDamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PvPBuildingDamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PvPPlayerToGuildPalDamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInfinityMagazine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOverrideAnimRateScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideAnimRateScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOverrideTargetRayCastMaxDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideTargetRayCastMaxDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UMaterialInterface*, UMaterialInterface*> OverrideMaterialMap_ForUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AltFireActionName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ShootBlurMaterialDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalItemId ownItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalItemData ownItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalStaticWeaponItemData* ownWeaponStaticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalDynamicWeaponItemDataBase* ownWeaponDynamicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer HiddenWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalSoundSlot* PalSoundSlotCache;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoilPowerRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsScopeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsOneBulletReloadWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayDestorySecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUnnecessaryDynamicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalShooterFlagContainerPriority ShooterFlagPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalBackWeaponBase> BackWeaponClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalBackWeaponBase* BackWeaponModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LoadoutSelectorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OriginalMaterials;
    
public:
    APalWeaponBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnbindGetWeaponDamageDelegate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalDynamicWeaponItemDataBase* TryGetDynamicWeaponData() const;
    
    UFUNCTION(BlueprintCallable)
    void StartCoolDown(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetupWeaponSkill();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetHiddenWeaponMyself(bool isHidden);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHiddenWeaponDefault(bool isHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenWeapon(FName flagName, bool isHidden);
    
    UFUNCTION(BlueprintCallable)
    void SendWeaponNotify(EWeaponNotifyType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool SeekRightHandOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool SeekLeftHandOpen() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RPCDummy();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReserveSummonWeapon();
    
    UFUNCTION(BlueprintCallable)
    void RequestConsumeItem_ForThrowWeapon(const FName& StaticItemId, int32 ConsumeNum);
    
    UFUNCTION(BlueprintCallable)
    void RequestConsumeItem(const FName& StaticItemId, int32 ConsumeNum);
    
public:
    UFUNCTION(BlueprintCallable)
    bool ReloadBullets();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReleaseSummonWeapon();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlaySoundWithOption(const FPalDataTableRowName_SoundID& ID, const FPalSoundOptions& Arg);
    
    UFUNCTION(BlueprintCallable)
    void PlaySound(const FPalDataTableRowName_SoundID& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponNotify(EWeaponNotifyType Type);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSummonWeapon(int32 SummonCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopReload();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartAim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestClosing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReloadStart(float InReloadSpeedPlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReleaseTrigger(bool bCanShootOnRelease);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReleaseAltTrigger(bool bCanShootOnRelease);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPullTrigger();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPullCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPullAltTrigger();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndAim();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDetachWeapon(AActor* detachActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCreatedDynamicItemDataInClient(UPalDynamicItemDataBase* CreatedItemData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCreatedBullet(APalBullet* Bullet);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeTargetDirection(FVector Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttachWeapon(AActor* attachActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimNotifyEnd(FName NotifyName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimNotifyBegin(FName NotifyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsUseLeftHandAttach() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsNeedCheckSummonWeapon() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlledWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHiddenWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullMagazine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistBulletInPlayerInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistAltFireBulletInPlayerInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsEnableAutoAim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsEnableAltFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsEmptyMagazine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCoolDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetWeaponEffectValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    EPalAdditionalEffectType GetWeaponEffectType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetWeaponDamageFromDelegate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponDamage_forPlayerFlamethrower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetWeaponDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponBaseDamage() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    AActor* GetWeaponAttacker();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalSpecialAttackRateInfo> GetSpecialAttackRateInfos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSneakAttackRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalPassiveSkillEffect> GetSkillEffectList();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShooterComponentBlurRate();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRequiredBulletName(FName& outName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingCoolDownTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetRemainBulletCount() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRandomStream GetRandomStream() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRandomFloat(float Min, float Max);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetPvPPlayerToGuildPalDamageRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetPvPBuildingDamageRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetParameterWithPassiveSkillEffect(float originalValue, EPalPassiveSkillEffectType EffectType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    APalCharacter* GetOwnerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetNPCWeaponDamage() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNeedSpawnSummonWeaponCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSummonCount();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetMainMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMagazineSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FTransform GetLeftHandTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalItemId GetItemId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInventoryBulletCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FName GetEquipSocketName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetDefaultBlurAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetBulletShootRootLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBulletDeleteTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlurModifierValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAltFireActionName() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 DecrementCurrentSelectPalSphere(int32 RequestConsumeNum, FName& UsedItemID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DecrementBullet();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseDurabilityWithValue(float Durability);
    
    UFUNCTION(BlueprintCallable)
    void DecreaseDurability();
    
    UFUNCTION(BlueprintCallable)
    void ClearWeaponSkill();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearSummonWeapon();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanUseAltFire() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanReserveSummonWeapon();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanDealDamageWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CalcStability();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CalcRange();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CalcDPS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CalcAccuracy();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyOverrideMaterial_ForUI();
    

    // Fix for true pure virtual functions not being implemented
};

