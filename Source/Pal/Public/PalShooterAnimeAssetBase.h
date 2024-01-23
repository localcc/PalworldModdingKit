#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EWeaponAnimationType.h"
#include "WeaponAnimationInfo.h"
#include "PalShooterAnimeAssetBase.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class PAL_API UPalShooterAnimeAssetBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponAnimationInfo AnimeInfo;
    
public:
    UPalShooterAnimeAssetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeRideMontage(UAnimMontage* NextAnim, EWeaponAnimationType AnimType);
    
};

