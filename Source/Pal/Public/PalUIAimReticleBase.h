#pragma once
#include "CoreMinimal.h"
#include "PalItemId.h"
#include "PalUserWidget.h"
#include "PalUIAimReticleBase.generated.h"

class APalWeaponBase;
class UPalDynamicWeaponItemDataBase;
class UPalStaticItemDataBase;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIAimReticleBase : public UPalUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideDefaultReticle;
    
public:
    UPalUIAimReticleBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldHideDefaultReticle() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTick(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReticleDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReticleActivted(const FPalItemId& WeaponItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalStaticItemDataBase* GetCurrentWeaponStaticItemData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalDynamicWeaponItemDataBase* GetCurrentWeaponDynamicItemData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalWeaponBase* GetCurrentWeaponActor() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void DeactivateReticle();
    
    UFUNCTION(BlueprintCallable)
    void ActivateReticle(const FPalItemId& WeaponItemId);
    
};

