#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalMissileLauncherTargetInfo.h"
#include "PalAntiAirMissileLauncher.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class PAL_API APalAntiAirMissileLauncher : public AActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCannonDestroyedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCannonDestroyedDelegate OnCannonDestroyedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetSerchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackableInRangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetChangeIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReloadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LongPressTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FPalMissileLauncherTargetInfo> InRangeTargetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* AimTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid SelfCannonID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetChangeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsShooting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ReloadingTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsReloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsDisableInteractive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DestroyedFlag, meta=(AllowPrivateAccess=true))
    bool IsDestroyed;
    
public:
    APalAntiAirMissileLauncher(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void StartReload();
    
    UFUNCTION(BlueprintCallable)
    void RemoveInRangeActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseTrigger_ByBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleaseTrigger_BP();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ReleaseTrigger();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PullTrigger_BP();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PullTrigger();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DestroyedFlag();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDestroyWeapon_BP();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDeadByDamage();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDestroyedWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USceneComponent* GetYawMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USceneComponent* GetPitchMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EPalInteractiveObjectIndicatorType GetIndicatorType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAimTarget() const;
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DestroyByPlayerCon_ToAll();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddInRangeActor(AActor* Actor);
    

    // Fix for true pure virtual functions not being implemented
};

