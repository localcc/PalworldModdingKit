#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalWeaponBase.h"
#include "Templates/SubclassOf.h"
#include "PalUniqueRideWeaponBase.generated.h"

class AActor;
class APalBullet;
class UMeshComponent;
class UNiagaraSystem;
class UPalActionBase;
class UPalActionComponent;

UCLASS(Blueprintable)
class PAL_API APalUniqueRideWeaponBase : public APalWeaponBase {
    GENERATED_BODY()
public:
    APalUniqueRideWeaponBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ShootOneBulletByDefault();
    
    UFUNCTION(BlueprintCallable)
    void ShootOneBullet(TSubclassOf<APalBullet> bulletClass, UNiagaraSystem* MuzzleEffect, FVector MuzzleLocation, FRotator MuzzleRotate, float BulrAngle, TSubclassOf<AActor> AmmoClass, FTransform AmmoEject);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUniqueShoot();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancellShooting();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnActionCompleted(const UPalActionComponent* ActionComp);
    
    UFUNCTION(BlueprintCallable)
    void OnActionBegin(const UPalActionBase* action);
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform GetAmmoEjectTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSubclassOf<AActor> GetAmmoClass();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetAllMeshComponent(TArray<UMeshComponent*>& OutMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUse();
    
};

