#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "EPalOilrigType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalLevelObjectActor.h"
#include "PalOilrigHandledActorInterface.h"
#include "PalOilRigCannonBase.generated.h"

class AActor;
class APalOilrigController;
class USceneComponent;

UCLASS(Blueprintable)
class PAL_API APalOilRigCannonBase : public APalLevelObjectActor, public IPalInteractiveObjectIndicatorInterface, public IPalOilrigHandledActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeTargetInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BulletSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LongPressTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlyFlyTarget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TargetActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* AimTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ChangeTargetTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsShooting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsInConeAimTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsDisableInteractive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DestroyedFlag, meta=(AllowPrivateAccess=true))
    bool IsDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalOilrigType SelfOilrigType;
    
public:
    APalOilRigCannonBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SyncDestroyObject_ToAll();
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestDestroyWeapon();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveOverlapCharacter(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ReleaseTrigger_ToAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleaseTrigger_BP();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PullTrigger_ToAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PullTrigger_BP();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_DestroyedFlag();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDestroyedWeapon_ForBP();
    
    UFUNCTION(BlueprintCallable)
    void OnDestroyedWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShootingGun();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDestroyedWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USceneComponent* GetYawMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USceneComponent* GetPitchMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EPalInteractiveObjectIndicatorType GetIndicatorType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalOilrigController* FindOilrigController();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DestroyWeapon_ToAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeDefaultVisual_BP();
    
    UFUNCTION(BlueprintCallable)
    bool CanRayCastToTarget();
    
    UFUNCTION(BlueprintCallable)
    void AddOverlapCharacter(AActor* Actor);
    
};

