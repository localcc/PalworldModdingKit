#pragma once
#include "CoreMinimal.h"
#include "PalStaticItemDataBase.h"
#include "PalStaticWeaponItemData.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalStaticWeaponItemData : public UPalStaticItemDataBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MagazineSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SneakAttackRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefenseValue;
    
public:
    UPalStaticWeaponItemData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponDefense() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponBaseDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSneakAttackRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxMagazineSize() const;
    
};

