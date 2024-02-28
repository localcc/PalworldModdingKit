#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalDamageAnimationReactionType.h"
#include "EPalDeadType.h"
#include "EPalWazaID.h"
#include "PalDamageInfo.h"
#include "PalDamageRactionInfo.h"
#include "PalDamageResult.h"
#include "PalDeadInfo.h"
#include "PalEachDamageRactionInfo.h"
#include "Templates/SubclassOf.h"
#include "PalDamageReactionComponent.generated.h"

class AActor;
class APalPlayerCharacter;
class UAnimMontage;
class UPalHitEffectSlot;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlipDamageDelegate, int32, Damage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSleepDelegate, int32, LastDamage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNooseTrapDelegate, AActor*, TrapActor, FVector, FixLocation);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMentalDamageDelegate, FPalDamageResult, DamageResult);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEachDamageReactionDelegate, FPalEachDamageRactionInfo, EachReactionInfo);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDyingDeadEnd, APalPlayerCharacter*, PlayerCharacter);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeadDelegate, FPalDeadInfo, DeadInfo);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamageReactionDelegate, FPalDamageRactionInfo, ReactionInfo);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamageDelegate, FPalDamageResult, DamageResult);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCaptureStartDelegate);

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalDamageReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamageDelegate OnDamageDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamageDelegate OnDamageDelegate_Always;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeadDelegate OnDeadDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDyingDeadEnd OnDyingDeadEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMentalDamageDelegate OnMentalDamageDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSleepDelegate OnSleepDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamageReactionDelegate OnDamageReactionDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEachDamageReactionDelegate OnEachDamageReactionDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSlipDamageDelegate OnSlipDamageDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCaptureStartDelegate OnCaptureStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNooseTrapDelegate OnNooseTrapDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalHitEffectSlot> DamageEffectSlotClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalHitEffectSlot* EffectSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> RateList;
    
public:
    UPalDamageReactionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SlipDamageAndBlowWhenDead(int32 Damage, FVector Velocity);
    
    UFUNCTION(BlueprintCallable)
    void SlipDamage(int32 Damage, bool ShieldIgnore, EPalDeadType DeadType);
    
private:
    UFUNCTION(BlueprintCallable)
    void ShowDeadDebugLog(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ProcessDeath_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ProcessDamage_ToServer(const FPalDamageInfo& Info);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PopupDamageBySlipDamage_ToALL(int32 Damage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayEachDamageReaction(FPalEachDamageRactionInfo EachReactionInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayDamageReaction(FPalDamageRactionInfo ReactionInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayAddDamageMotion(EPalDamageAnimationReactionType reactionType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHitNooseTrap(AActor* TrapActor, FVector FixLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnEndDamageMotion(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnDyingDeadEndDelegate_ToALL();
    
    UFUNCTION(BlueprintCallable)
    void ForceDamageDelegateForCaptureBall(AActor* Attacker);
    
public:
    UFUNCTION(BlueprintCallable)
    void DeathDamage_ForSelfDestruct(FVector Velocity, EPalWazaID WazaID);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallOnDamageDelegateAlways(FPalDamageResult DamageResult);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallDeadDelegate_ToALL(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ApplyDamageForMP(FPalDamageResult DamageResult);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ApplyDamageForHP(FPalDamageResult DamageResult);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ApplyDamageForDyingHP(FPalDamageResult DamageResult);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void AddDeadImplus(FPalDamageResult DamageResult);
    
};

