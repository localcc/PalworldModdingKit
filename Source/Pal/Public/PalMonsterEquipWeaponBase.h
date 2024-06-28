#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalWeaponBase.h"
#include "Templates/SubclassOf.h"
#include "PalMonsterEquipWeaponBase.generated.h"

class APalBullet;
class UNiagaraSystem;

UCLASS(Blueprintable)
class PAL_API APalMonsterEquipWeaponBase : public APalWeaponBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector BattleAimTargetLocation;
    
public:
    APalMonsterEquipWeaponBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    APalBullet* ShootOneBulletDefault();
    
    UFUNCTION(BlueprintCallable)
    APalBullet* ShootOneBullet(TSubclassOf<APalBullet> BulletClass, UNiagaraSystem* MuzzleEffect, FVector MuzzleLocation, FRotator MuzzleRotate, float BulrAngle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FRotator GetMuzzleRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector GetMuzzleLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UNiagaraSystem* GetMuzzleEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCommonTargetLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetBulrAngle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TSubclassOf<APalBullet> GetBulletClass();
    
};

