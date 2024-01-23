#pragma once
#include "CoreMinimal.h"
#include "PalActionBase.h"
#include "PalAction_LiftupThrow.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalAction_LiftupThrow : public UPalActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttachRelativeLocationOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttachToLeftHand;
    
public:
    UPalAction_LiftupThrow();
protected:
    UFUNCTION(BlueprintCallable)
    void PlayWeaponChangeAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPlayerThrowMontage();
    
    UFUNCTION(BlueprintCallable)
    void LaunchLiftObject();
    
};

