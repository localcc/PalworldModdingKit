#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "PalDamageResult.h"
#include "PalDeadInfo.h"
#include "PalInstanceID.h"
#include "PalHate.generated.h"

class AActor;

UCLASS(Blueprintable)
class PAL_API UPalHate : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalInstanceID, float> HateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle HateTimerHandle;
    
public:
    UPalHate();
private:
    UFUNCTION(BlueprintCallable)
    void SelfDeathEvent(FPalDeadInfo DeadInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceHateUp_ForActiveAndAttackOtomoPal(const AActor* OtomoPal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* FindMostHateTarget();
    
private:
    UFUNCTION(BlueprintCallable)
    void DamageEvent(FPalDamageResult DamageResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeHate(const AActor* Attacker, float PlusHateValue);
    
private:
    UFUNCTION(BlueprintCallable)
    void AttackSuccessEvent(FPalDamageResult DamageResult);
    
};

