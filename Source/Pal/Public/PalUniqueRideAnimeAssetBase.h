#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "WeaponNotifyAnimationInfo.h"
#include "PalUniqueRideAnimeAssetBase.generated.h"

class UAnimMontage;
class UAnimSequence;

UCLASS(Blueprintable)
class PAL_API UPalUniqueRideAnimeAssetBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IKPoleLocation_Hand_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IKPoleLocation_Hand_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IKPoleLocation_Foot_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IKPoleLocation_Foot_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableLeftHandIK_BallMotion;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* RidingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RidingAnimation_Ball_Aim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RidingAnimation_Ball_Fire;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWeaponNotifyAnimationInfo WeaponNotifyAnimInfo_Ball_Aim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWeaponNotifyAnimationInfo WeaponNotifyAnimInfo_Ball_Fire;
    
public:
    UPalUniqueRideAnimeAssetBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetRideAnimSequence();
    
};

