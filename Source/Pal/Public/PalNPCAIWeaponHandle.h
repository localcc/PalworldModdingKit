#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalWeaponType.h"
#include "PalNPCWeaponCombatInfo.h"
#include "Templates/SubclassOf.h"
#include "PalNPCAIWeaponHandle.generated.h"

class AActor;
class APalWeaponBase;
class UPalAIActionBase;
class UPalStateMachineStateBase;

UCLASS(Blueprintable)
class PAL_API UPalNPCAIWeaponHandle : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInitializeEnd);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInitializeEnd OnInitializeEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalWeaponType, FPalNPCWeaponCombatInfo> CombatAIParamMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ShooterHuman;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalStateMachineStateBase> FireStateClass;
    
public:
    UPalNPCAIWeaponHandle();

    UFUNCTION(BlueprintCallable)
    void UnequipWeapon();
    
    UFUNCTION(BlueprintCallable)
    void TerminateNPCWeapon();
    
    UFUNCTION(BlueprintCallable)
    void ShootOneBullet();
    
    UFUNCTION(BlueprintCallable)
    void ShootBurstBullet(float PullSecond);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseTrigger();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetInConeShap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNear_NearRange(AActor* TargetActor, float NearRangePlusOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNear_FarRange(AActor* TargetActor, float FarRangePlusOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMagazineEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndInitialize();
    
    UFUNCTION(BlueprintCallable)
    void InitializeNPCWeapon(APalWeaponBase* WeaponActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseSideDashMovement();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSphereCastRadius();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShootInterval();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingBullet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReloadTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRandomMoveTimeMin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxShootCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMeleeAttackWithGun();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UPalStateMachineStateBase> GetFireStateClass();
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UPalAIActionBase> GetCombatClass();
    
private:
    UFUNCTION(BlueprintCallable)
    void FullReload();
    
public:
    UFUNCTION(BlueprintCallable)
    void EquipWeapon();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseBullet();
    
    UFUNCTION(BlueprintCallable)
    void AimToTarget(AActor* TargetActor, bool Aim, float DeltaTime);
    
};

