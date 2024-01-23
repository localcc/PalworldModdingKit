#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalBlowVelocityOwner.h"
#include "EPalWazaID.h"
#include "PalHitFilter.h"
#include "PalAttackFilter.generated.h"

class AActor;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAttackDelegate);

UCLASS(Blueprintable, EditInlineNew)
class UPalAttackFilter : public UPalHitFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackDelegate OnAttackDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWazaID Waza;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBlowVelocityOwner VelocityOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NativeBlowVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WazaPowerRate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Attacker;
    
public:
    UPalAttackFilter();
};

