#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalOilRigCannonBase.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class PAL_API APalOilRigCannonBase : public AActor {
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
    
public:
    APalOilRigCannonBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShootingGun();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USceneComponent* GetYawMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USceneComponent* GetPitchMesh() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanRayCastToTarget();
    
    UFUNCTION(BlueprintCallable)
    void AddOverlapCharacter(AActor* Actor);
    
};

