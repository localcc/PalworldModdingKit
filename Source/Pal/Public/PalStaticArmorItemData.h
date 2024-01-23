#pragma once
#include "CoreMinimal.h"
#include "PalStaticItemDataBase.h"
#include "PalStaticArmorItemData.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalStaticArmorItemData : public UPalStaticItemDataBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefenseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HPValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShieldValue;
    
public:
    UPalStaticArmorItemData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShieldValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHPValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefenseValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAttackValue() const;
    
};

