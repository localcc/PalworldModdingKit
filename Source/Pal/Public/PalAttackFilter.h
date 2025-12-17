#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalAdditionalEffectType.h"
#include "EPalBlowVelocityOwner.h"
#include "EPalElementType.h"
#include "EPalWazaID.h"
#include "PalDamageInfo.h"
#include "PalHitFilter.h"
#include "PalAttackFilter.generated.h"

class AActor;
class UNiagaraSystem;

UCLASS(Blueprintable, EditInlineNew)
class UPalAttackFilter : public UPalHitFilter {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnAttackDelegate, AActor*, Defencer, const FPalDamageInfo&, DamageInfo, int, HitCount, UPrimitiveComponent*, AttackerComponent);

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackDelegate OnAttackDelegate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWazaID Waza;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBlowVelocityOwner VelocityOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NativeBlowVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WazaPowerRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> OverrideHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalElementType OverrideElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalAdditionalEffectType OverrideAdditionalEffectType1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalAdditionalEffectType OverrideAdditionalEffectType2;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Attacker;
    
public:
    UPalAttackFilter();
};

