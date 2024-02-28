#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "PalAnimNotify_RequestRideShakeAnimation.generated.h"

class APalCharacter;
class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories)
class PAL_API UPalAnimNotify_RequestRideShakeAnimation : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApplyRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaySpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAdjustAnimationSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalCharacter> cacheCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> RateList;
    
public:
    UPalAnimNotify_RequestRideShakeAnimation();
private:
    UFUNCTION(BlueprintCallable)
    void OnStartAim() const;
    
    UFUNCTION(BlueprintCallable)
    void OnEndMotion(UAnimMontage* Montage, bool bInterrupted) const;
    
};

