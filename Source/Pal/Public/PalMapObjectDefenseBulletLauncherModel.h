#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectDefenseModelBase.h"
#include "PalMapObjectDefenseBulletLauncherModel.generated.h"

class AActor;
class APalCharacter;
class APalMapObject;
class APalStationaryWeaponBase;
class UPalMapObjectEnergyModule;

UCLASS(Blueprintable)
class UPalMapObjectDefenseBulletLauncherModel : public UPalMapObjectDefenseModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalMapObject> WeakLauncherControlMapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalStationaryWeaponBase> WeakWeapon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 remainingBulletsNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MagazineSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName BulletItemName;
    
public:
    UPalMapObjectDefenseBulletLauncherModel();
    UFUNCTION(BlueprintCallable)
    void UseBullet();
    
    UFUNCTION(BlueprintCallable)
    void TurnToTarget(const AActor* TargetActor, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetWeapon(APalStationaryWeaponBase*& OutWeapon) const;
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerCharacter(const APalCharacter* OwnerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableTrigger(bool EnableTrigger);
    
    UFUNCTION(BlueprintCallable)
    void ReloadBullets(int32 ReloadBulletsNum);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateEnergyModuleState(UPalMapObjectEnergyModule* EnergyModule);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingBulletsNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMagazineSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBulletName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttackableDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttackableAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAvailable() const;
    
};

