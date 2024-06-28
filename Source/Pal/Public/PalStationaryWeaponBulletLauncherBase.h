#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalStationaryWeaponBase.h"
#include "PalStationaryWeaponBulletLauncherBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API APalStationaryWeaponBulletLauncherBase : public APalStationaryWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackableDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackableAnglePitchRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackableAngleYawRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LauncherRotator, meta=(AllowPrivateAccess=true))
    FRotator LauncherRotator;
    
public:
    APalStationaryWeaponBulletLauncherBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRotator RotateLauncherCalculatePostProcess(const FRotator& InRotator);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LauncherRotator();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotateSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector GetRotateAxisWorldLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetLauncherRotator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttackableAngleYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttackableAnglePitch() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyRotateLauncher_BPImpl(const FRotator& Rotator);
    
};

